int invalid = -123456;

struct MinStackElem
{
    int data;
    int minNum;
};

struct MinStack
{
    MinStackElem * data;
    int top;
    int sizeOfStack;
};

MinStack minStackInit(int maxSize) {
    MinStack myStack;
    myStack.sizeOfStack = maxSize;
    myStack.top = 0;
    myStack.data = (MinStackElem*)malloc(sizeof(MinStackElem)*maxSize);
    return myStack;
}

void minStackFree(MinStack myStack) {
    free(myStack.data);
}


void MinStackPush(MinStack myStack, int data) {
    if (myStack.top == myStack.sizeOfData) {
        cout<<"out of stack space!"<<endl;
        return;
    }
    MinStackElem* elem = myStack.data[myStack.top];
    elem->data = data;
    elem->minNum = myStack.sizeOfData == 0 ? data : myStack.data[top - 1]->minNum;
    if (data < elem->minNum) elem->minNum = data;
    ++top;
}

int MinStackPop(MinStack myStack) {
    if (myStack.top == 0) {
        cout<<"stack is empty!"<<endl;
        return invalid;
    }
    return myStack.data[--top].data;
}

int MinStackMin(MinStack myStack) {
    if (myStack.top == 0) {
        cout<<"stack is empty!"<<endl;
        return invalid;
    }
    return myStack.data[--top].minNum;
}
