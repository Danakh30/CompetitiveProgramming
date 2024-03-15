#include <iostream>
using namespace std;
class A
{
public:
    A() { cout << "In A constructor\n"; }
};

class B
{
public:
    // conversion from A (constructor):
    B(const A &x) { cout << "In B constructor\n"; }
    
    // conversion from A (assignment):
    B &operator=(const A &x)
    {
        cout << "In B assignment \n";
        return *this;
    }
    // conversion to A (type-cast operator)
    operator A()
    {
        cout << "In B conversion operator A\n";
        return A();
    }
};
void func1(B b) { cout << "In function 1\n"; }

int main()
{
    A obj_a;
    B obj_b = obj_a; // calls constructor
    obj_b = obj_a;   // calls assignment
    obj_a = obj_b;   // calls type-cast operator
    func1(obj_a);    // what does this call??
    return 0;
}