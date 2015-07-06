#include "FindMaxSum.h"
using namespace std;

FindMaxSum::FindMaxSum()
{
    //ctor
}

FindMaxSum::~FindMaxSum()
{
    //dtor
}

int FindMaxSum::Solution(int a[], int length) {
    if (length == 0) return min_int;
    int sum = 0;
    int maxSum = min_int;
    for (int i = 0; i < length; ++i) {
        sum += a[i];
        if (sum > maxSum) {
            maxSum = sum;
        } else if (sum < 0){
            sum = 0;
        }
    }
    return maxSum;
}
