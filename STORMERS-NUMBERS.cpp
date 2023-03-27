//stormer's number 
#include <iostream> 
#include <cmath> 
using namespace std; 
int getMaxPrimefactor(int n) { 
   int maxPF = -1; 
   while (n % 2 == 0) { 
      maxPF = 2; 
      n /= 2; 
   } 
   for (int i = 3; i <= sqrt(n); i += 2) { 
      while (n % i == 0) { 
         maxPF = i; 
         n = n / i; 
      } 
   } 
   if (n > 2) 
   maxPF = n; 
   return maxPF; 
} 
int main() 
{ 
    int i; 
    cin>>i; 
    int n=i*i+1; 
    int m=2*i; 
    if(getMaxPrimefactor(n)>=m) 
    { 
        cout<<"This is stormer's number"; 
    } 
    else 
    { 
        cout<<"this is not stormer's number"; 
    } 
    return 0; 
}
