#include <iostream>

using namespace std;

int vx[] = {1, -1, 0, 0};
int vy[] = {0, 0, -1, 1};
bool visit[100][100] = {false};
double prob[4];

class CrazyBot {

public:

    double getProbability(int n, int east, int west, int south, int north) {

        prob[0] = east / 100.0;
        prob[1] = west / 100.0;
        prob[2] = south / 100.0;
        prob[3] = north / 100.0;
        return dfs(50, 50, n);

    }

    double dfs(int x, int y, int n) {
        if (visit[x][y] == 1) {
            return 0;
        }
        if (n == 0) {
            return 1;
        }
        visit[x][y] = true;
        double ans = 0;
        for (int i = 0; i < 4; i++) {
            ans += dfs(x + vx[i], y + vy[i], n - 1) * prob[i];
        }
        visit[x][y] = false;
        return ans;
    }

};