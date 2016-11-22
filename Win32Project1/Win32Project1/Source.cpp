#include <iostream>
#include <sstream>
#include <stdio.h>
#include <FL/Fl.H>
#include <FL/Fl_Text_Display.H>
#include <FL/Fl_Window.H>
#include <FL/filename.H>    
#include <FL/Fl_Box.H>
#include <string>
#include <list>
#include <vector>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_Output.H>
using namespace std;



void Quit_CB(Fl_Widget *, void *) {
	exit(0);
}

void head(Fl_Widget *, void *) {
	Fl_Window *head = new Fl_Window(400, 350, "Head");
	Fl_Input *input = new Fl_Input(200, 0, 100, 30, "Name: ");
	Fl_Input *input1 = new Fl_Input(200, 40, 100, 30, "Part-Number: ");
	Fl_Input *input2 = new Fl_Input(200, 80, 100, 30, "How much is the Weight: ");
	Fl_Input *input3 = new Fl_Input(200, 120, 100, 30, "The Cost: ");
	Fl_Button *enter = new Fl_Button(110, 160, 100, 30, "Enter");
	head->show();
}
void model(Fl_Widget *, void *) {
	Fl_Window *head = new Fl_Window(400, 350, "Robot Model: ");
	Fl_Input *input = new Fl_Input(200, 0, 100, 30, "Name: ");
	Fl_Input *input1 = new Fl_Input(200, 40, 100, 30, "Part-Number: ");
	Fl_Input *input2 = new Fl_Input(200, 80, 100, 30, "How much is the Weight: ");
	Fl_Input *input3 = new Fl_Input(200, 120, 100, 30, "The Cost: ");
	Fl_Input *input4 = new Fl_Input(200, 160, 100, 30, "Brief Descriptio: ");
	Fl_Button *enter = new Fl_Button(150, 200, 100, 30, "Enter");
	head->show();
}
void catalog(Fl_Widget *, void *) {
	Fl_Window *head = new Fl_Window(300, 200, "Robot Catalog");
	
	head->show();
}
void pic(Fl_Widget *, void *) {
	Fl_Window *head = new Fl_Window(300, 200, "Robot Part Pictures");

	head->show();
}
void torso(Fl_Widget *, void *) {
	Fl_Window *head = new Fl_Window(400, 350, "Torso");
	Fl_Input *input = new Fl_Input(200, 0, 100, 30, "Name: ");
	Fl_Input *input1 = new Fl_Input(200, 40, 100, 30, "Part-Number: ");
	Fl_Input *input2 = new Fl_Input(200, 80, 100, 30, "How much is the Weight: ");
	Fl_Input *input3 = new Fl_Input(200, 120, 100, 30, "The Cost: ");
	Fl_Input *input4 = new Fl_Input(200, 160, 100, 30, "Battery Compartments: ");
	Fl_Button *enter = new Fl_Button(150, 200, 100, 30, "Enter");
	head->show();
}
void locomotor(Fl_Widget *, void *) {
	Fl_Window *head = new Fl_Window(400, 350, "Locomotor");
	Fl_Input *input = new Fl_Input(200, 0, 100, 30, "Name: ");
	Fl_Input *input1 = new Fl_Input(200, 40, 100, 30, "Part-Number: ");
	Fl_Input *input2 = new Fl_Input(200, 80, 100, 30, "How much is the Weight: ");
	Fl_Input *input3 = new Fl_Input(200, 120, 100, 30, "The Cost: ");
	Fl_Input *input4 = new Fl_Input(200, 160, 100, 30, "Speed: ");
	Fl_Input *input5 = new Fl_Input(200, 200, 100, 30, "Power Consumed: ");
	Fl_Button *enter = new Fl_Button(150, 240, 100, 30, "Enter");
	head->show();
}
void arm(Fl_Widget *, void *) {
	Fl_Window *head = new Fl_Window(400, 350, "Arm");
	Fl_Input *input = new Fl_Input(200, 0, 100, 30, "Name: ");
	Fl_Input *input1 = new Fl_Input(200, 40, 100, 30, "Part-Number: ");
	Fl_Input *input2 = new Fl_Input(200, 80, 100, 30, "How much is the Weight: ");
	Fl_Input *input3 = new Fl_Input(200, 120, 100, 30, "The Cost: ");
	Fl_Input *input4 = new Fl_Input(200, 160, 100, 30, "Power Consumed: ");
	Fl_Button *enter = new Fl_Button(150, 200, 100, 30, "Enter");
	head->show();
}
void battery(Fl_Widget *, void *) {
	Fl_Window *head = new Fl_Window(400, 350, "Battery");
	Fl_Input *input = new Fl_Input(200, 0, 100, 30, "Name: ");
	Fl_Input *input1 = new Fl_Input(200, 40, 100, 30, "Part-Number: ");
	Fl_Input *input2 = new Fl_Input(200, 80, 100, 30, "How much is the Weight: ");
	Fl_Input *input3 = new Fl_Input(200, 120, 100, 30, "The Cost: ");
	Fl_Input *input4 = new Fl_Input(200, 160, 100, 30, "Energy Stored: ");
	Fl_Button *enter = new Fl_Button(150, 200, 100, 30, "Enter");
	head->show();
}
void manual_window(Fl_Widget *, void *) {
	Fl_Window *win = new Fl_Window(400, 300);
	Fl_Text_Buffer *buff = new Fl_Text_Buffer();
	Fl_Text_Display *disp = new Fl_Text_Display(20, 20, 350, 250, "Manual");
	disp->buffer(buff);
	win->resizable(*disp);
	win->show();
	buff->text("If you are the Project Manager and would like to\ncreate a Robot model or Robot part then click on \nProject Manager\n"
		"If you are the Beloved Customer and would like to\nview the Robot Model Catalog or view the images\n of the parts just click on beloved customers\n"
		"When you are ready to exit from the Robot Workshop\nthen just click on exit.\n"
	);
	win->show();
}

int main(){
	Fl_Window *win = new Fl_Window(600, 500, "Robot Workshop");
	Fl_Box *box = new Fl_Box(0, 10, 600, 100, "Welcome to Robot Workshop!");
	box->box(FL_UP_BOX);
	box->labelsize(36);
	box->labelfont(FL_BOLD + FL_ITALIC);
	box->labeltype(FL_SHADOW_LABEL);
	Fl_Menu_Bar *menu = new Fl_Menu_Bar(0, 0, 600, 25);
	menu->add("Exit/Quit", FL_CTRL + 'v', Quit_CB);
	menu->add("Project Manager/Robot Part/Head", FL_CTRL + 'h', head);
	menu->add("Project Manager/Robot Part/Torso", FL_CTRL + 't', torso);
	menu->add("Project Manager/Robot Part/Arm", FL_CTRL + 'a', arm);
	menu->add("Project Manager/Robot Part/Battery", FL_CTRL + 'b', battery);
	menu->add("Project Manager/Robot Part/Locomotor", FL_CTRL + 'l', locomotor);
	menu->add("Project Manager/Robot Model" ,FL_CTRL + 'w', model);
	menu->add("Beloved Customer/Browse Catalog", FL_CTRL + 'z', catalog);
	menu->add("Beloved Customer/Part Pictures", FL_CTRL + 'v', pic);
	menu->add("Manual", FL_CTRL + 'm', manual_window);

	win->show();
	return(Fl::run());
}