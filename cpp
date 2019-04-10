<<<<<<< HEAD

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
//kolejna zmiana v.3
=======

#include <iostream.h>
#include <stdio.h>
//ma³a zmiana planu

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
//kolejna zmiana
}
>>>>>>> 3574d7593be3edb2431b45c2cf8d3590a4c31f94
