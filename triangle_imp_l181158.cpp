#include"triangle_l181158.h"

triangle::triangle(float a,float b,string c):shape(c){
	base=a;
	height=b;
}
float triangle::area(){
	float area;
	area=(base*height)/2;
	return area;
}
triangle::~triangle(){
	cout<<"triangle destructor"<<endl;
}
void triangle::print(){
	cout<<"triangle"<<endl;
	cout<<"base : "<<base<<endl;
	cout<<"height : "<<height<<endl;
	cout<<"Color : "<<color<<endl;
	cout<<"Area : "<<area()<<endl;
}