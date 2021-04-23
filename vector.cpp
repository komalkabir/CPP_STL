#include<iostream>
#include<vector>      //vector is defined under this header file
using namespace std;

int main()
{   
    //creating vector ,accessed and traveresed using iterators
    vector<int> num;
    for (int i = 0; i < 6; i++)
        num.push_back(i);            
    
    // begin() and end() returns iterator pointing to first and last element respectively
    cout<<"First to last elements:"<<endl;
    for (auto i = num.begin(); i!= num.end(); i++)     //auto identified i to be iterator
        cout<<*i<<" ";
    
    // rbegin() and rend() returns reverse iterator pointing to last and first element respectively
      cout<<endl<<"Last to first elements:"<<endl;
    for (auto i= num.rbegin() ; i!= num.rend() ; i++)    //moves from last to first
        cout<<*i<<" ";
    

    // Initializing vector
    vector<string> name {"A","B","C","D","E"};

    cout<<"\nVector size: "<<name.size();            //returns size of vector
    cout<<"\nVector max_size: "<<name.max_size();    //returns maximum no. of elements vector can store
    cout<<"\nVector capacity: "<<name.capacity();    //returns current space allocated
    name.resize(3);
    cout<<"\nVector resized to: "<<name.size()<<"\n";      // vector is resized from 5 to 3

    vector<int> id;
    if(id.empty()==true)                                //checks if vector is empty
     cout<<"Vector is empty"<<endl;                     
    else
     cout<<"Vector is not empty";

    // erase() vs clear()

    vector<int>::iterator ite;
    id={1,2,3,4,5,6};

    ite=id.begin();                   // erase() used to remove element at particular index
    id.erase(++ite);                  //erases element at 1st position

    for (auto i = id.begin(); i!= id.end(); i++)   
        cout<<*i<<" ";

    id.clear();                       // clear() removes all the elements
    cout<<"\nAll elements are removed as size is: "<<id.size()<<"\n";  

    vector<int> roll;

    roll.assign(5,20);     //fill the array with value=20, five times

    cout<<"\nRoll values: ";
    for (auto i = roll.begin(); i!= roll.end(); i++)   
        cout<<*i<<" ";
    
    roll.push_back(30);              //push_back() inserts elements from back
    roll.push_back(40);
    cout<<"\nAfter push_back(): ";
     for (auto i = roll.begin(); i!= roll.end(); i++)   
        cout<<*i<<" ";

    roll.pop_back();                 //pop_back() removes element from back
    cout<<"\nAfter pop_back(): ";
    for (auto i = roll.begin(); i!= roll.end(); i++)   //Last element is removed
        cout<<*i<<" ";
    

    roll.insert(roll.begin()+2,45);            //inserts value before the given position
    cout<<"\nValue is inserted at 2nd index: ";
      for (auto i = roll.begin(); i!= roll.end(); i++)   
        cout<<*i<<" ";

    vector<int> num1,num2;
    num1.assign(4,30);
    num2.assign(4,10);

    num1.swap(num2);                            //swapping values of num1 with num2;
     for (auto i = num1.begin(), j=num2.begin(); i!= num1.end(); i++,j++)   
        cout<<"\nnum1:"<<*i<<" "<<"num2:"<<*j<<" ";

    
    //emplace() and emplace_back()

    num1.emplace(num1.begin()+3,100);           //inserts value at given position
    num2.emplace_back(200);                     //inserts value at end of vector

       cout<<"\nnum1 values: ";
   for (auto i = num1.begin(); i!= num1.end(); i++)     
        cout<<*i<<" ";

       cout<<"\nnum2 values: ";
   for (auto i = num2.begin(); i!= num2.end(); i++)     
        cout<<*i<<" ";
    
    return 0;
}