#include<iostream>

using namespace std;

struct node{
  int data;
  struct node *next;
};

class Stack{

  private:
    struct node *head;
  public:
    Stack();
    ~Stack();
    void push_stack(int val);
    int pop_stack();
    void list_stack();
    int size;
};

Stack::Stack()
{
  head = NULL;
  size = 0;
}


Stack::~Stack()
{
  //delete []head;
  //cout << "Descructor Called";
}

void Stack::push_stack(int val)
{
  if (head == NULL)
  {
    head = new struct node; 
    head->data =  val;
    head->next = NULL;
  }
  // non empty stack
  else
  {
   struct node *new_head = new struct node;
   new_head->data = val;
   new_head->next = head;
   head = new_head;
  }
  size++;
  cout <<endl<< "Pushed"<<val<<"at"<<size;
  return;
}

int Stack::pop_stack()
{
 int val = head->data;
 struct node * temp = head;
 if( head!= NULL){
  head = head->next;
  size--;
 }
 return val;
}

void Stack::list_stack()
{
 struct node *temp = head;
 for( int i = 0; i < size ; ++i)
 {
  cout << endl<<temp->data;
  temp = temp->next; 
 } 
}

int main()
{
  Stack obj;
  obj.push_stack(10);
  obj.push_stack(20);
  obj.push_stack(30);
  obj.push_stack(40);
  obj.push_stack(50);
  obj.push_stack(60);
  
  obj.list_stack();

  cout <<endl<<obj.pop_stack()<<endl;

  obj.list_stack(); 

  return 0;
}
