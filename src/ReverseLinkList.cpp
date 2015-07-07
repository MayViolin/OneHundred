#include "ReverseLinkList.h"

ReverseLinkList::ReverseLinkList()
{
    //ctor
}

ReverseLinkList::~ReverseLinkList()
{
    //dtor
}

void ReverseLinkList::reverseList(struct Node * head)
{
    if (!head) return;
    struct Node helpHead;
    helpHead.data = 0;
    helpHead.next = head;
    struct Node* cur = head;
    struct Node* temp;
    while (cur->next) {
        temp = cur->next;
        cur->next = cur->next->next;
        temp->next = helpHead->next;
        helpHead->next = temp;
    }
    head = helpHead->next;
    /* July's code
        struct Node * pre = NULL;
        struct Node * cur = head;
        struct Node * temp;
        while (cur->next) {
            temp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = temp;
        }
    */
}

struct Node * ReverseLinkList::reverseListRecrusive(struct Node * head)
{
    if (!head) return head;
    if (!head->next) return head;
    struct Node * newHead = reverseListRecrusive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

