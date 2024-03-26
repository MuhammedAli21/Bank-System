#pragma once
#include <iostream>
#include <string>
using namespace std;


class Person
{
protected :
	int id;
	string name, password; 
	double balance;

public:
	Person() {
		id = 0;
		balance = 0;
	}
	Person(int id, string name, string password, double balance) {
		this->id = id;
		this->name = name;
		this->password = password;
		this->balance = balance;
	}
	
	////Person(int id, string name, string password,double balance) {
	////	this->id = id;
	////	this->name = name;
	////	this->password = password;
	////	this->balance = balance;
	////}
	//void setId(int id) {
	//	this->id = id;
	//}
	//void setBalance(double balance) {
	//	this->balance = balance;
	//}
	//void setPassword(string password) {
	//	this->password = password;
	//}
	//void setName(string name) {
	//	this->name = name;
	//}
	//
	//int getId() {
	//	return id;
	//}
	//double getBalance() {
	//	return balance;
	//}
	//string getName() {
	//	return name;
	//}
	//string getPassword() {
	//	return password;
	//}

	//virtual void printinfo() = 0;

};

