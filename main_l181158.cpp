#include"circle_l181158.h"
#include"rectangle_l181158.h"
#include"triangle_l181158.h"
#include"conio.h"

float sumArea(shape &shape1,shape &shape2){
	float areaSum=shape1.area()+shape2.area();
	return areaSum;
}
void main(){
	triangle t1(1.0,9.0, "Red");
	circle c1(2, "Blue");
	rectangle r1(6,2, "Orange");
	cout<<t1.area()<<endl;
	cout<<t1.color<<endl;
	cout<<c1.area()<<endl;
	cout<<r1.area()<<endl;

	shape *sptr1= &t1;
	shape &sref=r1;
	cout<< sptr1->area()<<endl;
	cout<< sptr1->color<<endl;
	cout<< sref.color<<endl;
	cout<< sref.area()<<endl;


	shape s1("Purple");
 
	cout<<sumArea(t1,c1)<<endl;
	cout<<sumArea(s1,r1)<<endl;
	cout<<sumArea(s1,t1)<<endl;
	
	string color;
	int count=5;
	shape** shapesArray=new shape*[count];
	for(int i=0;i<count;i++){
		cout << "Press 1 for a triangle, 2 for rectangle and 3 for a circle." << endl;
  		switch (_getch()){
        	case '1':
				float base,height;
				cout<<"Enter base : ";
              	cin>>base;
				cout<<"Enter height : ";
				cin>>height;
				cout<<"Enter color : ";
				cin>>color;
				shapesArray[i]=new triangle(base,height,color);
              	break;
        	case '2':
              	float width,length;
				cout<<"Enter length : ";
              	cin>>length;
				cout<<"Enter width : ";
				cin>>width;
				cout<<"Enter color : ";
				cin>>color;
				shapesArray[i]=new rectangle(length,width,color);
              	break;
 
        	case '3':
              	
              	float radius;
				cout<<"Enter radius : ";
				cin>>radius;
                cout<<"Enter color : ";
				cin>>color;
				shapesArray[i]=new circle(radius,color);
              	break;
 
   	 	default:
              	cout<<"Invalid input. Enter again." <<endl<<endl;
              	break;
	}

	}
	for(int i=0;i<count;i++){
		shapesArray[i]->print();
	}
	for(int i=0;i<count;i++){
		delete shapesArray[i];
	}
	delete[]shapesArray;
	//shape *s1= new triangle(1.0,9.0, "Red");// constructor of triangle invoked
	//delete s1; //identify which destructor in invoked


	system("pause");
}