#include <iostream>
using namespace std;


float chislo()
{
    int result = 0;
    for(;;)
    {
        char c = cin.get();
        if(( c>='0') && (c<='9'))
        { result = result*10+c-'0';}
        else
        {
            cin.putback(c);
            return result;
        }
    }
}


float multdiv()
{
    float x = chislo();
    for(;;)
    {
        char c = cin.get();
        switch(c)
        {
            case '*':
                x=x*chislo();
                break;
            case '/':
                x=x/chislo();
                break;
            default :
                cin.putback(c);
                return x;
        }
    }
}


float addsub()
{
    float x = multdiv();
    for(;;)
    {
        char c = cin.get();
        switch(c)
        {
            case '+':
                x=x+multdiv();
                break;
            case '-':
                x=x-multdiv();
                break;
            default :
                cin.putback(c);
                return x;
        }
    }
}



int main()
{
    float result = addsub();
    cout<<result<<'\n';
    
}
