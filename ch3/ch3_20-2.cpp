/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sharp
 *
 * Created on 2018年3月26日, 下午1:00
 */

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    vector<int> vecInts;
    int temp;
    cout<<"please input some number\n";
    while(cin>>temp)
	vecInts.push_back(temp);

    cout<<"The numbers you just input are:\n";
    for(auto v : vecInts)
	cout<<v<<" ";
    cout<<endl;
    cout<<"The result after calculation is:\n";
    
    vector<int> results;
    int len = vecInts.size();
    int half;
    if(len%2==0)
    {
	half=len/2;
	for(int i=0;i<half;i++)
	    results.push_back(vecInts[i]+vecInts[len-1-i]);
    }else{
	half=len/2;
	for(int i=0;i<half;i++)
	    results.push_back(vecInts[i]+vecInts[len-1-i]);
    }
    for(auto v:results)
	cout<<v<<" ";
		

    
    return 0;
}

