//程序读入一组整数，存入vector,并计算相邻整数的和
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vecInts;
    int tempInt;
    cout<<"请输入一组数，以非数字结束输入"<<endl;
    while(cin >> tempInt)
        vecInts.push_back(tempInt);
    cout<<"以下是输入的数据\n";
    for(auto v : vecInts)
        cout << v <<" ";
    cout<<endl;
    cout<<"以下是计算的结果\n";
    int vecIntsLen = vecInts.size()-1;
    vector<int> vecResult;
    for(int i=0;i<vecIntsLen;i++)
    {
        vecResult.push_back(vecInts[i]+vecInts[i+1]);
    }
    for(auto v:vecResult)
        cout << v<<" ";
    return 0;
}
