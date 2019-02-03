#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class KiwiJuiceEasy {

public:
    vector<int> thePouring(vector<int> capacities, vector<int> bottles, vector<int> fromId, vector<int> toId) {
        for (int i = 0; i < toId.size(); i++) {

            int space = capacities[toId[i]] - bottles[toId[i]];

            if (bottles[fromId[i]] > space) {
                bottles[toId[i]] = capacities[toId[i]];
                bottles[fromId[i]] -= space;

            } else {
                bottles[toId[i]] += bottles[fromId[i]];
                bottles[fromId[i]] = 0;

            }


        }
        return bottles;

    }

};


int main() {
    KiwiJuiceEasy a;
    vector<int> b = {700000, 800000, 900000, 1000000};
    vector<int> c = {6,34 , 27,38,9,60};
    vector<int> d = {1,2,4,5,3,3,1,0};
    vector<int> e = {0,1,2,4,2,5,3,1};
    for(int i=0;i<b.size();i++)
    cout << a.thePouring(b, c, d, e)[i] << " ";

    return 0;
}