#include<iostream>
using namespace std;
int main()
{
	int sum=0,s=0,yy,yy1,yy2,yy3,mm,mm1,dd,dd1,odd=0,i,odd1,odd2,odd3,j;
	int monthday[]={31,28,31,30,31,30,31,31,30,31,30,31};
	char *day[]={"Sunday","Monday","Tuesday","Wednesday","Thurshday","Friday","Saturday"};
	cout<<"Enter Your Year =";
	cin>>yy;
	cout<<"Enter Your Month =";
	cin>>mm;
	cout<<"Enter Your Date =";
	cin>>dd;
	for(i=0;i<=yy;i+=400)
	{
		if(yy<=i+400)
		{
			yy1=yy-i-1;
		}
	}
	cout<<yy1<<endl;
	if(yy1<100)
	{
		yy2=yy1;
	}
	else if(yy1>100&&yy1<200)
	{
		odd=odd+5;
		yy2=yy1-100;
	}

	else if(yy1>200&&yy1<300)
	{
		odd=odd+3;
		yy2=yy1-200;
	}

	else if(yy1>300&&yy1<400)
	{
		odd=odd+1;
		yy2=yy1-300;
	}
	for(i=5;i<=yy2;i+=4)
	{
		if(yy2>=i)
		{
			s++;
		}
	}
	cout<<yy2<<endl;
	if((yy2+1)%4==0)
	{
		odd=odd+1;
	}
	cout<<s<<endl;
	yy3=yy2-s;
	cout<<yy3<<endl;
	odd1=odd+(yy3*1+s*2)%7;
	cout<<odd<<endl;
	cout<<odd1<<endl;
	for(i=1;i<=12;i++)
	{
		if(mm-1==i)
		{
			for(j=0;j<=mm-1;j++)
			{
				sum=sum+monthday[i];
			}
		}
	}
	odd2=((sum+dd)%7)-1;
	odd3=odd1+odd2;
	cout<<odd3<<endl;
	odd3=odd3%7;
	for(i=0;i<=7;i++)
	{
		if(odd3==i)
		{
			cout<<"Your Day Is = "<<day[i];
		}
	}

}
