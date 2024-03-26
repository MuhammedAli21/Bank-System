#include <iostream>
#include <string>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"

using namespace std;

int main() {

	
	Client c;
	c.setName("mohmed");
	c.setId(123);
	c.setBalance(2000);

	Employee e;

	e.setName("ahedsa");
	e.setId(112323);
	e.setsalary(6000);

	Admin a;

	a.setName("mahmoud");
	a.setId(112323);
	a.setsalary(10000);

	c.Printinfo();
	e.Printinfo();
	a.Printinfo();

}