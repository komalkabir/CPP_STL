// pair code example
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

 pair<int,string> name(1,"Abc");
 cout<<name.first<<" ";
 cout<<name.second<<endl;

 //make_pair function

 pair<string,string> full_name;
 full_name=make_pair("John","carter");
 cout<<full_name.first<<" ";
 cout<<full_name.second;

 }
