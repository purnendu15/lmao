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
      
      int call_areas()
      {
        width = 20;
        height = 20;
        cout << " In Base ";
        return (width * height);
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


      int call_areas(int weight, int height){
      
       cout << " In Derived ";
      
       return ( weight * height);

       } 
      /*
      int getArea() { 
         return call_areas(); 
      }
      */
};

int main(void) {

   Rectangle Rect;
   Shape *base;
   base = &Rect;
   
   cout << "Call Areas" << Rect.call_areas(10,10)<<endl;
   cout << "Call Areas" << Rect.call_areas()<<endl;

//   Rect.setWidth(5);
//   Rect.setHeight(7);
//   cout << "Total area: " << Rect.getArea() << endl;

   return 0;
}
