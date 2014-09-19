#include "MyStackNode.h"
#include <string>
class MyStack
{
    private:
        MyStackNode* top;
        int size;
    public:
        bool empty() const;
        string top() const;
        string pop();
        void push(string s);
        MyStack();
        ~MyStack();
}
