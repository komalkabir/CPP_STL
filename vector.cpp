#include<iostream>
#include<vector>      //vector is defined under this header file
using namespace std;

int main()
{   
    //creating vector
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

    cout<<"\n"<<"Vector size: "<<name.size();            //returns size of vector
    cout<<"\n"<<"Vector max_size: "<<name.max_size();    //returns maximum no. of elements vector can store
    cout<<"\n"<<"Vector capacity: "<<name.capacity();    //returns current space allocated
    name.resize(3);
    cout<<"\n"<<"Vector resized to: "<<name.size()<<"\n";      // vector is resized from 5 to 3

    vector<int> id;
    if(id.empty()==true)                                //checks if vector is empty
     cout<<"Vector is empty";                     
    else
     cout<<"Vector is not empty";

    return 0;
}