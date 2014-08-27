#include "Stack.h"

template <typename E> Stack<E>::ArrayStack(int cap) : S(new E[cap]), capacity(cap), t(-1) { } //constructor from capacity

template <typename E> int Stack<E>::size() const
{
	return (t+1);
} // number of items in the stack

template <typename E> bool Stack<E>::empty() const
{
	return t<0;
} //is the stack empty?

template <typename E> const E& Stack<E>::top() const throw(StackEmpty)
{
	if (empty()) throw StackEmpty("Top of empty stack");
	return S[t];
}

template <typename E> void Stack<E>::push(const E& e) throw (StackFull)
{
	if (size()==capacity) throw StackFull("Push to full stack");
	S[++t] = e;
}

template <typename E> E Stack<E>::pop() throw(StackEmpty)
{
	if (empty()) throw StackEmpty("Pop from empty stack");
	return S[--t];
}






