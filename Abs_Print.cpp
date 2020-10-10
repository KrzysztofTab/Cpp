#include <stdio.h>      /* printf */
#include <stdlib.h>     /* abs */
#include <cmath>        /*abs*/

using namespace std;

int main()
{
     int n,m;
  n=abs(23);   // <stdlib.h> i <cmath>
  m=abs(-11);  // <<stdlib.h> i <cmath>
  printf ("n=%d\n",n);
  printf ("m=%d\n",m);

  cout << "abs (3.1416) = " << abs (3.1416) << '\n';   // <cmath>
  cout << "abs (-10.6)  = " << abs (-10.6) << '\n';    // <cmath>
  return 0;
}