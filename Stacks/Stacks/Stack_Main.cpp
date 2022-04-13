Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore

@abdo423
abdo423
/
DS
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
Settings
DS / Stacks / Stacks / Stack_Main.cpp
@abdo423
abdo423 added two push in stack slu
Latest commit 3f1fb66 5 hours ago
History
1 contributor
28 lines(23 sloc)  323 Bytes

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
