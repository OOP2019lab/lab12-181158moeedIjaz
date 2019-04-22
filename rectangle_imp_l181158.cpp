#include"rectangle_l181158.h"
rectangle::rectangle(float l,float w,string c):shape(c){
	length=l;
	width=w;
}
float rectangle::area(){
	float area=0;
	area=length*width;
	return area;
}
void rectangle::print(){
	cout<<"Rectangle"<<endl;
	cout<<"length : "<<length<<endl;
	cout<<"width : "<<width<<endl;
	cout<<"Color : "<<color<<endl;
	cout<<"Area : "<<area()<<endl;

}
rectangle::~rectangle(){
	cout<<"Rectangle destructor"<<endl;

}