#include<iostream>
using namespace std;
int linear_search(int A[],int);

int main()
{
    int n,i,r;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int A[n];
    cout<<"Input the array data"<<endl;
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    r=linear_search (A,n);
    if(r!=-1)
        cout<<"Found"<<endl<<"And index number is "<<r<<endl;
    else
        cout<<"Not Found"<<endl;
    return 0;
}

int linear_search(int B[],int m)
{
    int i,a;
    cout<<"What number u search?"<<endl;
    cin>>a;
    for(i=0;i<m;i++){
        if(B[i]==a){
            return i;
        }
    }
    return -1;
}
