#include<iostream>
#include<utility>   //pair is defined under this header file
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
// pairs should be of same type

 cout<<"Before swap:"<<endl;
 cout<<"Pair 1:"<<name.first<<" "<<name.second<<endl;
 cout<<"Pair 2:"<<full_name.first<<" "<<full_name.second<<endl;
 cout<<"After swap:"<<endl;
 full_name.swap(name);
 cout<<"Pair 1:"<<name.first<<" "<<name.second<<endl;
 cout<<"Pair 2:"<<full_name.first<<" "<<full_name.second<<endl;

//Different operators(= , == , != , >= , <=) with pairs 

 pair<int, int> num1(10,20);
 pair<int, int> num2(5,15);
 pair<int, int> temp;

 temp = num2;                      // = (assignment operator) num2 values are assignedd to temp
 cout<<temp.first<<" "<<temp.second<<endl;
 
 if(temp == num2)                    // == (comparison operator) 
  cout<<"Pairs are equal"<<endl;

 if(num1 != num2)                  // != (not equal operator)
  cout<<"Not equal"<<endl;

 if(num1 > num2)
  cout<<"num1 is greater than num2"<<endl;
 }
