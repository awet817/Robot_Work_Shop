#include "std_lib_facilities.h"
#include "Robot.h"

void Robot::set_head(string a,string b,string c, int d, double e) {
	head.push_back(a);
	head_weight.push_back(b);
	head_description.push_back(c);
	head_part.push_back(d);
	head_cost.push_back(e);
};
void Robot::set_torso(string a, string b, string c, int d, double e) {
	torso.push_back(a);
	torso_weight.push_back(b);
	torso_description.push_back(c);
	torso_part.push_back(d);
	torso_cost.push_back(e);
};
void Robot::set_arms(string a, string b, string c, int d, double e) {
	arms.push_back(a);
	arms_weight.push_back(b);
	arms_description.push_back(c);
	arms_part.push_back(d);
	arms_cost.push_back(e);
};
void Robot::set_battery(string a, string b, string c, int d, double e) {
	battery.push_back(a);
	battery_weight.push_back(b);
	battery_description.push_back(c);
	battery_part.push_back(d);
	battery_cost.push_back(e);
};
void Robot::set_locomotor(string a, string b, string c, int d, double e) {
	motor.push_back(a);
	motor_weight.push_back(b);
	motor_description.push_back(c);
	motor_part.push_back(d);
	motor_cost.push_back(e);
};
void Robot::set_model(string a, int b, double c, double d,string e) {
	model_name.push_back(a);
	model_part.push_back(b);
	model_price.push_back(c);
	shipping.push_back(d);
	model_des.push_back(e);
}
void Robot::rs(int a) {
	size = a;
}
int Robot::robot_size() {
	return size;
}
string Robot::get_name(int a) {
	return model_name[a];
}
double Robot::get_price(int a) {
	return model_price[a];
}
double Robot::get_ship(int a) {
	return shipping[a];

}
string Robot::get_des(int a) {
	return model_des[a];

}