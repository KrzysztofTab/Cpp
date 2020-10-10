int main()
{
    int n, number, mod;
    cin>>n;
 
    for(int i=0; i<n; i++)
    {
        cin>>number;
 
        if(number==1||number==2) cout<<"TAK"<<endl; //jezeli jeden lub 2 to jest to liczba pierwsza 
        else
        {
            for(int j=number-1; j>=2; j--) //dzielimi przes liczby mniejsze od niej 
            {
                mod=number%j;
                if(mod==0) {cout<<"NIE"<<endl; break;} //jak reszta wyjdzie zero to nie jest pierwsza 
            }
            if(mod==1) {cout<<"TAK"<<endl;} //jak jeden to jest pierwsza 
        }
    }
 
    return 0;
}
