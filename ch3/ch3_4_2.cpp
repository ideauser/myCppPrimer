//本程序对比读入的两字符串，判断是否相等
#include <iostream>
using namespace std;
int main()
{
	string str1,str2;
	getline(cin,str1);
	getline(cin,str2);
	auto l1 = str1.size();
	auto l2 = str2.size();
	if(l1 == l2)
	{
		cout<<"两个字符串长度是相同的"<<endl;

	}
	else if(l1 > l2)
	{
		cout<<str1<<"长"<<endl;
	}else{
	   	cout<<str2<<"长"<<endl;
	}
	
	return 0;
}
