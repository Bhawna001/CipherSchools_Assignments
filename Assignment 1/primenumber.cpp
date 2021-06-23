#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num1,num2,i,n;
	cout<<"Enter first number: ";
	cin>>num1;
	cout<<"Enter last number: ";
	cin>>num2;
	
	while(num1<=num2)
	{
		n=0;
		for(i=2;i<=num1/2;i++)
		{
			if(num1%i==0)
			{
				n=1;
				break;
			}
		}
		if(n==0)
		cout<<" is a prime number"<<endl;
		 num1=num1+1;
		
		
	}

}
