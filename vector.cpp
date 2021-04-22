#include<iostream>
#include<vector>   //vector is defined under this header file
using namespace std;

int main()
{
    vector<int> num;
    for (int i = 0; i < num.size(); i++)
    {
        num.push_back(i);
    }
    
    return 0;
}