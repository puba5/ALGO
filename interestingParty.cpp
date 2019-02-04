#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
#include <iterator>

using namespace std;

class InterestingParty {

public:
    int bestInvitation(vector<string> first, vector<string> second) {
        map<string, int> m;
        for (int i = 0; i < first.size(); i++) {
            m[first[i]]++;
            m[second[i]]++;
        }
        int ans = 0;
        map<string, int>::iterator it;

        for (it = m.begin(); it != m.end(); ++it){
            ans = max(ans, (*it).second);
            cout << (*it).first <<(*it).second << endl;
        }
        return ans;
    }
};

int main() {

    InterestingParty party;
    cout << party.bestInvitation({"f", "b", "c"}, {"c", "d", "e"});

    return 0;
}