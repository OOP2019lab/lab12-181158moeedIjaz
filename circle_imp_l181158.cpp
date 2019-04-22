#include"circle_l181158.h"

circle::circle(float rad,string c):shape(c){
	radius=rad;
}
float circle::area(){
	float area;
	area=(pow(radius,2)*22)/7;
	return area;
}
circle::~circle(){
	cout<<"circle destructor"<<endl;
}
void circle::print(){
	cout<<"Circle"<<endl;
	cout<<"Radius : "<<radius<<endl;
	cout<<"Color : "<<color<<endl;
	cout<<"Area : "<<area()<<endl;
}