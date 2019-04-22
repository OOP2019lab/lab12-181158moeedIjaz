#pragma once
#include"shape_l181158.h"
#include<ctime>
#include<iostream>
using namespace std;

class circle:public shape{
public:
	float area();
	void print();
	circle(float rad,string t);
	~circle();
private:
	float radius;

};
