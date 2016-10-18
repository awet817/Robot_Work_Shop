#include "std_lib_facilities.h"
#include "Robot.h"
#include "Associate.h"


void Associate::info(string a, string b, int c, double d, int e,string f,int g) {
	associate_name.push_back(f);
	cust_name.push_back(a);
	date.push_back(b);
	order_num.push_back(c);
	price.push_back(d);
	robot.push_back(e);
	count = g;
};
string Associate::get_cust(int a) {
	return cust_name[a];

};
string Associate::get_date(int a) {
	return date[a];

};
int Associate::get_order(int a) {
	return order_num[a];
};
double Associate::get_price(int a) {
	return price[a];
};
int Associate::get_robot(int a) {
	return robot[a];
};
string Associate::get_associate(int a) {
	return associate_name[a];
};
int Associate::cust_count() {
	int z = count;
	return z;
};
