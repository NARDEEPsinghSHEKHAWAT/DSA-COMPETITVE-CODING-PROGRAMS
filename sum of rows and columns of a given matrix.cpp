#include<iostream>
using namespace std;
int main()
{
    int m,n,rowSum = 0,colSum = 0;
    cout<<"Enter the number of rows in the array :";
    cin>>m;
    cout<<"Enter the number of columns in the array:";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the array elements:\n";
    int i,j,rowMid = (m-1)/2,colMid = (n-1)/2;
    for(i = 0;i<m;i++)
        for(j = 0;j<n;j++)
            cin>>arr[i][j];
    for(i = 0;i<n;i++)
        rowSum += arr[rowMid][i];
    for(i = 0;i<m;i++)
        colSum += arr[i][colMid];
    cout<<rowSum<<" is the sum of elements in middle row."<<endl;
    cout<<colSum<<" is the sum of elements in the middle column."<<endl;
}
