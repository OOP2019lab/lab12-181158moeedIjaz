#pragma once
#include"shape_l181158.h"
#include<iostream>
using namespace std;

class triangle:public shape{
	public:
		float area();
		triangle(float,float,string);
		void print();
		~triangle();
private:
	float base;
	float height;

};