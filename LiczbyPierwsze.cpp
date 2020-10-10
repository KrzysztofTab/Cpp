#include <iostream>
 
using namespace std;
 
int a,x=0;
float m[10000];
 
int main()
{
    cin>>a;
 
    for (int i=2; i<a; i++)
    {
 
        m[i-2]=a%i;        //pakuje do szufladek reszty z dzielenia
 
    }
    for (int i=0; i<a-2;i++)
    {
        if (m[i]==0)       //sprawdzam czy ktores dzielenie odbylo sie bez reszty
            x=x+1;         //jesli tak to zwiekszam "x" o 1
    }
    if (x>0)                //jesli x>0 to znaczy ze dla liczby "a" istnial jakis dzielnik rozny od niej samej
        cout<<"NIE";
        else
        cout<<"TAK";
 
    return 0;
}
