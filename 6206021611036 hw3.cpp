#include <iostream>
#include <string>
int cal_com(int salary,int sale,int cp);
using namespace std;
int main()
{
	string name;
	int salary,sale,cp,tcp,total;
	cout<<"-------------Homework 3-------------"<<endl;
	cout<<"Enter Name : ";
	cin>>name;
	cout<<"Enter Salary : ";
	cin>>salary;
	cout<<"Enter Sale : ";
	cin>>sale;
	cout<<"Enter Commisstion Percent: ";
	cin>>cp;
	cout<<"------------------------------------"<<endl;
	cout<<"Your Name = "<<name<<endl;
	cout<<"Total Revenue : "<<cal_com(salary,sale,cp)<<" Bath"<<endl;
	cout<<"------------------------------------"<<endl;
}
int cal_com(int salary,int sale,int cp)
{

	int total;
	int tcp;
	tcp = cp*sale/100;
	total = tcp+salary;
	return(total);

}