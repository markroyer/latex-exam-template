#include <iostream>
#include <string>

using namespace std;

class A {
  public:
  virtual string m1() const {
    return "A's m1()";
  };
  string m2() const {
    return "A's m2()";
  };
};

class B: public A {
  public:
  virtual string m1() const {
    return "B's m1()";
  }
  string m2() const {
    return "B's m2()";
  }
};

void f1(A a) { cout << a.m1() << endl; }

void f2(A* a) { cout << a->m1() << endl; } 

void f3() {
  A* a = new A();
  B* b = dynamic_cast<B*>(a);
  if (b == NULL)
    cout << "Apples!" << endl;
  else
    cout << "Oranges!" << endl;
}

int main() {
  A* a;
  B* b;

  a = new A();
  cout << a->m1() << endl;
  cout << a->m2() << endl;

  b = new B();
  cout << b->m1() << endl;
  cout << b->m2() << endl;

  a = b;
  cout << a->m1() << endl;
  cout << a->m2() << endl;
  
  f1(B());
  f2(new B());

  f3();

  return 0; 
}
