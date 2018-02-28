#include <iostream>
#include <cstring>

using namespace std;

// Base class
class Shape {
	public:
                Shape(int val)
                {
                        width = new int;
                        height = new int;
			cout << this <<":In Shape base Constructor Called " << endl;     
                        this->val = val;
                        *width = val;
                        *height = val * 2;
                }
/*
                Shape( Shape &ob1){
	        cout << this <<"In Shape Copy Constructor" << endl;     
		this->width = new int;
		this->height = new int;
                memcpy(this->width, ob1.width, 1);
                memcpy(this->height, ob1.height, 1);

		}
*/
                ~Shape()
                {
			cout << this <<":In Shape base  Destructor Called " << endl;     
			cout << "val=" << this->val <<" width=" << *(this->width) << " height="<< *(this->height) <<endl;     
                        if( width !=NULL)
				delete width;
                        if( height !=NULL)
				delete height;
                }
	private:
		int *width;
		int *height;
                int val;
};


int main(void) {
	Shape ob1(10);
        Shape ob2 = ob1;
	return 0;
}
