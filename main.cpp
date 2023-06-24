/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

int main()
{
   int n1,n2;
   cin>>n1>>n2;
   int arr1[n1];
   int arr2[n2];
   int res[n1+n2];
   for(int i=0;i<n1;i++)
   cin>>arr1[i];
   for(int i=0;i<n2;i++)
   cin>>arr2[i];
   int a=0,b=0,i=0;
   while(a<n1&&b<n2){
       if(arr1[a]<arr2[b]){
           res[i]=arr1[a];
           a++;
           i++;
       }
       else
       {
           res[i]=arr2[b];
           b++;
           i++;
        }
   }
   while(a<n1) res[i++]=arr1[a++];
   while(b<n2) res[i++]=arr2[b++];
   for(int i=0;i<n1+n2;i++)
    cout<<res[i]<<" ";

    return 0;
}

