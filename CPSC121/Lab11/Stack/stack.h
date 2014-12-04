#ifndef STACK_H
#define STACK_H

template<class C, int n>
class Stack
{
    private:
        C *a;
        int counter;
    public:
        Stack()
        {
            a = new C[n];
            counter=0;
        }

        int getCount() { return counter; }
        void clear()
        {
            counter=0;
        }

        bool isEmpty()
        {
            return (counter==0);
        }

        bool isFull()
        {
            return (counter==n);
        }

        void push(C i)
        {
            if (!isFull())
                a[counter++]=i;
        }

        C pop()
        {
            if (!isEmpty())
                return a[--counter];
        }
};
#endif
