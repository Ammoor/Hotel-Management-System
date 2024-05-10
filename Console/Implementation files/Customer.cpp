#include "Customer.h"
void Customer::set_ID(int ID)
{
	this->ID = ID;
}
void Customer::set_name(char name[])
{
	strcpy(this->name, name);
}
void Customer::set_Phone_Number(char Phone_Number[])
{
	strcpy(this->Phone_Number, Phone_Number);
}
void Customer::set_Payment_method(char Payment_method[])
{
	strcpy(this->Payment_method, Payment_method);
}
int Customer::get_ID()
{
	return this->ID;
}
char* Customer::get_name()
{
	return this->name;
}
char* Customer::get_Phone_Number()
{
	return this->Phone_Number;
}
char* Customer::get_Payment_method()
{
	return this->Payment_method;
}
void Customer::update_header()
{
	ofstream o;
	o.open("Customer_DB.txt", ios::out | ios::app | ios::binary);
	if (o.is_open())
	{
		o.seekp(0, ios::beg);
		o.write((char*)&header, sizeof(header));
		o.close();
	}
	else
	{
		// "\x1B[31m" => sets the statement to color red.
		// "\033[37m"  => reset the rest of the statements to default.
		cout << "an \x1B[31merror\033[37m occurred while opening the file\n";
		exit(0);
	}
}
