#include <iostream>
using namespace std;
 
class base
{
public:
/*    virtual void print ()
    { cout<< "print base class" <<endl; }
*/

    virtual void print () = 0;
 
    void show ()
    { cout<< "show base class" <<endl; }
};
 
class derived:public base
{
public:
    void print ()
    { cout<< "print derived class" <<endl; }
 
    void show ()
    { cout<< "show derived class" <<endl; }
};
 
int main()
{
    base *bptr;
    base obj_base;

/*

    derived d;
    bptr = &d;
     
    //virtual function, binded at runtime
    bptr->print(); 
     
    // Non-virtual function, binded at compile time
    bptr->show(); 
*/
}
