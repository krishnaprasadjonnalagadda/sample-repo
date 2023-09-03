#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int rno;
	double fee;
public:
	student(int, char[], double);
	student(student& t)	 //copy constructor
	{
		rno = t.rno;
		fee = t.fee;
	}
	void display();

};




 student::student(int no, char n[], double f)
{
	rno = no;
	fee = f;
}

void student::display()
{
	cout << endl << rno << "\t"  << "\t" << fee;
}

int main()
{
	student s(1001, 10000);
	s.display();

	student manjeet(s); 
	manjeet.display();

	return 0;
}
