#include<iostream>
#include<array>       //array class defined under this header file
using namespace std;

int main()
{  
 // Initialization of array
   array<int, 5> ar1 = {1,2,3,4,5};

 // Printing array elements using at() function
 for(int i=0;i<5 ;i++)
 {
     cout<<ar1.at(i)<<" ";
 }
cout<<endl;
 //Print first and last element of array
 //Using front() and back() functions
 cout<<"First element:"<<ar1.front()<<endl;
 cout<<"Last element:"<<ar1.back()<<endl;
 
 // Print size and maximum size of array
 //Using size() and max_size() -Both gives same value

 cout<<"Size of array: "<<ar1.size()<<endl;   //Gives number of element in array
 cout<<"Maximum no. of elements array can store: "<<ar1.max_size()<<endl; 

 array<int, 5>  ar2= {6,7,8,9,10};
// Swapping values of ar1 with ar2
cout<<"Values of ar1 before swap "<<endl;
for(int i=0;i<5 ;i++)
 {
     cout<<ar1.at(i)<<" ";
 }

ar1.swap(ar2);

cout<<endl<<"Values of ar1 after swap"<<endl;
for(int i=0;i<5 ;i++)
 {
     cout<<ar1.at(i)<<" ";
 }

//Checking if array is empty
//Using empty()  

array<int,0> empty_array;  
  if(empty_array.empty())
    cout<<endl<<"Array is empty...."<<endl;

//Filled with some value using fill()

array<int,5> ar3;
ar3.fill(100);            //Fills array with value 0
cout<<"ar3 is now filled with these values:"<<endl;
for (int i=0; i<5; i++)
{
    cout<<ar3.at(i)<<" ";
}

return 0;
}