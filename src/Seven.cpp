#include "Seven.h"
using namespace std;

Seven::Seven()
{
    //ctor
}

Seven::~Seven()
{
    //dtor
}

bool Seven::isLinkListJioned(struct Node* h1, struct Node* h2)
{
    if (!h1 || !h2) return false;
    stack<struct Node*> listOne;
    stack<struct Node*> listTwo;

    struct Node* curOne = h1;
    struct Node* curTwo = h2;

    while (curOne) {
        listOne.push(curOne);
        curOne = curOne->next;
    }

    while (curTwo) {
        listTwo.push(curTwo);
        curTwo = curTwo->next;
    }

    //if need to find the cross node of the two linkedlist
//    struct Node * result;
//    while (listOne.top() == listTwo.top()) {
//        result = listOne.top();
//        listOne.pop();
//        listTwo.pop();
//    }
//    return result;

    return listOne.top() == listTwo.top() ? true : false;

}


struct Node * Seven::testCircle(struct Node* head)
{
    if (!head) return NULL;
    struct Node* slow = head;
    struct Node* quick = head;
    while (slow->next && quick->next->next) {
        if (slow == quick) return slow;
    }
    return NULL;
}

//if there is circle in link list, find the circle, and compare the the circle the other link list has.
bool Seven::isJoinedDiff(struct Node* h1, struct Node* h2)
{
    if (!h1 || !h2) return false;

    struct Node * circleOne = testCircle(h1);
    struct Node * circleTwo = testCircle(h2);

    if (!circleOne && !circleTwo) return isLinkListJioned(h1, h2);
    if (circleOne && circleTwo) {
        struct Node * p = circleOne;
        while (true) {
            if (p == circleTwo || p->next == circleTwo) return true;
            p = p->next->next;
            circleOne = circleOne->next;
            if (p == circleOne) return false;
        }
    }
    if (testCircle(h1) || testCircle(h2))
        return false;
}


