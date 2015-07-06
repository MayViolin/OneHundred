#include "BinaryTreeToDeque.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

BinaryTreeToDeque::BinaryTreeToDeque()
{
    //ctor
}

BinaryTreeToDeque::~BinaryTreeToDeque()
{
    //dtor
}

void BinaryTreeToDeque::ToDeque(struct BSTreeNode* root, struct BSTreeNode * head, struct BSTreeNode * tail)
{
    if (!root) {
        head = NULL;
        tail = NULL;
        return;
    }
    struct BSTreeNode * lt, *rh;
    ToDeque(root->m_pLeft, head, lt);
    ToDeque(root->m_pRight, rh, tail);
    if (lt) {
        lt->m_pRight = root;
        root->m_pLeft = lt;
    } else {
        head = root;
    }

    if (rh) {
        rh->m_pLeft = root;
        root->m_pRight = rh;
    } else {
        tail = root;
    }
};

struct BSTreeNode * BinaryTreeToDeque::ToDeque(struct BSTreeNode* root)
{
    if (!root) return NULL;
    //struct BSTreeNode* head = root;
    //while (head->m_pLeft) head = head->m_pLeft;

    struct BSTreeNode * head;
    struct BSTreeNode * tail;

    ToDeque(root, head, tail);
    return head;
}

