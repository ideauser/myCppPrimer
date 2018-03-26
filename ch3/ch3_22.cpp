#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

/*
 *  * 
 *   */
int main(int argc, char** argv) {
vector<string> text{"Hellow world,how do you don","every body is ok?","yes","nobody here?","","ok","next line"};
auto it= text.begin();
while(it != text.end() && !(it->empty()))    
    {

    	for(auto c=(*it).begin();c!=(*it).end();c++)
			    *c=toupper(*c);
		it++;
    }
    for(auto it=text.cbegin();it!=text.cend();it++)
			cout<<*it;
    return 0;
}
