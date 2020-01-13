#include <string>
using namespace std;

class String {
	string s;
public:
	String(string a);
	String operator+=(String& a);
	String  operator=(String a);
	bool operator==(String a);
	void display();
	void getlength();
	~String();
};