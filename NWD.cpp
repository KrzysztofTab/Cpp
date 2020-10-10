#include <iostream>

using namespace std;

int main( )
{
  unsigned int a, b;
  int R;
    cin >>R;
    for (int i=0; i<R; i++)
    {
        cin >> a >> b;
        while( a != b )
        if( a < b ) b -= a; else a -= b;
        cout << a << endl;
     }
    return 0;
}