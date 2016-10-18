#pragma once
#ifndef __Robot_H
#define __Robot_H 201609
#include "std_lib_facilities.h"



class Robot {
public:
	void set_head(string a, string b, string c, int d, double e);
	void set_torso(string a, string b, string c, int d, double e);
	void set_arms(string a, string b, string c, int d, double e);
	void set_battery(string a, string b, string c, int d, double e);
	void set_locomotor(string a, string b, string c, int d, double e);
	void set_model(string a, int b, double c,double d,string e);
	int Robot::robot_size();
	void Robot::rs(int a);
	string get_name(int a);
	double get_price(int a);
	double get_ship(int a);
	string get_des(int a);
private:
	vector<string>model_des;
	vector<double> shipping;
	vector<string> model_name;
	vector<int> model_part;
	vector<double> model_price;
	vector<string> head;
	vector<string> head_weight;
	vector<string> head_description;
	vector<int> head_part;
	vector<double> head_cost;
	vector<string> torso;
	vector<int> torso_battery;
	vector<string> torso_weight;
	vector<string> torso_description;
	vector<int> torso_part;
	vector<double> torso_cost;
	vector<string> arms;
	vector<string> arms_weight;
	vector<string> arms_description;
	vector<int>arms_powerconsumed;
	vector<int> arms_part;
	vector<double> arms_cost;
	vector<string> battery;
	vector<string> battery_weight;
	vector<string> battery_description;
	vector<int> battery_part;
	vector<double> battery_cost;
	vector<int> battery_energy;
	vector<string> motor;
	vector<string> motor_weight;
	vector<string> motor_description;
	vector<int> motor_part;
	vector<double> motor_cost;
	int size;
};
#endif

