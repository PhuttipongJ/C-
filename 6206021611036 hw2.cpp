#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name;
	int salary,sale,cp,tcp,total;
	cout<<"-------------Homework 2-------------"<<endl;
	cout<<"Enter Name : ";
	cin>>name;
	cout<<"Enter Salary : ";
	cin>>salary;
	cout<<"Enter Sale : ";
	cin>>sale;
	cout<<"Enter Commisstion Percent: ";
	cin>>cp;
	tcp=cp*sale/100;
	total=tcp+salary;
	cout<<"------------------------------------"<<endl;
	cout<<"Your Name = "<<name<<endl;
	cout<<"Total Revenue : "<<total<<" Bath"<<endl;
	cout<<"------------------------------------"<<endl;
	return 0;
}