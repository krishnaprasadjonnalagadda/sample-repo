#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int rno;
	double fee;
public:
	student(int, double);
	student(student& t)	 //copy constructor
	{
		rno = t.rno;
		fee = t.fee;
	}
	void display();
	void disp();

};


 student::student(int no,  double f)
{
	rno = no;
	fee = f;
}

void student::display()
{
	cout << endl << rno << "\t"  << "\t" << fee;
}
void student::disp()
{
	cout<< endl<< rno<< "\t" << "\t" << fee;
}
int main()
{
	student s(1001, 10000);
	s.display();

	student manjeet(s); 
	manjeet.display();
	s.disp();
	return 0;
}
