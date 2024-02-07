    #include <iostream>
    #include <string>

    using namespace std;

    int main() {
        string n;
        cin>> n;
        int count = 0;
        int stick = 0;

        int size = n.size();

        for (int i = 0; i < size; i++) {
            if (n[i] == '(') {
                stick++;
                count++;
            } else if (n[i] == ')') {
                if (n[i - 1] == '(') {
                    stick--;
                    count--;
                    count = count + stick;
                } else {
                    stick--;
                }
            }
        }

        cout << count;

        return 0;
    }