#ifndef MINKNUMS_H
#define MINKNUMS_H
#include <iostream>
#include <stdlib.h>

class MinKNums
{
    public:
        MinKNums();
        virtual ~MinKNums();
        void Solution(int a[], int length, int k);
        void Heapify(int * myHeap, int k);
        int GetMax(int* myHeap);
        void HeapAdjust(int* myHeap, int k, int i);
    protected:
    private:
};

#endif // MINKNUMS_H
