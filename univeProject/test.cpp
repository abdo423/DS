#include "test.h"
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
void test::dbUpdate(string query) {
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
ResultSet* test::dbRetrieve(string query) {
	try {
		ResultSet* result;
		PreparedStatement* pstmt;
		pstmt = con->prepareStatement(query);
		result = pstmt->executeQuery();
		return result;
		delete result;
		delete pstmt;
	}
	catch (SQLException e) {
		cout << e.what() << endl;
	}
}
test::~test() {
	delete con;
}