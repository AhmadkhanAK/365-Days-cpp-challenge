#include <iostream>
#include <string>

using namespace std;

int main() 
{ 
	int a[10];
	int *p=a;
	int i=0;

	for(i=0;i<10;i++)
	      a[i]=i;

	for(i=0;i<10;i++)
	      cout<<p[i]<<" ";
	cout<<endl;
	return 0;
} 

