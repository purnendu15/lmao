#include <iostream>

using namespace std;

// Base class
class Shape {
	public:
                Shape()
                {
			cout << " Constructor Called " << endl;     
                }
		void callme()
		{
			cout << " I am base " << endl;     
		}

            
                ~Shape()
                {
			cout << " Destructor Called " << endl;     
                }


	private:
		int width;
		int height;
};

// Derived class
//class Rectangle: private Shape {
class Rectangle: public Shape {
	public:
		int d_weight;
		int d_height;
		void callme()
		{
			cout << " I am Derived " << endl;     
                        Shape::callme();
		}



}; 

int main(void) {

	Rectangle Rect;
	Shape *base;
	base = &Rect;

	Rect.callme();
	base->callme();

	return 0;
}
