#include<string>
using namespace std;
class Student {
	int number;
	string name;
	double score;
	static double sum;
	static int num;
public:
	void set();
	void disp();
	static double avg();
	friend void Avg(Student s);
};