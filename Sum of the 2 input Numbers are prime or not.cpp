#include<iostream>
main()
{
	int a,b,s,i,c=0;
	bool isPrime=true;
	cout<<"Enter 1st Number ";
	cin>>a;
	cout<<endl<<"Enter 2nd Number : ";
	cin>>b;
	s=a+b;
	cout<<endl<<"The sum of"<<a<<"and"<<b<<"is ="<<s<<endl;
		for(i=2;i<=s/2;++i)
  			{
      			if(s%i==0)
      				{
          				isPrime=false;
          				break;
				    }
			}
  				if (isPrime)
      				cout<<"This is a prime number";
  				else
      				cout<<"This is not a prime number";
}
