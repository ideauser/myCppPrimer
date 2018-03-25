//用cin读入字行串，并把它添加到vector对象中去
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<string> vstr;
	string tempstr;
	getline(cin,tempstr);
	while(tempstr.size()!=0)
	{
		vstr.push_back(tempstr);
		getline(cin,tempstr);
	}
	for(auto s:vstr)
		cout<<s<<endl;
	return 0;
}
