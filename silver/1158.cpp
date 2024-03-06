#include <iostream>
#include <list>
#include <vector>

using namespace std;

int K, N;
list<int> l;
vector<int> v;

int main() {
    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        l.push_back(i);
    }

    list<int>::iterator iter = l.begin();

    while(!l.empty()) {
        for(int j = 0; j < K-1; j++) {
            int temp = l.back();
            if(temp == *iter) { //iter가 끝에 다다르면 다시 처음으로 reset시켜줌.
                iter = l.begin();
            }

            else {
                iter++;
            }
        }
        v.push_back(*iter);
        if(*iter == l.back()) {
            l.erase(iter);
            iter = l.begin();
        }
        else {iter = l.erase(iter);}
    }

    cout << "<";
    for (int i = 0; i < N -1; i++) {
        cout << v[i] << ", ";
    }
    cout << v[N-1] << ">";



    return 0;
}