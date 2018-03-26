//输入一组詞，将word改为大写，然后输出
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> words;
	string word;
	while(cin>>word && word!="q")
		words.push_back(word);

	for(auto w : words)
		for(auto &a:w)
			if(isalpha(a))
				a=toupper(a);

	for(auto w :words)
		cout<<w<<endl;
				
	return 0;
}


