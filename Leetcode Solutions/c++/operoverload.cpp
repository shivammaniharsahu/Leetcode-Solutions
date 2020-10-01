
#include<iostream>
using namespace std;
class Room
{
    public:
     string s1,s2;
     void getdata(string a, string b)
     {
         s1=a;s2=b;
     }
    Room operator +(Room x)
    {
        Room z;
        z.s1=s1+x.s2;
        cout<<z.s1;
    }
};
int main()
{
    Room s;
    s.getdata("ab","bc");
    s.s1+(s.s2);
    return 0;


    return 0;
}
