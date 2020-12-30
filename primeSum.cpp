#include<iostream>
using namespace std;
bool prime(int p);                                            //declared a function prime()

int main()
{
	int n;
	int i=2;
	bool key=true;
	cout<<"Enter a positive integer:\t";
	cin>>n;
	
	while(i<=n/2)                                             //using n/2 to control repetation
	{
		if(prime(i))                                          //calling a function (i)
		{
	      if(prime(n-i))                                      //calling a function for (n-i)
	       { 
	          {
	   	        cout<<n<<"\t=\t"<<i<<"\t+\t"<<n-i<<endl;      // o/p : n = i + n-i , where (i), (n-i) are prime numbers.
	   	        key= false;
		      }
           }
        }
	   i++;	
	}
	
	if(key==true)                                             
	cout<<"A number "<<n<<" cann't be Express as Sum of Two Prime Numbers."<<endl;
	
	return 0;
} 


bool prime(int p)                                            //define function 
{
	int i=2;
	if (p==0 || p==1)
	 return false;
	 
	else
	{
		for(i;i<p/2;++i)
		{
			if(p%i==0)
			 return false;
		}
	}
	
  return true;
}
