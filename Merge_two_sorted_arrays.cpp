#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

int m;
cin>>m;

int arr1[n];
int arr2[m];

for (int i = 0; i < n; i++)
{
    cin>>arr1[i];
}

for (int i = 0; i < m; i++)
{
    cin>>arr2[i];
}

int i= 0;
int j = 0;

while(i!=n && j!=m){

if(arr1[i]<arr2[j]){

cout<<arr1[i]<<" ";
i++;

}

else if(arr1[i]>arr2[j]){

cout<<arr2[j]<<" ";
j++;

}

}

if(i==n){

while(j!=m){
    cout<<arr2[j]<<" ";
    j++;
}

}

else if(j==m){

while(i!=n){
    cout<<arr1[i]<<" ";
    i++;
}

}

    return 0;
}