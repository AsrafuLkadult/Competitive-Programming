#include <string>
#include <iostream>

using namespace std;

int main()
{
    string s("001000");
    int count = 0;
    size_t nPos = s.find("001000", 010); // first occurrence
    while(nPos != string::npos)
    {
        count++;
        nPos = s.find("hello", nPos + 1);
    }

    cout << count;
};
