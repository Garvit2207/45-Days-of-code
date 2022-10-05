#include <iostream>
using namespace std;

int main(){

int n;
cin>>n;

int arr[n];

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

int temp = 0;
int max = 0;
int count = 0;

for (int i = 0; i < n; i++)
{
temp = arr[i];
 for(int j=i+1; j<n; j++){
    temp = temp + arr[j];
    if(temp==0){
        count = j-i+1;
    }
 }

 if(count>max){
    max = count;
 }
else if(count == n){
    max = count;
    break;
}
}

cout<<max<<endl;

    return 0;
}