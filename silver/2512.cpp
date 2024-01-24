#include <iostream>


using namespace std;
int region[15000];

void bubleSort(int x) { //굳이 이렇게 안하고 sort 함수 써도 됨
    for(int i = 0; i < x; i ++) {
        for (int j = 0 ; j < x - i - 1; j++) {
            if(region[j] > region[j + 1])
                swap(region[j], region[j+1]);
        }
    }
}

void calBudget(double x, double budget) {
    double avgBudget = budget / x ;
    double remainRegion = x;
    int max = 0;

    for(int i = 0; i < x; i++){
        if(region[i] <= avgBudget) { //요구하는 예산이 상한액보다 적을 때
            if(region[i] > max) //최댓값 예산 업데이트
                max = region[i];
            budget = budget - region[i];
        }
        else { //상한액보다 요구하는 예산이 많을 때
            max = avgBudget;
            budget = budget - avgBudget;
        }
        remainRegion--;
        avgBudget = budget / remainRegion; //상한액 업데이트
    }

    cout << max;
}

int main() {
    double x, budget;
    cin >> x;

    for(int i = 0; i < x; i++) {
        cin >> region[i];
    }
    cin >> budget;

    bubleSort(x);
    calBudget(x, budget);

    return 0;
}