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
	
	cin >> passeneger_name >> boarding_point >> destination_point >> date_of_travel;
	//ticket t1 = ticket(passeneger_name, boarding_point, destination_point, date_of_travel);

	test* passenger1 = new test();
	passenger1->dbInsert("insert into passenger(passeneger_name, start_point, end_point, time_taken) values('"+passeneger_name+"', '"+boarding_point+"', '"+destination_point+"', '"+date_of_travel+"');");
}