#include <iostream>
using namespace std;

int powerOfNumber(int base, int exponent) {
    int res = 1;
    while (exponent != 0) {
        res *= base;
        --exponent;
    }
    return res;
}
int rangeSum(int start, int end) {
    int sum = 0;
    for (int i = start; i < end; i++)
    {
        sum += i;
    }
    return sum;
}
bool isPerfect(int num) {
    bool res = false;
    int sum = 0;
    for (int i = num / 2; i > 0; i--)
    {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) {
        res = true;
    }
    return res;
}

void rangeFilter(int start, int end) {
    cout << "Perfect numbers:\t";
    for (int i = start; i < end; i++)
    {
        if (isPerfect(i)) {
            cout << i << "\t";
        }
    }
    cout << endl;
}

bool isHappyNum(int num) {
    bool res = false;
    int part1 = num / 1000;
    int part2 = num % 1000;
    int sum1 = (part1 / 100) + ((part1 % 100) / 10) + ((part1 % 100) % 10);
    int sum2 = (part2 / 100) + ((part2 % 100) / 10) + ((part2 % 100) % 10);
    if (sum1 == sum2) {
        res = true;
    }
    return res;
}


int main()
{
    cout << powerOfNumber(2,8) << endl;
    cout << rangeSum(4, 15) << endl;
    rangeFilter(2, 500);
    cout << isHappyNum(543327) << endl;
}


