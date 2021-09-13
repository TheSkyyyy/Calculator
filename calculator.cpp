#include<iostream>
#include<stdio.h>
#include<sstream>
using namespace std;

double num,term1;
int n,convert[0],x;
//add
void add() {
	double sum;
	cout<<"Enter values and press any key to add: ";
	while (cin>>num) {
		sum=sum+num;
	}
	cout<<"Sum = "<<sum;
}
//subtract
void subtract() {
	cout<<"Enter values and press any key to subtract: ";
	cin>>term1;
	while (cin>>num) {
		term1=term1-num;
	}
	cout<<"Difference = "<<term1;
}
//multiply
void multiply() {
	double product=1;
	cout<<"Enter values and press any key to multiply: ";
	while (cin>>num) {
		product=product*num;
	}
	cout<<"Product = "<<product;
}
//divide
void divide() {
	cout<<"Enter values: ";
	cin>>term1;
	while (cin>>num) {
		term1=term1/num;
	}
	cout<<"Quotient = "<<term1;
}
//decimal to binary
void dec_to_bin() {
	int binary=0;
	int i=1; 
	cout<<"Enter decimal: ";
	cin>>n;
	while (n>0) {
		x=n%2;
		n=n/2;
		binary=binary+x*i;
		i=i*10;
	}
	cout<<"Binary: "<<binary;
}
//decimal to octal
void dec_to_oct() {
	cout<<"Enter Decimal: ";
	scanf("%d",&n);
	printf("Octal: %o",n);
}
//decimal to hexadecimal
void dec_to_hex() {
	char hex[50];
	int i=0,j;
	cout<<"Enter Decimal: ";
	cin>>n;
	while (n>0) {
		x=n%16;
		if (x<10) {
			hex[i++]=x+48;
		 } else {
			hex[i++]=x+55;
		 }
		n=n/16;	
	} 
	cout<<"Hexadecimal: ";
	for (i=i-1;i>=0;i--) {
		cout<<hex[i];
	}
}
//binary checker
bool check_bin(string bin) {
	int x=0;
	for (int i=0; i<bin.length();i++) {
		if (bin.at(i)=='1' || bin.at(i)=='0') {
		x;
		} else {
			x++;
		}
	} 
 	if (x>0) {
 		return false;
	 } else {
	 	return true;
	 }	
}
//binary to decimal
void bin_to_dec() {
	int decimal,i=1;
	string num;
	cout<<"Enter binary: ";
	cin>>num;
	bool a=check_bin(num);
	if (a==true) {
		stringstream ss;
		ss<<num;
		ss>>n;
	while (n>0) {
		x=n%10;
		decimal=decimal+x*i;
		i=i*2;
		n=n/10;
	}
	cout<<decimal;
	} else {
		cout<<"Syntax Error";
	}
}
//octal to decimal
void oct_to_dec() {
	cout<<"Enter octal: ";
	scanf("%o",&n); 
	printf("decimal: %d",n);
}
//hexadecimal to decimal
void hex_to_dec() {
	cout<<"Enter hexadecimal: ";
	scanf("%x",&n);
	printf("decimal: %d",n);
}
//main
int main() {
	char choice,status;

	cout<<"'+' to add\n'-' to subtract\n'x' to multiply\n";
	cout<<"'/' to divide\n'a' to convert decimal to binary\n";
	cout<<"'b' to convert decimal to octal\n'c' to convert decimal to hexadecimal\n";
	cout<<"'d' to convert binary to decimal\n'e' to convert octal to decimal\n";
	cout<<"'f' to convert hexadecimal to decimal\nEnter Choice: ";
	cin>>choice;	
	if (choice=='+') {
		system("CLS");
		add();	
	} else if (choice=='-') {
		system("CLS");
		subtract();	
	} else if (choice=='x') {
		system("CLS");
		multiply();	
	} else if (choice=='/') {
		system("CLS");
		divide();	
	} else if (choice=='a') {
		system("CLS");
		dec_to_bin();		
	} else if (choice=='b') {
		system("CLS");
		dec_to_oct();	
	} else if (choice=='c') {
		system("CLS");
		dec_to_hex();		
	} else if (choice=='d') {
		system("CLS");
		bin_to_dec();		
	} else if (choice=='e') {
		system("CLS");
		oct_to_dec();		
	} else if (choice=='f') {
		system("CLS");
		hex_to_dec();		
	} else {
		cout<<"\nInvalid input. Please try again\n";	
	}
	cout<<"\nDo you want to continue? Y/N\n";
		cin.clear();
		cin.ignore(10000,'\n');
		cin>>status;
		if (status=='y'||status=='Y') {
			system("CLS");
			main();
		} else {
			return 0;
		}
}
