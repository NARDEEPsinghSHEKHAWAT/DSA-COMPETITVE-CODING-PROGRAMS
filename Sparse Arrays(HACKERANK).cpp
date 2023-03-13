#include <iostream>
using namespace std;

int main() 
{ int n;
 cin >> n;
string stringList[n];
for (int i = 0; i < n; i++)
{
    string str;
    cin >> str;

    stringList[i] = str;
}

int q;
cin >> q;

string queryList[q];
for (int i = 0; i < q; i++)
{
    string query;
    cin >> query;
    queryList[i] = query;
}

int result[q];
int count = 0;


for (int i = 0; i < q; i++)
{
    for (int j = 0; j < n; j++)
    {
        if (queryList[i] == stringList[j])
        {
            count++;
        }
    }
    result[i] = count;
    count = 0;
}


for (int i = 0; i < q; i++)
{
    cout << result[i] << endl;
}
}
