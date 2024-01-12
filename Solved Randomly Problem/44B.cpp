#include<bits/stdc++.h>
using namespace std;

int main()
{
 string s ;
 int a = 0 , b = 0 , c = 0 ;
 for(int i=0;i<3;i++)
 {
     cin >> s ;
 if(s=="A>C"||s=="A>B"||s=="C<A"||s=="B<A")
    a++;
 else if(s=="B>C"||s=="B>A"||s=="C<B"||s=="A<B")
    b++;
 else if(s=="C>A"||s=="C>B"||s=="A<C"||s=="B<C")
    c++;
 }
 if(a==b || a==c || b==c)
    cout << "Impossible" ;
 else
 {for(int y=0;y<3;y++)
 {
    if(a==y)
    cout << "A" ;
    else if(b==y)
    cout << "B" ;
    else if(c==y)
    cout << "C" ;
 }
  }
    return 0;
}
