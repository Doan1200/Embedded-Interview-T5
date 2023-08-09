#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arrays;
    arrays.push_back(5);
    arrays.push_back(7);

    for(auto item : arrays)
    {
        cout << "i = " << item << endl;
    }

    return 0;
}