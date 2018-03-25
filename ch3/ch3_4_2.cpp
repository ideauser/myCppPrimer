//本程序对比读入的两字符串，判断是否相等
#include <iostream>
using namespace std;
int main()
{
	string str1,str2;
	getline(cin,str1);
	getline(cin,str2);
	if(str1.size() == str2.size())
	{
		cout<<"两个字符串长度是相同的"<<endl;

	}
	else
	{
		if(str1.size() > str2.size())
		{
			cout<<str1<<"长"<<endl;
		}else{
			cout<<str2<<"长"<<endl;
		}
	}
	return 0;
}
