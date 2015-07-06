#include "PrintSumPath.h"
using namespace std;

PrintSumPath::PrintSumPath()
{
    //ctor
}

PrintSumPath::~PrintSumPath()
{
    //dtor
}

void PrintSumPath::PrintPath(struct BinaryTreeNode* root, int sum, vector<int>& path)
{
    if (!root->m_pLeft && !root->m_pRight && root->m_pValue == sum) {
        for (int i = 0; i < path.size(); ++i)
            cout<<path.at(i)<<" ";
        cout<<endl;
        return;
    }
    if (root->m_pLeft) {
        path.push_back(root->m_pValue);
        PrintPath(root->m_pLeft, sum - root->m_pValue, path);
        path.pop_back();
    }
    if (root->m_pRight) {
        path.push_back(root->m_pValue);
        PrintPath(root->m_pRight, sum - root->m_pValue, path);
        path.pop_back();
    }
    return;
}

void PrintSumPath::Solution(struct BinaryTreeNode* root, int sum)
{
    if (!root) return;
    vector<int> path;
    PrintPath(root, sum, path);
}
