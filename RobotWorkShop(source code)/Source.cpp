#include "std_lib_facilities.h"
#include "Robot.h"
#include "Associate.h"
#include "Controller.h"

int main() {
	Controller control;
	int a;
	while (1) {
		cout << "1.) Project Manager" << endl;
		cout << "2.) Customer" << endl;
		cout << "3.) Sales Associate" << endl;
		cout << "4.) Pointed-haired boss" << endl;
		cout << "5.) Exit" << endl;
		cout << "Select 1,2,3, 4, or 5" << endl;
		cin >> a;
		if (a == 5) {
			break;
		}
		if (a == 1){
			control.pc();
		}
		if (a == 2) {
			control.bc();
		}
		if (a == 3) {
			control.at();
		}
		if (a == 4) {
			control.pb();
		}
		cout << "\n" << endl;
	}
	return 0;
}