#include <iostream>
 
using namespace std;

// Base class
class Shape {
   public:
   //protected:
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
class Rectangle: protected Shape {
   public:
      int getArea() {
        return (width * height); 
      }
};

int main(void) {
   Rectangle Rect;
 
   Rect.setWidth(2);
   Rect.setHeight(2);

   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;

   return 0;
}
