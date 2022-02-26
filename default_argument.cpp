#include<iostream>
using namespace std;
int printValues(int=10 ,int=20,int);
int main()
{
	printValues(1,2,3);
	printValues(1,2);
	printValues(1);
	//printValues( );
}
int printValues(int x,int y,int z)
{
	return x+y+z;
}
