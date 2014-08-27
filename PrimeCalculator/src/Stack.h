template <typename E>
class Stack
{
	enum { DEF_CAPACITY = 100 };
	public:
		ArrayStack(int cap = DEF_CAPACITY);
		int size() const;
		bool empty() const;
		const E& top() const throw(StackEmpty);
		void push(const E& e) throw (StackFull):
		E pop() throw(StackEmpty)
	private:	
		E* S;
		int capacity;
		int t;
	
};
