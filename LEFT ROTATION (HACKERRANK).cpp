#include <bits/stdc++.h>

using namespace std;

int main() {

int x,y;
cin>>x>>y;
int a[x];
for(int i=0;i<x;i++)
    cin>>a[i];
int j=0;
while(j<y)
{
    int tmp=a[0];
    for(int i=1;i<x;i++)
        a[i-1]=a[i];
    a[x-1]=tmp;
    ++j;
}
for(int i=0;i<x;i++)
    cout<<a[i]<<' ';
}
