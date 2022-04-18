#include<iostream>
#include <string>
using namespace std;


class ticket
{
	std::string passeneger_name, boarding_point, destination_point, date_of_travel;

public:
	ticket();
	ticket(string passeneger_name, string boarding_point, string destination_point, string date_of_travel);

	void addTicket();
};