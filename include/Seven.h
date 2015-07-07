#ifndef SEVEN_H
#define SEVEN_H
#include <iostream>
#include <stdlib.h>
#include <stack>

struct Node
{
    int data;
    struct Node* next;
};

class Seven
{
    public:
        Seven();
        virtual ~Seven();
        bool isLinkListJioned(struct Node* h1, struct Node* h2);
        struct Node* testCircle(struct Node* head);
        bool isJoinedDiff(struct Node* h1, struct Node* h2);
    protected:
    private:
};

#endif // SEVEN_H
