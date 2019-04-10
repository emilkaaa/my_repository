
#include <iostream.h>
#include <stdio.h>
//powiem cos

float n,x;

float fib(float n)

{
    if (n==0)
    return 0;
    else if (n==1)
    return 1;
    else if (n>1)
    return fib(n-2)+fib(n-1);
}

//aabbb
main()
{
    cout<<"Ciag fibonacciego";
    cout<<"  \n";
    cout<<"Podaj n: ";
    cin>>n;
    for (x=0;x<n;x++)
    {
    cout<<x<<" element rowna sie: "<<fib(x)<<"\n";
    }
   
system ("pause");
}
