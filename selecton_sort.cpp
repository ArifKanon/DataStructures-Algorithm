#include<iostream>
using namespace std;

int main()
{
    int ar[] = {3,1,6,0,17,4};
    int n = sizeof(ar) / sizeof(ar[0]);

    for(int i=0; i<n-1; i++)
    {
        int minIndex = i;
        for(int j=i+1; j<n; j++)
        {
            if(ar[j] > ar [minIndex])
                minIndex = j;
        }

        if(minIndex != i)
        {
            int temp;
            temp = ar[i];
            ar[i] = ar[minIndex];
            ar[minIndex] = temp;
        }
    }

    for(int i=0; i<n; i++)
        cout<<ar[i]<<" ";
}
