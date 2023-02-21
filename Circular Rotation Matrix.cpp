#include<bits/stdc++.h>
using namespace std;
void fault(){
        cout<<"Not in the circular rotation.";
        exit(0);
};
int main()
{
    int m,n;
    cout<<"Enter the number of rows in the array :";
    cin>>m;
    cout<<"Enter the number of columns in the array:";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the array elements:\n";
    int i,j;
    for(i = 0;i<m;i++)
        for(j = 0;j<n;j++)
            cin>>arr[i][j];
    deque<int> dq;
    int lastEnd = 0;
    for(i = 0;i<m;i++)
    {
        for(j = 0;j<n;j++)
        {
            if(i == 0)
            {
                dq.push_back(arr[i][j]);
                if(j == n-1) lastEnd = arr[i][j];
                continue;
            }
            else
            {
                if(j == 0)
                {
                    if(arr[i][j] != lastEnd) fault();
                    continue;
                }
                if(arr[i][j] != dq.front()) fault();
                dq.push_back(dq.front());
                dq.pop_front();
                if(j == n-1) lastEnd = arr[i][j];
            }
        }
    }
    cout<<"Yes, each row is circular rotation to its previous.";
}
