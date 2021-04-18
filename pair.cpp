#include<iostream>
#include<utility>
using namespace std;

int main()
{ 
   // pair <data_type1, data_type2> pair_name;
   // without initialization

 pair<int,int> number;
 number.first= 100;
 number.second=200;
 cout<<number.first<<" ";
 cout<<number.second<<endl;
 
 // pair <data_type1, data_type2> pair_name(value1, value2);
 //with initialization

 pair<string,string> name("Xyz","Abc");

 cout<<name.first<<" ";
 cout<<name.second<<endl;

 //make_pair()  :initialize using function

 pair<string,string> full_name;

 full_name=make_pair("John","carter");
 cout<<full_name.first<<" ";
 cout<<full_name.second<<endl;

 // swap() : swaps content of one pair with content of another pair
 cout<<"Before swap:"<<endl;
 cout<<"Pair 1:"<<name.first<<" "<<name.second<<endl;
 cout<<"Pair 2:"<<full_name.first<<" "<<full_name.second<<endl;
 
 cout<<"After swap:"<<endl;
 full_name.swap(name);
  cout<<"Pair 1:"<<name.first<<" "<<name.second<<endl;
 cout<<"Pair 2:"<<full_name.first<<" "<<full_name.second<<endl;

 }
