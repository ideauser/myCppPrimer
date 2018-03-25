//本程序对比读入的两字符串，判断是否相等
#include <iostream>
using namespace std;
int main()
{
	string str1,str2;
	getline(cin,str1);
	getline(cin,str2);
	if(str1 == str2)
	{
		cout<<"两个字符串是相同的"<<endl;

	}
	else
	{
		if(str1 > str2)
		{
			cout<<str1<<"大"<<endl;
		}else{
			cout<<str2<<"大"<<endl;
		}
	}
	return 0;
}
