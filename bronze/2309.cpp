#include <iostream>
#include <algorithm>
#include <vector>
#define endl '\n'
using namespace std;

int main() {
    int sum = 0;
    vector<int> dwarf;

    for (int i = 0; i < 9; i++) {
        int temp;
        cin >> temp;
        dwarf.push_back(temp);
        sum += temp;
    }
    std::sort(dwarf.begin(), dwarf.end());

    for(int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (i != j) {
                if (sum - dwarf[i] - dwarf[j] == 100) {
                    dwarf.erase(dwarf.begin() + i);
                    dwarf.erase(dwarf.begin() + j-1);
                    break;
                }
            }
        }
        if (dwarf.size() == 7) break;
    }

    for (int k = 0; k < dwarf.size(); k++) {
        cout << dwarf[k] << endl;
    }
    return 0;
}