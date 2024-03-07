#include <iostream>
#include <cstring>
#define endl "\n"

using namespace std;

int arr[21] = {0, };

void add() {
    int x;
    cin >> x;
    if(arr[x] == 0) {
        arr[x] = 1;
    }
}

void remove() {
    int x;
    cin >> x;
    if(arr[x] == 1) {
        arr[x] = 0;
    }
}

void check() {
    int x;
    cin >> x;
    if(arr[x] == 1) cout << 1 << endl;
    else cout << 0 << endl;
}

void toggle() {
    int x;
    cin >> x;
    if(arr[x] == 1) arr[x] = 0;
    else if(arr[x] == 0) arr[x] = 1;
}

void all() {
    for (int i = 1; i <= 20; i++){
        arr[i] = 1;
    }
}

void empty() {
    memset(arr,0, sizeof(arr));
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        string s;
        cin >> s;
        if(s == "add"){add();}
        else if(s == "remove"){ remove();}
        else if(s == "check"){check();}
        else if(s == "toggle"){toggle();}
        else if(s == "all"){all();}
        else if(s == "empty"){ empty();}
    }
    return 0;
}