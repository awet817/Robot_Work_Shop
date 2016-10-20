#pragma once
#ifndef __Associate_H
#define __Associate_H 201609
#include "std_lib_facilities.h"
#include "Robot.h"
#include "Orders.h"


class Associate {
public:
	void info(string a, string b, int c, double d, int e,string f,int g);
	string get_cust(int a);
	string get_date(int a);
	int get_order(int a);
	double get_price(int a);
	int get_robot(int a);
	string get_associate(int a);
	int cust_count();
	int sales(string a);
private:
	int count;
	vector<string>associate_name;
	vector<string>cust_name;
	vector<string>date;
	vector<int>order_num;
	vector<double>price;
	vector<int>robot;

};
#endif