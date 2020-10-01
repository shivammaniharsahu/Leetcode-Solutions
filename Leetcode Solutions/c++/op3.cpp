#include<iostream>
using namespace std;
class Room
{
   int length=50,width;
   public:
   Room()
   {

   }
    Room(int a)
    {
        length+=a;
    }
    void print()
    {

        cout<<length;
    }
};
int main()
{
    Room objRoom1(20);
    objRoom1.print();
    return 0;
}
