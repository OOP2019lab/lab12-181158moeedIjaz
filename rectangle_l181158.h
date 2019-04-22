#pragma once
#include"shape_l181158.h"
#include<iostream>
using namespace std;

class rectangle:public shape{
public:
	float area();
	rectangle(float h,float w,string t);
	void print();
	~rectangle();
private:
	float length;
	float width;

};