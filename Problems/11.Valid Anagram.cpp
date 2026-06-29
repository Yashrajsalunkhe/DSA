#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool isAnagram(string s, string t)
{
    // Step 1: Check length
    if(s.size() != t.size())
    {
        return false;
    }

    // Step 2: Create frequency map
    unordered_map<char, int> freq;

    // Step 3: Count frequency of characters in s
    for(char c : s)
    {
        freq[c]++;
    }

    // Step 4: Decrease frequency using t
    for(char c : t)
    {
        freq[c]--;
    }

    // Step 5: Check whether all frequencies became 0
    for(const auto &entry : freq)
    {
        if(entry.second != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string s = "listen";
    string t = "silent";

    if(isAnagram(s, t))
    {
        cout << "Strings are Anagrams" << endl;
    }
    else
    {
        cout << "Strings are NOT Anagrams" << endl;
    }

    return 0;
}