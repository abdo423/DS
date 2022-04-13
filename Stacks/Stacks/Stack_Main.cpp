

#include <iostream>
#include "StackArr.h"

using namespace std;

int main()
{
	StackArr S;
	S.Push('a');
	S.Push('b');
	S.Push('c');
	S.Push('e');
	S.Push('d');
	S.Push('f');
	S.Push('g');
	S.Push('h');
    S.Push('i');
	S.Push('j');
	S.Pop();

	


	cout << "top= " << S.Top() << endl;

	while (!S.empty())
	{
		cout << S.Top() << endl;
		S.Pop();
	}

	return 0;
}
