//�������һ������������vector,���������������ĺ�
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vecInts;
    int tempInt;
    cout<<"������һ�������Է����ֽ�������"<<endl;
    while(cin >> tempInt)
        vecInts.push_back(tempInt);
    cout<<"���������������\n";
    for(auto v : vecInts)
        cout << v <<" ";
    cout<<endl;
    cout<<"�����Ǽ���Ľ��\n";
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
