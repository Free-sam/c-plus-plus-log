#include<iostream>
using namespace std;
int main(){
/*	
int i,flag=0;
int num;
cout<<"enter the num :: ";
cin>>num;
for(i=2;i<(num/2)+1;i++)
{
	if(num%i==0)
	{
		flag=1;
		break;
	}
}
if(flag==1)
{
	cout<<"not prime!!!";
}
else
{
	cout<<"prime!!!";
}
return 0;
}
*/
int i,count=0;
int num;
cout<<"enter the num :: ";
cin>>num;
for(i=1;i<=num;i++)
{
	if(num%i==0)
	{
		count++;
	}
}
if(count==2)
{
	cout<<"prime!!!";
}
else
{
	cout<<"not prime!!!";
}
return 0;
}

