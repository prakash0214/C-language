#include<iostream>
using namespace std;

class stu
{
	int rollno;
	float sal;

	public:

	stu()
	{

	}

	void getdata(int i,float s)
	{
		rollno=i;
		sal=s;
	}

	stu(const stu &obj)
	{
		rollno=obj.rollno;
		sal=obj.sal;
	}

	void print()
	{
		cout<<rollno<<" "<<sal<<endl;
	}
};

int main()
{
	stu s;

	s. getdata(10,3000);

	stu s2;
	s2=s;

	s2.print();
}





