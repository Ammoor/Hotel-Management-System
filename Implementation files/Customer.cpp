#include "Customer.h"
void Customer::set_ID(int ID)
{
	this->ID = ID;
}
void Customer::set_First_name(char First_name[])
{
	strcpy(this->First_name, First_name);
}
void Customer::set_Middle_name(char Middle_name[])
{
	strcpy(this->Middle_name, Middle_name);
}
void Customer::set_Last_name(char Last_name[])
{
	strcpy(this->Last_name, Last_name);
}
void Customer::set_Email(char Email[])
{
	strcpy(this->Email, Email);
}
void Customer::set_Phone_Number(char Phone_Number[])
{
	strcpy(this->Phone_Number, Phone_Number);
}
