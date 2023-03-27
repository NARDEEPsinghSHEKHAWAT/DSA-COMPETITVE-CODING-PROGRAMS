//k-jagged number 
 
#include <iostream> 
using namespace std; 
int smallDiv(int n) 
{ 
    if (n % 2 == 0) 
        return 2; 
  
    for (int i = 3; i * i <= n; i += 2) { 
        if (n % i == 0) 
            return i; 
    } 
  
    return n; 
} 
 
 
int main() 
{ 
    int n, k;
    cout<<"enter the number"<<endl;
    cin>>n; 
    cout<<"enter the k value"<<endl;
    cin>>k;      
    if(k>=smallDiv(n)) 
    { 
        cout<<"This is k-jagged number"; 
    } 
    else 
    { 
        cout<<"This is not k-jagged number"; 
    } 
 
    return 0; 
}
