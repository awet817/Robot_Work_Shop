#include "std_lib_facilities.h"
#include "Robot.h"
#include "Orders.h"
#include "Associate.h"
#include "Controller.h"

Associate ast;
Robot robot;

void Controller::pc() {
	
	count++;
	cin.ignore();
	cout << "Please specify the name of the head component:" << endl;
	getline(cin, hname);
	cout << "What is the price of the head component:" << endl;
	cin >> hprice;
	cin.ignore();
	cout << "What is the weight of the head component:" << endl;
	getline(cin, hweight);
	cout << "What is the part number for the head component:" << endl;
	cin >> hpart;
	cin.ignore();
	cout << "Please give a brief description of the head component:" << endl;
	getline(cin, hdescr);
	robot.set_head(hname, hweight, hdescr, hpart, hprice);
	cout << "Please specify the name of the torso component:" << endl;
	getline(cin, tname);
	cout << "What is the price of the torso component:" << endl;
	cin >> tprice;
	cin.ignore();
	cout << "What is the weight of the torso component:" << endl;
	getline(cin, tweight);
	cout << "What is the part number for the torso component:" << endl;
	cin >> tpart;
	cin.ignore();
	cout << "Please give a brief description of the torso component:" << endl;
	getline(cin, tdescr);
	cout << "How many battery components would you like(up to 3 may be selected)" << endl;
	cin >> tbpart;
	cin.ignore();
	robot.set_torso(tname, tweight, tdescr, tpart, tprice);
	cout << "Please specify the name of the arms component:" << endl;
	getline(cin, aname);
	cout << "How much is the arms component:" << endl;
	cin >> aprice;
	cin.ignore();
	cout << "What is the weight of the arms component:" << endl;
	getline(cin, aweight);
	cout << "What is the part number for the arms component:" << endl;
	cin >> apart;
	cout << "How much power is consumed by each arm when operating(in watts)" << endl;
	int watts;
	cin >> watts;
	cin.ignore();
	cout << "Please give a brief description of the arms component:" << endl;
	getline(cin, adescr);
	robot.set_arms(aname, aweight, adescr, apart, aprice);
	cout << "Please specify the name of the battery component:" << endl;
	getline(cin, bname);
	cout << "What is the price of the battery component:" << endl;
	cin >> bprice;
	cin.ignore();
	cout << "What is the weight of the battery component:" << endl;
	getline(cin, bweight);
	cout << "What is the part number for the battery component:" << endl;
	cin >> bpart;
	cout << "Please specify the energy that the battery contains(in kilowatt hours)" << endl;
	int energy;
	cin >> energy;
	cin.ignore();
	cout << "Please give a brief description of the battery component:" << endl;
	getline(cin, bdescr);
	robot.set_battery(bname, bweight, bdescr, bpart, bprice);
	cout << "Please specify the name of the locomotor component:" << endl;
	getline(cin, mname);
	cout << "What is the price of the locomotor component:" << endl;
	cin >> mprice;
	cin.ignore();
	cout << "What is the weight of the locomotor component:" << endl;
	getline(cin, mweight);
	cout << "What is the part number for the locomotor component:" << endl;
	cin >> mpart;
	cout << "What is the max speed(in MPH)?" << endl;
	int max;
	cin >> max;
	cout << "What is the power consumed when operating(in watts)?" << endl;
	int pow;
	cin >> pow;
	cin.ignore();
	cout << "Please give a brief description of the locomotor component:" << endl;
	getline(cin, mdescr);
	robot.set_locomotor(mname, mweight, mdescr, mpart, mprice);
	cout << "What is the name of the robot model:" << endl;
	getline(cin, rmodel);
	cout << "What is the part number of the robot model:" << endl;
	cin >> rmodeln;
	string an;
	rmodelp = hprice + tprice + aprice + bprice + mprice;
	cout << "The combined price of the components is $" << rmodelp << " would you like to add more to the price?(y or n)" << endl;
	cin >> an;
	if (an == "y") {
		cout << "How much more would you like to add?" << endl;
		double a;
		cin >> a;
		rmodelp = rmodelp + a;
		cout << "The new price is $" << rmodelp << endl;
	}
	cout << "How is it for shipping and handling?" << endl;
	cin >> ship;
	cin.ignore();
	cout << "Please give a brief description of the robot model." << endl;
	getline(cin, rmodeld);
	robot.set_model(rmodel, rmodeln, rmodelp, ship, rmodeld);
	robot.rs(count);

};
void Controller::bc() {
	int z;
	cout << "1.) Catalog" << endl;
	cout << "2.) Orders and Bills" << endl;
	cout << "Enter 1 0r 2" << endl;
	cin >> z;
	if (z == 1) {
		int i, ab = robot.robot_size();
		cout << "                  ROBOT MODEL CATALOG" << endl;
		cout << "--------------------------------------------------------------" << endl;
		for (i = 0; i < ab; i++) {
			cout << i + 1 << ".) Model Name: " << robot.get_name(i) << " |Price: $" << robot.get_price(i) << " |Shipping: " << robot.get_ship(i) << "\n" << endl;
			cout << "Description: " << robot.get_des(i) << endl;
		}
		cout << "--------------------------------------------------------------" << endl;

	}
	if (z == 2) {
		for (int i = 0; i < c1; i++) {
			cout << "Customers Name:  " << ast.get_cust(i) << "  |Outstanding Bill:  " << ast.get_price(i) << endl;
		}
	}

};
void Controller::at() {
	int f;
	cout << "1.) Make an order for a customer" << endl;
	cout << "2.) Sales report" << endl;
	cin >> f;
	if (f == 1 && count != 0) {
		c1++;
		string aname, cname, date;
		int i, aorder, ab = robot.robot_size(), choose;
		double aaprice;
		cout << "                  ROBOT MODEL CATALOG" << endl;
		cout << "--------------------------------------------------------------" << endl;
		for (i = 0; i < ab; i++) {
			cout << i + 1 << ".) Model Name: " << robot.get_name(i) << " |Price: $" << robot.get_price(i) << " |Shipping: " << robot.get_ship(i) << "\n" << endl;
			cout << "Description: " << robot.get_des(i) << "\n" << endl;
		}
		cout << "--------------------------------------------------------------" << endl;

		cout << "Which robot model does the customer want to order(type the number)?" << endl;
		cin >> choose;
		int e;
		e = choose - 1;
		cin.ignore();
		cout << "What is your name sales associate?" << endl;
		getline(cin, aname);
		cout << "What is the customers name?" << endl;
		getline(cin, cname);
		cout << "What is that date?" << endl;
		getline(cin, date);
		cout << "What is the order number?" << endl;
		cin >> aorder;
		cout << "What is the price of the order?" << endl;
		cin >> aaprice;
		double tax;
		tax = (aaprice + robot.get_ship(e))*.0825;
		aaprice = (aaprice + robot.get_ship(e)) + tax;
		cout << "The price after taxs is " << aaprice << endl;
		ast.info(cname, date, aorder, aaprice, e, aname, c1);
	}
	if (count == 0) {
		cout << "There have been no robot models made, so there are none to choose from" << endl;
	}


	if (f == 2) {
		int k = ast.cust_count();
		for (int i = 0; i < k; i++) {
			cout << "Associate Name: " << ast.get_associate(i) << " |Date: " << ast.get_date(i) << " |Price: " << ast.get_price(i) << endl;
		}


	}
};
void Controller::pb() {

};