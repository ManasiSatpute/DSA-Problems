#include <iostream>
#include <string>

using namespace std;

int countingValleys(int steps, string path) {
    int level = 0;
    int count = 0;

    for (int i = 0; i < steps; i++) {
        if (path[i] == 'D') {
            level--;
        } else {
            level++;

            // Valley completed when we return to sea level
            if (level == 0) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int steps;
    cin >> steps;

    string path;
    cin >> path;

    int result = countingValleys(steps, path);

    cout << result << "\n";

    return 0;
}
