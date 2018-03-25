#include <iostream>
using namespace std;

int main()
{
	string str1;
	//getline一次读一行
/*	while(getline(cin,str1))
	{
		cout<<str1<<endl;
	}
	*/
	string word;
	while(cin>>word)
	{
		cout<<word;
	}

	return 0;

}
