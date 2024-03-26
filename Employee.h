#pragma once
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Employee : public Person
{

public:
	Employee() {
		balance = 0;
	}
	Employee(int id, string name, string password, double balance) : Person(id, name, password, balance)
	{
	
	}
	void setId(int id) {
		this->id = id;
	}
	void setsalary(double balance)
	{
		if (balance < 5000) {
			cout << "Min salary is 5000" << endl;
		}
		else
		{
			this->balance = balance;
		}

	}
	void setPassword(string password) {

		if (password.length() >= 8 && password.length() <= 20)
		{
			this->password = password;
		}
		else
		{
			cout << "Password must be with min size 8 and max size 20" << endl;
		}

	}
	void setName(string name)
	{
		bool onlyname = true;
		if (name.size() >= 5 && name.size() <= 20)
		{

			for (int i = 0; i < name.size(); i++)
			{
				if (!isalpha(name[i])) 
				{
					cout << "name must only contain letters\n";
					onlyname = false;
					break;
				}

			}
		}
		else if (name.size() < 5 || name.size() > 20)
		{
			cout << "Name must be with min size 5 and max size 20" << endl;
			onlyname = false;
		}
		if (onlyname)
		{
			this->name = name;

		}

	}

	int getId() {
		return id;
	}
	double getsalary() {
		return balance;
	}
	string getName() {
		return name;
	}
	string getPassword() {
		return password;
	}
	

	void Printinfo() {
		cout << "Employee Name = " << this->name << endl;
		cout << "Employee ID = " << this->id << endl;
		cout << "Employee salary = " << this->balance << endl;
		cout << "=========================================\n";
	}
};


