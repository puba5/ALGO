#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;


class Cryptography {

public:

    long long encrypt(vector<int> numbers) {
        sort(numbers.begin(), numbers.end());
        numbers[0]++;
        long long sum = 1;
        for (int i = 0; i < numbers.size(); i++) {
            sum *= numbers[i];

        }
        return sum;
    }
};
