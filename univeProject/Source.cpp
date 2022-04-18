#include<iostream>
#include "ticket.h"
#include "test.h"
using namespace std;
int main()
{
	
	test a;
	cout<<a.dbCompare("ahmed123@gmail.com", "12345", "select * from login")<<endl;

	a.dbRetrieve("select passeneger_name from passenger");
	cout << "hallo world"<<endl;
	system("pause");

}