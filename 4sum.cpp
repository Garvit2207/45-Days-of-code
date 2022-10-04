#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

int target ;
cin>>target;

map<int, int> m;

for (int i = 0; i < n; i++)
{
    int data;

    cin>>data;
    m[data] = m[data] + 1;

}

int size=0;

    for(auto it:m){
        if(it.second<=2){
            size++;
        }
    }

int arr[size];
int il =0;
    for(auto it:m){

while(it.second!=0){
    arr[il] = it.first;
    it.second--;
    il++;
}

}

size = n;

for (int i = 0; i < n; i++)
{
    for (int j = i; j < n; j++)
    {
        for (int k = j; k < n; k++)
        {

         for (int l = k; l < n; l++)
         {
            if(arr[i]+arr[j]+arr[k] + arr[l]==target && i!=j && j!=k && i!=k && l!=k && l!=i && l!=j){
            cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<arr[l];
            cout<<endl;
            break;
         }
         }
         

        }
        
    }
    
}


    return 0;
}