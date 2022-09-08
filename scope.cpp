#include<iostream>
using namespace std;

int i=10;
int main()
{
	int i=123;
	cout<<i<<endl;
    cout<<::i<<endl;
    {
        int i=90;
        cout<<i<<endl;
        cout<<::i;
    }
	
	return 0;
}

int i=10;// global variable //don't use when u use the variable


