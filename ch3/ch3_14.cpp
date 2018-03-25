//用cin读入一组整数，并把它们存到一个vector对象
//
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vint;
	int temp;
	char flag='Y';
	cout<<"每次请输入一个数字"<<endl;
	while(flag=='y' || flag=='Y')
	{
		cin>>temp;
		cout<<"还需要继续输入吗？（Y|y）继续.."<<endl;
		cin>>flag;
	}
	return 0;
}
