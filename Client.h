#pragma once
#include <iostream>
#include <string>
#include "Person.h"
#include <cctype>
using namespace std;

class Client : public Person
{

public:
	Client() {
		balance = 0;
	}
	Client(int id, string name, string password, double balance) : Person (id,name,password, balance)
	{
	}
	void setId(int id) {
		this->id = id;
	}
	void setBalance(double balance)
		{
		if (this->balance == 0 && balance < 1500) {
			cout << "Min balance is 1500" << endl;
		}
		else
		{
			this->balance = balance;
		}
		
	}
	void setPassword(string password) {

		if(password.length() >= 8 && password.length() <= 20)
		{
			this->password = password;
		}
		else
		{
			cout << "Password must be with min size 8 and max size 20" <<endl;
		}
			
	}
	void setName(string name) {
		bool onlyname = true;
		 if  (name.size() >= 5 && name.size() <= 20)
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
	double getBalance() {
		return balance;
	}
	string getName() {
		return name;
	}
	string getPassword() {
		return password;
	}
	void Deposit(double amount) {
		this->balance += amount;
	}

	void Withdraw(double amount) {
		if (this->balance >= amount)
		{
			this->balance -= amount;
			
		}
		else
		{
			cout << "Not enough money!" << endl;
		}
	}
	void Transferto(double amount, Client& recipient) {
		if (this->balance >= amount)
		{
			this->balance -= amount;
			recipient.Deposit(amount);
		}
		else
		{
			cout << "Not enough money to send!" << endl;
		}
	}
	
	void CheckBalace() {
		cout << "Clint balance = " << this->balance << endl;
	}

	void Printinfo() {
		cout << "Clint Name = " << this->name << endl;
		cout << "Clint ID = " << this->id << endl;
		cout << "Clint balance = " << this->balance << endl;
		cout << "=========================================\n";
	}
};

