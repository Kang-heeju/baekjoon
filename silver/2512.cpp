#include <iostream>


using namespace std;
int region[15000];

void bubleSort(int x) {
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
        if(region[i] <= avgBudget) {
            if(region[i] > max)
                max = region[i];
            budget = budget - region[i];
        }
        else {
            max = avgBudget;
            budget = budget - avgBudget;
        }
        remainRegion--;
        avgBudget = budget / remainRegion;
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