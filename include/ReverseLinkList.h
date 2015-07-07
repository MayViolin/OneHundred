#ifndef REVERSELINKLIST_H
#define REVERSELINKLIST_H

struct Node
{
    int data;
    struct Node * next;
};

class ReverseLinkList
{
    public:
        ReverseLinkList();
        virtual ~ReverseLinkList();
        void reverseList(struct Node * head);
        struct Node * reverseListRecrusive(struct Node* head);
    protected:
    private:
};

#endif // REVERSELINKLIST_H
