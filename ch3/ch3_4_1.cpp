//连接多个输入字符串
//
#include <iostream>
using namespace std;
int main()
{
	string str,temp;
	while(getline(cin,temp))
		str+=temp;
	cout<<str<<endl;

	return 0;
}
