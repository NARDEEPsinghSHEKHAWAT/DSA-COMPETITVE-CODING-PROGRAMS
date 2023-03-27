//p-smooth number 
#include <iostream> 
#include<cmath> 
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
    int n, p; 
    cin>>n; 
    cin>>p; 
    if(getMaxPrimefactor(n)<=p) 
    { 
                 
        cout<<"This number is p-smooth number"; 
    } 
    else 
    { 
        cout<<"This number is not p-smooth number"; 
    } 
    return 0; 
}
