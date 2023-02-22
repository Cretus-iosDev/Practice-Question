#include <iostream>
#include <vector>
using namespace std;

string happyLadybugs(string b) {
    // count the number of each color
    vector<int> color_count(26);
    for (char c : b) {
        if (c != '_') {
            color_count[c - 'A']++;
        }
    }

    // check if all ladybugs of a color are already happy
    for (int i = 0; i < 26; i++) {
        if (color_count[i] == 1) {
            return "NO";
        }
    }

    // check if there are any empty cells
    bool has_empty_cell = false;
    for (char c : b) {
        if (c == '_') {
            has_empty_cell = true;
            break;
        }
    }

    // if there are no empty cells, check if all ladybugs are happy
    if (!has_empty_cell) {
        for (int i = 1; i < b.size() - 1; i++) {
            if (b[i] != b[i-1] && b[i] != b[i+1]) {
                return "NO";
            }
        }
        return "YES";
    }

    // if there are empty cells, move ladybugs around to make them happy
    return "YES";
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n;
        string b;
        cin >> n >> b;
        cout << happyLadybugs(b) << endl;
    }
    return 0;
}
