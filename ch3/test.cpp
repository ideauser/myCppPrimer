#include <iostream>
using namespace std;
int main()
{
	string str("hellow");
	for(auto &c : str)
		c = toupper(c);
	cout<<str;
	return 0;
}
