#include<iostream>
using namespace std;
class A
{
    int id;
    static int count;
    public:         //by default it is private. to use private constructor we use friend class.
    A(){
        count++;
        id=count;
        cout<<"Const cl "<<id<<"\n";
    }
    ~A(){
        cout<<"Dis cl "<<id<<"\n";
    }
};
int A::count=0;
int main()
{
    A a[2];
    return 0;
}
