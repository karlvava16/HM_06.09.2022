#include <iostream>
using namespace std;


class Student
{
	string name;
	unsigned int age;

public:
	Student()
	{
		name = "";
		age = 0;
	}
	Student(string n, int a)
	{
		name = n;
		age = a;
	}
	void Print()
	{
		cout << "Name : " << name << endl;
		cout << "Age : " << age << endl;
	}
};


int main()
{
	return 0;
}