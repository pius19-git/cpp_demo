#include<iostream>
using namespace std;

int main()
{
	cout<<"in main"<<endl;
	int i=100;//local variable but acting as global for the following block
	cout<<"i is "<<i<<endl;
	
	{
		//nothing but a block anonymous
		int i=32;//local
		cout<<"i is "<<i;
		
		cout<<"the global is "<< ::i <<"\n";//100// scope resolution operator
		
		
	}
	
	return 0;
}

int i=10;// global variable

