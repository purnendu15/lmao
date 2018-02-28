#include <iostream>
 
using namespace std;

// Base class
class Shape {
   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
      
   protected:
      int width;
      int height;
};

// Derived class
class Rectangle: private  Shape {
   public:
      int getArea() {
        return (width * height); 
      }
///*
      void set_width()
       {
        width = 10;
       };
      void set_height()
       {
        height = 20;
       };
//*/

};

int main(void) {
   Rectangle Rect;

   Rect.set_width(); 
   Rect.set_height(); 
  // Rect.setWidth(5);
   //Rect.setHeight(7);

   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;
   cout << "Cal ="<<endl<<cal;

   return 0;
}
