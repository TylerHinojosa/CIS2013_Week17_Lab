#include <iostream>
#include <fstream>
using namespade std;

#define DEBUG false

int add_numbers(int &x, int y){
	return x+=y;
}

int main(){
	
	int num1 = 5;
	int num2 = 300;
	int *ptr = &num2;
	int *ptr = &num2;
	
	cout << "value of num2 is " << num2 << endl;
	cout <<"Value of ptr is " << ptr << endl;
	num2 = 9999;
	cout << "value of num2 is " << num2 << endl;
	cout <<"Value of ptr is " << ptr << endl;
	*ptr = &num1;
	cout << "value of num2 is " << num2 << endl;
	cout <<"Value of ptr is " << ptr << endl;
	num2 = 555;
	cout << "value of num2 is " << num2 << endl;
	cout <<"Value of ptr is " << *ptr << endl;
	cout<<"Value of ptr is " << ptr << endl;
	
	
	return 0;
}


