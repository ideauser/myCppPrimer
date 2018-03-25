//读入字符串，并去掉标点符号
#include <iostream>
using namespace std;
int main()
{
	string str1,str2;
	getline(cin,str1);
	for(auto c : str1)
		if(!ispunct(c))
			str2+=c;
	cout<<str2;
	return 0;
}
