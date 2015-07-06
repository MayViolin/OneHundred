#ifndef FINDMAXSUM_H
#define FINDMAXSUM_H


class FindMaxSum
{
    public:
        FindMaxSum();
        int Solution(int a[],int length);
        virtual ~FindMaxSum();
    protected:
    private:
        int min_int = -(1 << 31);
};

#endif // FINDMAXSUM_H
