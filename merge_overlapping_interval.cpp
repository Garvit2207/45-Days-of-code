#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

int arr[n][2];

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < 2; j++)
    {
        cin>>arr[i][j];
    }
    
}

int j;

for (int i = 0; i < n-1; i++)
{    j=i;
    cout<<arr[i][0]<<" ";
while(arr[j][1]>=arr[j+1][0]){

j++;

}
i=j;
cout<<arr[j][1]<<" ";
cout<<endl;
    
}

if(j!=n-1){
    cout<<arr[n-1][0]<<" "<<arr[n-1][1]<<" ";
}

}