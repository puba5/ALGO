#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


class FriendScore {

public:
    int highestScore(vector<string> friends) {

        int ans = 0;
        int len = friends.size();
        for (int i = 0; i < len; i++) {
            int cnt = 0;

            for (int j = 0; j < len; j++) {
                if (friends[i][j] == 'Y') {
                    cnt++;
                }
                else if(i!=j){
                    for (int k = 0; k < len; k++) {
                        if (friends[i][k] == 'Y' && friends[j][k] == 'Y') {
                            cnt++;
                            break;
                        }
                    }
                }
            }
            ans = max(ans, cnt);
        }


        return ans;
    }
};
