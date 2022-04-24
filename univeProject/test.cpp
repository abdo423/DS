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


 /*vector<ResultSet*> test::dbvector() {
	 
	 ResultSet* result;
	 PreparedStatement* pstmt;
	 pstmt = con->prepareStatement("SELECT * FROM test_train");
	 result = pstmt->executeQuery();
	 vector<ResultSet*> V;
	 while (result->next())
	 {
		 v = result;

	 }
	 return v;
 }*/




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
ticket test::dbRetrieve(string query) {
	try {
       ResultSet* result;
		PreparedStatement* pstmt;
		pstmt = con->prepareStatement(query);
		result = pstmt->executeQuery();
		while (result->next())
		{
			ticket t = ticket(result->getString(1).c_str(), result->getString(2).c_str(), result->getString(3).c_str(), result->getString(4).c_str());
			return t;
		}
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