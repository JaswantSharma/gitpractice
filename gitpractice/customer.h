#pragma once
#include<iostream>

using namespace std;

class Customer {
private:
	string username;
public:

	Customer(); // Defualt constructor
	Customer(string username);// Parameterized Constructor

	//these are the helping functions for get the values from the file
	string getvalue(char* filename, string user);
	void setvalue(char* filename, char* tempfile, string proid, string updatevalue);

};