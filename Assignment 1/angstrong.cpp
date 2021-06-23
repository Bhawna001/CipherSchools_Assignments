#include<bits/stdc++.h>
using namespace std;
 
 int main()
{
	int n, a , rem, num = 0;
	cout<<"Enter the number: "<<endl;
	cin>>n;
	a= n;
	
 while(a!=0)
 {
 	rem=a%10;
 	num= num+rem*rem*rem;
 	a=a/10;
 	
 }
 if(n==num)
 {
 	cout<<"YES it is an angstrong number"<<endl;
 }
 else
 {
   cout<<"No it is not an angstrong number"<<endl;
}
 return 0;
}
 
