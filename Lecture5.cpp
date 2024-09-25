//FUNCTIONS


#include<iostream>
using namespace std;


//Q1. Factorial of a number

// int factorial(int n)
// {
//     int product=1;
//     for(int i=1;i<=n;i++)
//     {
//         product=product*i;
//     }
//     return product;
// }
// int main()
// {
//     cout<<factorial(5)<<endl;
//     return 0;
// }



//Q2.SUM OF DIGITS

//  int sum(int n)
//  {
//     int summ=0;
//     while(n>0)
//     {
//         int rem=n%10;
//         n=n/10;
//         summ=summ+rem;   
//     }
//     return summ;
//  }
//  int main()
//  {
//     cout<<sum(2356)<<endl;
//  }



//Q3.nCr binomial coefficient 

// int factorial(int n)
// {
//     int product=1;
//     for(int i=1;i<=n;i++)
//     {
//         product=product*i;
//     }
//     return product;
// }
// int main()
// {
//     int n=6,r=3;
//     int ans=(factorial(n))/((factorial(r))*(factorial(n-r))); // nCr=(n!/(r!*(n-r)!))
//     cout<<ans;
// }



//Q4.Fibonacci series


// int fib(int n)
// {
//     int a=0;
//     int b=1;
//     int sum;
//     for(int i=1;i<n-1;i++)
//     {
//         sum=a+b;
//         a=b;
//         b=sum;
//     }   
//     return sum;
// }

// int main()
// {
//     cout<<fib(5)<<endl;
//     return 0;
// }