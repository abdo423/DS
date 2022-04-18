#include "ticket.h"
#include "test.h"
ticket::ticket()
{
}
ticket::ticket(string passeneger_name, string boarding_point, string destination_point, string date_of_travel)
{
	passeneger_name = passeneger_name;
	boarding_point = boarding_point;
	destination_point = destination_point;
	date_of_travel = date_of_travel;
}

void ticket::addTicket()
{
	//string pn, bp, dp, dot;
	cin >> passeneger_name >> boarding_point >> destination_point >> date_of_travel;
	ticket t1 = ticket(passeneger_name, boarding_point, destination_point, date_of_travel);
	test* passenger1 = new test();
	passenger1->dbUpdate("insert into passengers(passenger_name, boarding_point, destination_point, date_of_travel) values('"+t1.passeneger_name+"', '"+t1.boarding_point+"', '"+t1.destination_point+"', '"+t1.date_of_travel+"');");
}