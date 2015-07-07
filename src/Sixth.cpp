#include "Sixth.h"
using namespace std;

Sixth::Sixth()
{
    //ctor
}

Sixth::~Sixth()
{
    //dtor
}

void Sixth::Solution(int a[], int length)
{
    if (length == 0) return;
    int * times = (int*)malloc(sizeof(int)*length);
    if (!times) cout<<"Malloc for arraylist failed!"<<endl;
//    memset(times, 0, length * sizeof(int));
    for (int i = 0; i < length; ++i)
        times[i] = 0;

    int timeSum;
    for (int i = length - 1; i >= 0; --i) {
        times[0] = i;
        timeSum = i;
        int tempTime = 1;
        int tempIndex = i;
        while (tempIndex < length) {
            times[tempIndex] = tempTime;
            tempIndex = tempTime;
            if (tempTime == 1) {
                tempTime++;
            } else {
                tempTime = 1;
            }
            timeSum += tempTime;
            if (timeSum > length) {
                timeSum = 0;
                for (int j = 0; j < length; ++j)
                    times[j] = 0;
                break;
            } else if (timeSum == length && times[tempIndex] == tempTime) {
                for (int index = 0; index < length; ++index) {
                    cout<<times[index]<<" ";
                }
                cout<<endl;
                break;
            }
        }
//        if (times[tempIndex] == tempTime) break;
    }
//    for (int i = 0; i < length; ++i) {
//        cout<<times[i]<<" ";
//    }
}
