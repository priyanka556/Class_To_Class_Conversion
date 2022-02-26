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
	printdata pd;
	pd.print(5);
	pd.print(10.5f);
	pd.print("C PLUS PLUS");
	return 0;	
}
