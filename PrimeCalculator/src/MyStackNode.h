class MyStackNode
{
    private:
        string content;
        friend class MyStack;
        MyStackNode* next;
    public:
        MyStackNode();
        ~MyStackNode();
}
