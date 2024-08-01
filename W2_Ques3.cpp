#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void toLowerCase(string &s)
{
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c)
              { return tolower(c); });
}

int main()
{
    string s;
    cout << "Enter the paragraph : ";
    getline(cin, s);
    // toLowerCase(s);
    map<char, int> m;
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }
    for (auto itr : m)
    {
        cout << itr.first << " : " << itr.second << endl;
    }
    return 0;
}
