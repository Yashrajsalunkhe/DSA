#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool containsDuplicate(vector<int>& nums)
{
    unordered_set<int> seen;

    for(int x : nums)
    {
        if(seen.count(x))
        {
            return true;
        }

        seen.insert(x);
    }

    return false;
}

int main()
{
    vector<int> nums = {1,2,3,1};

    if(containsDuplicate(nums))
        cout << "Duplicate Found";
    else
        cout << "No Duplicate";
}