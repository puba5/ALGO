#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class KiwiJuiceEasy{

    public:
    vector<int> thePouring(vector<int> capacities, vector<int> bottles, vector<int> fromId,
    vector<int> toId){
        for(int i=0;i<toId.size();i++){
            int space = capacities[i]- bottles[i];

            if(bottles[fromId[i]]>space){
                bottles[toId[i]]=capacities[toId[i]];
                bottles[fromId[i]]-=space;

            }else{
                bottles[toId[i]] += bottles[fromId[i]];
                bottles[fromId[i]] -= space;
        
            }


        }
        return bottles;

    }

};


int main(){
KiwiJuiceEasy a;
vector<int> b = {20,20};
vector<int> c = {5,8};
vector<int> d = {0};
vector<int> e = {1};
cout << a.thePouring(b,c,d,e)[0];
    return 0;
}