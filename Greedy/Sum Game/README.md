# Sum Game

A problem combining math and game theory. Alice and Bob
fill in the `'?'` characters of a digit string, and we need to determine —
assuming both play optimally — whether Alice can force the two halves of the
string to end up with unequal digit sums.


## Approach

Let:
- `alice` = sum of the known (non-`?`) digits in the first half
- `bob`   = sum of the known (non-`?`) digits in the second half
- `a`     = count of `'?'` in the first half
- `b`     = count of `'?'` in the second half

**Key insight — pairing strategy:**
Whatever `'?'` one player fills in, the other player can respond by filling
in a `'?'` on the *opposite* half (if one is available) with a digit chosen
to cancel out (or preserve) the difference. Specifically, if the opponent
sets some `'?'` to digit `d`, the responding player can set a `'?'` on the
other side to `9 - d`. This keeps the "swing" of every such pair fixed at
exactly `9` (since `d + (9 - d) = 9`), regardless of what digit was chosen.

This means:
1. As long as both halves still have unmatched `'?'`s, they can be paired
   off, and the *last mover* in each pair controls whether that pair's
   contribution to `alice - bob` is forced toward equality or away from it.
2. Whoever moves *last overall on the unmatched `'?'`s* decides the outcome
   of any leftover, unpaired `'?'`s.

Working through the parity/optimal-play argument (a well-known result for
this problem) collapses to a single closed-form check:

```
Bob wins  ⇔  2 * (alice - bob) + 9 * (a - b) == 0
Alice wins otherwise
```

Intuition for the formula:
- `2 * (alice - bob)` accounts for the fact that the *known* imbalance
  must be closed.
- `9 * (a - b)` accounts for the imbalance in the *number* of blanks on
  each side — every unmatched `'?'` can swing the difference by up to `9`
  in either direction under optimal play, and the "9" comes from the
  digit range `0–9` (max digit `9`, and pairing digits `d` and `9-d`
  always sums to `9`).
- If this expression is exactly `0`, Bob can always force the sums equal
  regardless of Alice's choices. Otherwise, Alice can always force them to
  differ.

### Why this works at a high level

- If `a == b` (equal blanks on each side), Bob can always mirror Alice's
  move on the opposite half with `9 - d`, keeping the running difference
  constant. Bob wins exactly when the *initial* known difference
  `2 * (alice - bob)` is already `0`.
- If `a != b`, the side with more blanks has "extra" `'?'`s that can't be
  mirrored. Whoever is forced to move on these leftover blanks can swing
  the sum difference, and careful analysis of who moves last on them
  reduces to the same formula above (the coefficient `9` reflecting the
  maximum swing per unmatched blank, split between the two players).

## Complexity

- **Time:** `O(n)` — a single pass to tally sums and blank counts per half.
- **Space:** `O(1)` — only a handful of counters are used.

## Examples

| Input | Output | Why |
|---|---|---|
| `"5023"` | `false` (Bob wins) | No blanks; `5+0 == 2+3` already. |
| `"25??"` | `true` (Alice wins) | Alice can pick a `'?'` and set it to `9`, making it impossible for Bob to re-equalize. |
| `"?3295???"` | `false` (Bob wins) | Blanks and known sums balance out under optimal play. |

