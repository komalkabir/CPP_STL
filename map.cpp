#include<iostream>
#include<map>      //map is defined under this header file
#include<iterator>
using namespace std;

int main()
{
    //creating and initializing map using various methods
    map<int,int> num{ {1,10}, {2,20}};

    num[3] =30;     // operator[] used to access key
    num[4] =40;     // if not present then it inserts given k_val pair

    num.insert(pair<int,int> {5,50});  
    num.insert(pair<int,int> {6,60});

    cout<<"Key\tValue"<<endl;
    for(auto i=num.begin(); i!=num.end(); i++)      //begin() and end() returns iterator 
                                                    //to start and end position
    {
        cout<<i->first<<" \t"<<i->second<<endl;
    }
       
    //map functions:
    //erase(), clear(), find(), size(), max_size(), at(), empt()

    cout<<"Value at key 5: "<<num.at(5)<<endl;    // prints value associated with key 5
                              // throws exception is key not present

    cout<<"Size: "<<num.size()<<"\n"
        <<"Max_size num can hold: "<<num.max_size()<<endl;

    map<int,int>::iterator ite;
    ite=num.find(3);      //finds key and returns iterator pointing to it
    cout<<ite->first<<" "<<ite->second<<endl;

    num.erase(3);      //removes values at given key
    cout<<"Size after erase(): "<<num.size()<<endl;
    
    num.clear();       //removes all key value pairs
    cout<<"Size after clear(): "<<num.size()<<endl;

    if(num.empty())     //checks whether map is empty or not
        cout<<"Map is empty \n";

        
    //Taking input from user
    map<int,string> roll_name;
    int roll;
    string name;
    cout<<"Enter roll num and name: \n";
    for (auto i = 0; i < 5; i++)
    {
        cin>>roll>>name;
        roll_name[roll]=name;
    }
    cout<<"Key\tValue"<<endl;
    for(auto i=roll_name.begin(); i!=roll_name.end(); i++)
    {
        cout<<i->first<<" \t"<<i->second<<endl;
    }

    return 0;
}