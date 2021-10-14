#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
void main()
{
	int num[5],i,sum=0,avg,stdvi,var=0;
	int *p[5];
	cout<<"Enter 5 Numbbers:\n";
	for(i=0;i<5;i++)
	{
		cin>>num[i];
		p[i]=&num[i];
		sum+=*p[i];
	}
	avg=sum/5;
	for(i=0;i<5;i++)
	{
		var+=pow(num[i]-avg,2);
		var=var/5;
		stdvi=sqrt(var);
	}
	cout<<"Sum of 5 Numbers is: "<<sum;
	cout<<"\nAverage of 5 Numbers is: "<<avg;
	cout<<"\nStandard deviation of these Numbers is: "<<stdvi;

	getch();
}
