#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
	Stack<int> s(50);
	s.push(4);
	s.push(8);
	cout << s.pop();

}
