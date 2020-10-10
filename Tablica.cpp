#include <iostream>

using namespace std;

int main()
{
      const int max =3;
      int numer[3];
      int sum=0;
      cout <<"please type 3 integers."<<endl;
      for (int i=0; i<max; i++)
      {
         cout <<"Numer "<<i+1 <<": ";
         cin >> numer[i];
         sum +=numer[i];

      }
      cout << sum;
         return 0;
   }
