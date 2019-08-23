#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[] = {5,2,6,3,4};
    int n = sizeof(ar) / sizeof(ar[0]);
    int item;

    for(int i=1; i<n; i++)
    {
        item = ar[i];
        int j=i-1;
        while(j>=0 && ar[j] > item)
        {
            ar[j+1] = ar[j];
            j--;
        }

        j=j+1;
        ar[j] = item;
    }

    for(int i=0;i<n;i++)
        cout<<ar[i]<< " ";
}
