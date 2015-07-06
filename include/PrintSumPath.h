#ifndef PRINTSUMPATH_H
#define PRINTSUMPATH_H
#include <iostream>
#include <vector>

struct BinaryTreeNode
{
    int m_pValue;
    struct BinaryTreeNode * m_pLeft;
    struct BinaryTreeNode * m_pRight;
};


class PrintSumPath
{
    public:
        PrintSumPath();
        void Solution(struct BinaryTreeNode* root, int sum);
        void PrintPath(struct BinaryTreeNode* root, int sum, std::vector<int>& path);
        virtual ~PrintSumPath();
    protected:
    private:
};

#endif // PRINTSUMPATH_H
