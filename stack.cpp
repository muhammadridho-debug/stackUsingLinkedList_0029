#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node() {
        next = NULL;
    }
};

// class stack
class stack 
{
private:
    Node *top;

public:
    stack() 
    {
        top = NULL;
    }
    int push(int value) 
    {
        return value;
    }
    
    bool isEmpty() {
        return top == NULL;
    }
};

int main() {
    return 0;
}