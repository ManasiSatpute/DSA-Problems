# Stone Game VIII — Approach & Analysis

## Approach

Every move a player makes is equivalent to choosing a "cut point" `i`
(0-indexed, `i >= 1`) and taking the sum of `stones[0..i]` as the score for
that move. After that move, a new stone equal to that prefix sum is placed
at the front, and the game continues from index `i` onward for the next
player. Because merging the first `x` stones back into one stone whose
value is the sum simply collapses the prefix, **any move in this game can
be described purely by which prefix sum `prefix[i]` the current player
"claims."** Crucially, once a player claims `prefix[i]`, all smaller cut
points `j < i` are no longer reachable by future players — the game only
ever moves *forward* through increasing prefix indices.

This turns the problem into: given the prefix sum array, players
alternately pick an increasing sequence of indices `i_1 < i_2 < ... `
(starting at index >= 1), and the value assigned to whoever picks index
`i_k` is `prefix[i_k]` added to their score, minus what the opponent gets
afterward (since the opponent then plays optimally on the remaining
suffix).

Define `dp[i]` = the best achievable score difference (current player's
score − opponent's score) considering only the game restricted to cut
points `>= i`. Then:

- If the current player stops here (claims index `i`), the difference
  contributed is `prefix[i] - dp[i+1]`, because whatever the opponent
  achieves from the remaining suffix is subtracted from the current
  player's net advantage.
- If the current player instead prefers not to claim `i` (skip it and
  let the "effective decision" move to `i+1`), the difference is `dp[i+1]`.

So:
```
dp[i] = max(prefix[i] - dp[i+1], dp[i+1])
```

The base case is the last index `n-1`: the only remaining option there is
to take everything, so `dp[n-1] = prefix[n-1]`.

The answer to the problem is `dp[1]`, since the first move must take at
least 2 stones (`x > 1`), meaning the smallest usable cut index is `1`.

## Algorithm

1. **Build prefix sums in place.** Overwrite `stones[i]` with
   `stones[i] + stones[i-1]` for `i = 1 .. n-1`, so `stones[i]` now holds
   `prefix[i]`.
2. **Initialize** `ans = stones[n-1]` (this is `dp[n-1]`).
3. **Iterate `i` from `n-2` down to `1`**, updating
   `ans = max(ans, stones[i] - ans)`.
   - Here `ans` before the update plays the role of `dp[i+1]`.
   - `stones[i] - ans` corresponds to claiming index `i`.
   - Comparing against the old `ans` corresponds to skipping index `i`.
4. **Return `ans`**, which equals `dp[1]`, the optimal score difference
   for Alice starting the game.

This works because the recurrence only ever needs the previously computed
`dp[i+1]` value, so it can be computed with a single backward pass and
O(1) extra state, folding naturally into the same loop that would
otherwise need a separate `dp` array.

## Time Complexity

- **Time:** `O(n)` — one pass to build prefix sums, one pass to compute
  the DP.
- **Space:** `O(1)` extra space — prefix sums are computed in place by
  overwriting the input array, and the DP only needs the single running
  value `ans`.
