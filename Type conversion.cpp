#include<iostream>
using namespace std;
int main()
{
	//Implicit type conversion
	
	int num_int=5;
	double num_double;
	num_double=num_int;
	cout<<"num_int="<<num_int<<endl;
	cout<<"num_double="<<num_double<<endl<<endl<<endl;
	
	int num_int1;
	double num_double1=5.55;
	num_int1=num_double1;
	cout<<"num_int1="<<num_int1<<endl;
	cout<<"num_double1="<<num_double1<<endl;
	
	
	return 0;
}
