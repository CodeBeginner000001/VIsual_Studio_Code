#include <iostream>
#include <vector>
#include <algorithm>
bool mylessercomparator(int a, int b)
{
    if (a < b)
    {
        // dont need to swap to sort the vector in inc.order
        return true;
    }
    return false;
}
bool mygreatercomparator(int a, int b)
{
    if (a > b)
    { // you dont need to swap to sort v[] in the dec. order
        return true;
    }
    return false;
}
using namespace std;
int main()
{
    // vector<int> v = {1, 0, 2, 4, 3};
    // cout << "size: " << v.size() << endl;
    // int n = v.size();
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // // reverse kar ho

    // reverse(v.begin(), v.end());
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // // sort the vector

    // sort(v.begin(), v.end());
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    vector<int> v2 = {30, 20, 0, 10, 60, 80, 5};

    // 1. rbegin() , rend()
    // sort(v2.rbegin(), v2.rend());
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }
    // cout << endl;

    // 2. using greater integer

    // sort(v2.begin(), v2.end(), greater<int>());
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }
    // cout << endl;

    // 3. using custom comparator
    sort(v2.begin(), v2.end(), mylessercomparator);
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
}