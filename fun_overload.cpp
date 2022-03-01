/*This is a comment
New Line added*/

#include<iostream>
using namespace std;

class printdata {
	public:void print(int i) {
	cout<<"printing int"<<i<<endl;
	}
	void print(float f) {
	cout<<"printing float"<<f<<endl;
	}
	void print(string c) {
	cout<<"printing character"<<c<<endl;
	}
};

int main()
{
	printdata p;
	p.print(5);
	p.print(10.5f);
	p.print("C PLUS PLUS");
	return 0;	
}
