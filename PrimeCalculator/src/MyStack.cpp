#include "MyStack.h"
bool MyStack::empty() const
{
    return (top==NULL)? true : false;
}

string MyStack::top() const
{
    return (empty())? "empty!" : top->content;
}

string MyStack::pop()
{
    String cont = top();
    if (!empty())
    {

    }
}
