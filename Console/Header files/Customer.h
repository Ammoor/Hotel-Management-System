#pragma once // To make sure that this header file is included only once in the program.
#define _CRT_SECURE_NO_DEPRECATE // To avoid the error of using unsafe functions in C++ like (strcpy).
#include <bits/stdc++.h>
#include <fstream>
#define Del_flag '*'
#define Record_delimiter '|'
using namespace std;
class Customer
{
private:
	short header;
	int ID;
	char name[60];
	char Phone_Number[12]; // We assumed that this system is in Egypt.
	char Payment_method[20];
	void update_header();
	short count_records();
public:
	Customer();
	Customer(int ID, char name[], char Phone_Number[], char Payment_method[]);
	void set_ID(int ID);
	void set_name(char name[]);
	void set_Phone_Number(char Phone_Number[]);
	void set_Payment_method(char Payment_method[]);
	int get_ID();
	char* get_name();
	char* get_Phone_Number();
	char* get_Payment_method();
	void display_top_five_records();
	~Customer();
};
