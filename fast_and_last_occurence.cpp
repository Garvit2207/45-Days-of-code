//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    int target = x;
    int i= 0;
int j = n;
int mid = (i+j)/2;
int ans = -1;
int count = 0;
int middle = mid;
while(count<=middle){
mid = (i+j)/2;
if(arr[mid]>target)
{
j = mid;
}
else if(arr[mid]<target){
    i = mid;
}
if(arr[mid]==target){
    ans = mid;
    break;
}
count++;
}
vector<int> answer;
// cout<<mid<<" ";
// cout<<ans<<" ";
for(int i=mid-1; i>=0; i--){
    if(arr[i]==target){
        ans--;
    }else break;
}
// cout<<mid<<" ";
answer.push_back(ans);
// ans = -1;
int last = 0;
for(int i=mid+1; i<n; i++){
    if(arr[i]==target){
        last++;
    }else break;
}
if(ans==-1){
    answer.push_back(ans);
}else answer.push_back(mid+last);
return answer;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends