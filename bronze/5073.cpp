#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;

int main() {
    int x , y, z;
    while(true) {
        cin >> x >> y >> z;
        if (!x) {
            break;
        }
        v.push_back(x);
        v.push_back(y);
        v.push_back(z);
        sort(v.begin(), v.end());
        x = v[0];
        y = v[1];
        z = v[2];

        if ( (x + y) <= z) {
            cout << "Invalid\n";
        }
        else if(x == y && y == z && z ==x) {
            cout << "Equilateral" << endl;
        }

        else if (x == y || y == z || z == x) {
            cout << "Isosceles\n";
        }

        else {
            cout << "Scalene\n";
        }
        v.clear();

    }

    return 0;
}