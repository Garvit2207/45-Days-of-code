#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

int k;
cin>>k;
int arr[n];

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

int temp;
int max = 0;
int start = 0;
int end = 0;
for (int i = 0; i < n; i++)
{
    temp = 0;

    for (int j = i; j < n; j++)
    {
        if(temp<k){
            temp = temp + arr[j];
        }else if(temp==k){
            start = i;
            end = j;
            break;
        }        
    }
    
}

for (int i = start; i < end; i++)
{
    cout<<arr[i]<<" ";
}

    return 0;
}