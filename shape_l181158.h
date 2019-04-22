#pragma once
#include<string>
#include<iostream>
using namespace std;

class shape{
protected:
	string type;
public:
	virtual float area();
	string color;
	shape(string);
	virtual void print();
	virtual ~shape();
};