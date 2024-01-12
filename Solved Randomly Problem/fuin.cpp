#include<bits/stdc++.h>
using namespace std;

void fun()
{
    static int count;
    count++;
    cout << "fun() is called " << count << " times" << endl;
    if(count<=10)
    {
            fun();
    }
}

int main()
{
    cout << "first call" << endl;
    fun();
    cout << "second call" << endl;
    fun();
    cout << "third call" << endl;
    fun();
}
