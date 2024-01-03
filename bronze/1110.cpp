#include <iostream>

using namespace std;

int N;
int cycle = 0;

void checkcycle(int n) {
    int first = n / 10;
    int second = n % 10;
    int temp = (first + second) % 10;
    int num = second * 10 + temp;
    cycle++;

    while (n != num) {
        cycle++;
        first = num / 10;
        second = num % 10;
        temp = (first + second) % 10;
        num = second * 10 + temp;
    }

}

int main() {
    cin >> N;
    checkcycle(N);
    cout << cycle;

    return 0;
}