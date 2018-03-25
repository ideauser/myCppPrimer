//将输入字符串替换成X
#include <iostream>
using namespace std;

int main()
{
	string str1;
	getline(cin,str1);
	//要使用引用
	for(auto &c : str1)
		c='X';
	cout<<str1;
	return 0;
}
