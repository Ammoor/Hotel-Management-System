#pragma once // To make sure that this header file is included only once in the program.
#define _CRT_SECURE_NO_DEPRECATE // To avoid the error of using unsafe functions in C++ like (strcpy).
#include <bits/stdc++.h>
#include <fstream>
using namespace std;
class Customer
{
private:
	int ID;
	char First_name[31];
	char Middle_name[31];
	char Last_name[31];
	char Email[321]; // The maximum length of an email address is 320 characters.
	char Phone_Number[12]; // We assumed that this system is in Egypt.
	vector<string>Payment_methods;
public:
	Customer();
	Customer(int ID, char First_name[], char Middle_name[], char Last_name[], char Email[], char Phone_Number[], vector<string>Payment_methods);
	void set_ID(int ID);
	void set_First_name(char First_name[]);
	void set_Middle_name(char Middle_name[]);
	void set_Last_name(char Last_name[]);
	void set_Email(char Email[]);
	void set_Phone_Number(char Phone_Number[]);
	void set_Payment_methods(vector<string>Payment_methods);
	int get_ID();
	char* get_First_name();
	char* get_Middle_name();
	char* get_Last_name();
	char* get_Email();
	char* get_Phone_Number();
	vector<string> get_Payment_methods();
	void add_Payment_method(string Payment_method);
	void remove_Payment_method(string Payment_method);
	void display();
	void save();
	void load();
	~Customer();
};
