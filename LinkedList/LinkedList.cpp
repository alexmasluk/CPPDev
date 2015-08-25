#include <iostream>

using namespace std;

template <class T>
class Node
{
	private:
		T value;
		Node* next;
		Node* prev;
	public:
		Node(T v){ value = v; }

		void setNext(Node* n)
		{
			next = n;
		}

		Node* getNext()
		{
			return next;
		}

		Node* getPrev()
		{
			return prev;
		}

		T getValue()
		{
			return value;
		}	
		~Node(){}	
};

template <class T>
class LinkedList
{
	private:
		Node<T>* head;
	public:
		void clearList()
		{
			head = NULL;
		}

		void printList()
		{
			Node<T>* start = head;
			while (start != NULL)
			{
				cout << start->getValue();
				start = start->getNext();
			}
		}
		
		void insert(T val)
		{
			//find last node
			Node<T>* start = head->getNext();
			Node<T>* prev = head; 
			while (start != NULL)
			{
				prev = start;
				start = start->getNext();
			}
			start = new Node<T>(val);
			prev->setNext(start);
		}
};

int Main()
{
	LinkedList<int> list;	
	return 0;
}
