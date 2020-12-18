#include<iostream>
using namespace std;
int main()
{
	int i;
	int a[5];                                //array decleared.
	int *p = a;                              //pointer decleared and assign the a.
	
	cout<<"Enter elements:\n";
	for(i=0;i<5;i++)                         //loop using for i/p
		cin>>*(p+i);
	cout<<"You entered:\n";
	for(i=0;i<5;i++)                         //loop for o/p
		cout<<*(p+i)<<"\t";
	return 0;
}
