#include<iostream>
using namespace std;
int main()
{
	int n;
	do                                                                   //using do-while loop for reduce effort of re-run. 
	{
		int age;
    	cout<<"-------------------------------------------------------------------------";
	    cout<<"\nEnter your age : ";
	    cin>>age;
	 
	    if(age>=18)
	     cout<<"\nyou can vote!";
	    else if(age<0)                                                   //sometime '-' age put by user so its for error output.
	     cout<<"\nError : no one has '-' age!\nplease retry!";
	    else
	     cout<<"\nyou can not vote!";
	     
	    cout<<"\n\nDo you want re-enter your age:(1 = yes/0 = no)\n\t";  //for re-enter or checking for other users.
	    cin>>n;
	}while(n);
	
	cout<<"\n\n\nThankyou for using it!\n";
	return 0;
}
