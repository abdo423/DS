#pragma once
#include <stdlib.h>

#include <vector>

#include <iostream>
#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/prepared_statement.h>
using namespace std;
using namespace sql;
  class test
{
	
		const string  server = "tcp://127.0.0.1:3306";
		const string username = "root";
		const string password = "Bodylovequran1";

		Driver* driver;
		Connection* con;
	public:
		test();
		void dbInsert(string query);
		/*vector<ResultSet*> dbvector();*/
		ticket dbRetrieve(string query);
		bool dbCompare(string email,string pass,string query);
		void view(string query);
		~test();
	
};




