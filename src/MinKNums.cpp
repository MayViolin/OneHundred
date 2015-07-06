#include "MinKNums.h"
using namespace std;

MinKNums::MinKNums()
{
    //ctor
}

MinKNums::~MinKNums()
{
    //dtor
}

void MinKNums::HeapAdjust(int* myHeap, int k, int i)
{
    if (!myHeap) cout<<"ERROR! myHeap is NULL!"<<endl;
    int leftChild = 2 * i + 1;
    int rightChild = 2 *(i + 1);
    if (leftChild < k && myHeap[leftChild] > myHeap[i]) swap(myHeap[leftChild], myHeap[i]);
    if (rightChild < k && myHeap[rightChild] > myHeap[i]) swap(myHeap[rightChild], myHeap[i]);
    return;
}

int MinKNums::GetMax(int* myHeap)
{
    return myHeap[0];
}

void MinKNums::Heapify(int* myHeap, int k)
{
    if (!myHeap) cout<<"ERROR! myHeap is NULL!"<<endl;
    for (int i = k / 2; i >= 0; --i) {
        HeapAdjust(myHeap, k, i);
    }
}

void MinKNums::Solution(int a[], int length, int k)
{
    if (length == 0) return;
    int * myHeap = (int*)malloc(sizeof(int) * k);
    // construct my heap
    for (int i = 0; i < k; ++i) {
        myHeap[i] = a[i];
    }
    Heapify(myHeap, k);
    // insert to my heap
    for (int i = k-1; i < length; ++i) {
        int maxNum = GetMax(myHeap);
        // if the top of my heap is bigger than a[i], top is a[i] and adjust the heap
        if (a[i] < maxNum) {
            myHeap[0] = a[i];
            Heapify(myHeap, k);
        }
    }
    //print my heap
    for (int i = 0; i < k; ++i) {
        cout<<myHeap[i]<<" ";
        cout<<endl;
    }
    free(myHeap);
    return;
}
