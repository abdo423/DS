#include "test.h"
#include "ticket.h"
#include <msclr/marshal_cppstd.h>
#include<string>
#include<vector>
 test::test()
{
	try
	{
		driver = get_driver_instance();
		con = driver->connect(server, username, password);
		con->setSchema("ds_trail");
	}
	catch (SQLException e)
	{
		cout << "Could not connect to server. Error message: " << e.what() << endl;
		system("pause");
		exit(1);
	}
	if (con) {
		cout << "Connection Successful!" << endl;
	}
	else {
		cout << "Connection Successful!" << endl;
	}

}


 
 int test::countRowTable(string query) {
	 ResultSet* result;
	 PreparedStatement* pstmt;
	 pstmt = con->prepareStatement(query);
	 result = pstmt->executeQuery();
	 int counter = 0;
	 while (result->next())
	 {
		 counter++;
	 }
	 return counter;
 }





void test::dbInsert(string query) {
	try {
		PreparedStatement* pstmt;
		pstmt = con->prepareStatement(query);
		pstmt->executeQuery();
		delete pstmt;
	}
	catch (SQLException e) {
		cout << e.what() << endl;
	}
}
ResultSet* test::dbRetrieve() {
	try {
       ResultSet* result;
		PreparedStatement* pstmt;
		pstmt = con->prepareStatement("select * from passenger");
		result = pstmt->executeQuery();
		return result;
		delete result;
		delete pstmt;
	
	}
	catch (SQLException e) {
		cout << e.what() << endl;
	}
}
bool test::dbCompare(string email, string pass,string query)
{

	ResultSet* result;
	PreparedStatement* pstmt;
	pstmt = con->prepareStatement(query);
	result = pstmt->executeQuery();
	
	while (result->next())
	{
		
	
		if(result->getString(1).c_str() == email && result->getString(2).c_str() == pass)
		{
			
			return true;
			
			
			
		}
		
	}
	return false;
}

void test::dbUpdate(string query) 
{
	try {
		PreparedStatement* pstmt;
		pstmt = con->prepareStatement(query);
		pstmt->executeQuery();
		delete pstmt;
	}
	catch (SQLException e) {
		cout << e.what() << endl;
	}
}

void test::view(string query)
{
	try
	{
		ResultSet* result;
		PreparedStatement* pstmt;
		pstmt = con->prepareStatement(query);
		result = pstmt->executeQuery();
		result->next();
		cout << result->getString(1).c_str() << "*******" << result->getString(2).c_str() <<"*******"<< result->getString(3).c_str() << "" << result->getString(4).c_str();
	}catch (SQLException e) {
		cout << e.what() << endl;
	}
	
}


test::~test() {
	delete con;
}