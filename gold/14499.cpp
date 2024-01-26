#include <iostream>
#include <string>

using namespace std;

int dice[10] = {0, };
int across[7];
int map[21][21];
int N, M, x, y, K;
pair<int, int> p; //현재 주사위의 위치 지정


void UpdateDice(string direction) {
    if(direction == "north") {
        int temp;
        temp = dice[6];
        dice[6] = dice[5];
        dice[5] = dice[1];
        dice[1] = dice[2];
        dice[2] = temp;
    }
    else if(direction == "south") {
        int temp = dice[6];
        dice[6] = dice[2];
        dice[2] = dice[1];
        dice[1] = dice[5];
        dice[5] = temp;
    }
    else if(direction == "east") {
        int temp = dice[6];
        dice[6] = dice[3];
        dice[3] = dice[1];
        dice[1] = dice[4];
        dice[4] = temp;
    }
    else if(direction == "west") {
        int temp = dice[6];
        dice[6] = dice[4];
        dice[4] = dice[1];
        dice[1] = dice[3];
        dice[3] = temp;
    }
}


void simulation() {
    int cur = 6; //현재 주사위 바닥면
    p.first = x;
    p.second = y;
    for (int reps = 0; reps < K; reps++) {
        int move;
        cin >> move;

        if(move == 1) { // 동쪽
            int xx = p.first;
            int yy = p.second + 1;


            if ( xx >=0 && xx < N && yy >=0 && yy < M){
                int k = map[xx][yy];
                if (k == 0) {
                    UpdateDice("east");
                    map[xx][yy] = dice[cur];
                    cout << dice[1] << endl;
                }
                else {
                    UpdateDice("east");
                    dice[cur] = map[xx][yy];
                    map[xx][yy] = 0;
                    cout << dice[1] << endl;
                }
            }

            else continue;
            p.first = xx;
            p.second = yy;

        }

        else if(move == 2) { // 서쪽
            int xx = p.first;
            int yy = p.second - 1;


            if ( xx >=0 && xx < N && yy >=0 && yy < M){
                int k = map[xx][yy];
                if (k == 0) {
                    UpdateDice("west");
                    map[xx][yy] = dice[cur];
                    cout << dice[1] << endl;
                }
                else {
                    UpdateDice("west");
                    dice[cur] = map[xx][yy];
                    map[xx][yy] = 0;
                    cout << dice[1] << endl;
                }
            }

            else continue;
            p.first = xx;
            p.second = yy;
        }

        else if(move == 3) { // 북쪽
            int xx = p.first - 1;
            int yy = p.second;


            if ( xx >=0 && xx < N && yy >=0 && yy < M){
                int k = map[xx][yy];
                if (k == 0) {
                    UpdateDice("north");
                    map[xx][yy] = dice[cur];
                    cout << dice[1] << endl;
                }
                else {
                    UpdateDice("north");
                    dice[cur] = map[xx][yy];
                    map[xx][yy] = 0;
                    cout << dice[1] << endl;
                }
            }

            else continue;
            p.first = xx;
            p.second = yy;

        }

        else if (move == 4) { // 남쪽
            int xx = p.first + 1;
            int yy = p.second;


            if ( xx >=0 && xx < N && yy >=0 && yy < M){
                int k = map[xx][yy];
                if (k == 0) {
                    UpdateDice("south");
                    map[xx][yy] = dice[cur];
                    cout << dice[1] << endl;
                }
                else {
                    UpdateDice("south");
                    dice[cur] = map[xx][yy];
                    map[xx][yy] = 0;
                    cout << dice[1] << endl;
                }
            }

            else continue;
            p.first = xx;
            p.second = yy;

        }
    }
}

int main() {
    cin >> N >> M >> x >> y >> K;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> map[i][j];
        }
    }

    simulation();


    return 0;
}