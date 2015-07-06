#ifndef BINARYTREETODEQUE_H
#define BINARYTREETODEQUE_H

struct BSTreeNode {
    int m_nValue;
    BSTreeNode *m_pLeft;
    BSTreeNode *m_pRight;
};

class BinaryTreeToDeque
{
    public:
        BinaryTreeToDeque();
        virtual ~BinaryTreeToDeque();
        struct BSTreeNode * ToDeque(struct BSTreeNode* root);
        void ToDeque(struct BSTreeNode* root, struct BSTreeNode * head, struct BSTreeNode * tail);
    protected:
    private:
};

#endif // BINARYTREETODEQUE_H
