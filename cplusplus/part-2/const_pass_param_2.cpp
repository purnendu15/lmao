#include <iostream>

using namespace std;

// Base class
class Shape {
	public:
                Shape(int val)
                {
			cout << "In Shape base Constructor Called " << endl;     
                        width = val;
                        height = val * 2;
                }
		void callme()
		{
			cout << "callme From Base "<<" width=" << width << "height="<<height<<endl;     
		}
                ~Shape()
                {
			cout << "In Shape base  Destructor Called " << endl;     
                }
	private:
		int width;
		int height;
};

// Derived class
class Rectangle: public Shape {
	public:

               Rectangle(int a):Shape(a){
                    cout << "Derived Rectangle Constructor"<<endl;
               }
             
		void callme()
		{
			cout << "callme from  Derived " << endl;     
                        Shape::callme();
		}

                ~Rectangle(){
                cout <<"In Derived Destructor"<<endl;
                }
                 
}; 

int main(void) {

	Rectangle Rect(10);
	Shape *base;
	base = &Rect;
	Rect.callme();
	//base->callme();

	return 0;
}
