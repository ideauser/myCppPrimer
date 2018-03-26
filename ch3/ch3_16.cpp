#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10,42);
	vector<int> v4{10};
	vector<int> v5{10,42};
	vector<string> v6{10};
	vector<string> v7{10,"hi"};
	
	cout<<"The size of v1 is: 0 and run result is: "<<v1.size()<<endl;
	cout<<"The size of v2 is: 10 and run result is: "<<v2.size()<<"all content is 0:"<<v2[0]<<endl;
	cout<<"The size of v3 is: 10 and run result is: "<<v3.size()<<"all content is 42:"<<v3[0]<<endl;
	cout<<"The size of v4 is: 1 and run result is: "<<v4.size()<<"all content is 10:"<<v4[0]<<endl;
	cout<<"The size of v5 is: 2 and run result is: "<<v5.size()<<"all content is 10,42:"<<v5[0]<<v5[1]<<endl;
	cout<<"The size of v6 is: 10 and run result is: "<<v6.size()<<"all content is NULL:"<<v6[0]<<endl;
	cout<<"The size of v7 is: 10 and run result is: "<<v6.size()<<"all content is hi:"<<v7[0]<<endl;

	if(v6.size()>0)
	{
		for(auto a:v6)
			cout<<a<<" ";
	}
	cout<<endl;
	if(v7.size()>0)
	{
		for(auto a:v7)
		{
		cout<<a<<" ";
		}
	}		
	cout<<endl;


	return 0;

}
