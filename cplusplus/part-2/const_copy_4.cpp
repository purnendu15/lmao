#include <iostream>

using namespace std;

// Base class
class Shape {
	public:
                Shape(int val)
                {
			cout << this <<"In Shape base Constructor Called " << endl;     
                        width = val;
                        height = val * 2;
                }

                Shape(const Shape &ob1){
                width = ob1.width;
                height = ob1.height;

		}

                ~Shape()
                {
			cout << "width=" << width << " height="<<height<<endl;     
			cout << this <<"In Shape base  Destructor Called " << endl;     
                }
	private:
		int width;
		int height;
};


int main(void) {
	Shape ob1(10);
        Shape ob2 = ob1;
	return 0;
}
