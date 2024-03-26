#pragma once
#include <iostream>
#include <string>
#include "Person.h"
#include "Employee.h"
using namespace std;

class Admin : public Employee
{
public: 

	Admin() {
	}
	Admin(int id, string name, string password, double balance) : Employee(id, name, password , balance)
	{
	}

	void Printinfo() {
		cout << "Admin Name = " << this->name << endl;
		cout << "Admin ID = " << this->id << endl;
		cout << "Admin salary = " << this->balance << endl;
		cout << "=========================================\n";
	}
};

