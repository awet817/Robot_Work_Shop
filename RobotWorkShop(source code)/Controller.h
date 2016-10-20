#pragma once
#ifndef __Controller_H
#define __Controller_H 201609
#include "std_lib_facilities.h"
#include "Robot.h"
#include "Orders.h"
#include "Associate.h"

class Controller {
public:
	void pc();
	void bc();
	void at();
	void pb();
private:
	int a;
	int count = 0;
	int c1 = 0;
	int hpart;
	int tpart;
	int apart;
	int bpart;
	int  mpart;
	int tbpart;
	int rmodeln;
	double hprice, tprice, aprice, bprice, rmodelp, mprice, ship;
	string hname, hweight, hdescr, tweight, aweight, bweight, mweight, tname, aname, bname, mname;
	string tdescr, adescr, bdescr, mdescr, rmodel, rmodeld;
};
#endif