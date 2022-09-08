#include <iostream>
using namespace std;

int main() {
int n=0;
float total=0;
cout<<"\n enter 5 integers \n";
for(int i=0;i<5;i++)
{
	cin>>n;
	total=total+n;
}
float avg;
avg=total/5.0;
cout<<"Average = "<<avg;
	return 0;
}
