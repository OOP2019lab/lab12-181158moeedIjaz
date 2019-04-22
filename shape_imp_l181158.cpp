#include"shape_l181158.h"

shape::shape(string c){
	color=c;
}
float shape::area(){
	return 0;
}
void shape::print(){
	cout<<"Shape"<<endl;
	cout<<"Color : "<<color<<endl;
	cout<<"Area : "<<area()<<endl;
}
shape::~shape(){
	cout<<"Shape destructor"<<endl;
}