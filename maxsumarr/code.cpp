#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    if(n==1)
        return arr[0];
    long long sum=0;
    long long maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        sum += arr[i];
        maxsum = max(sum, maxsum);
        if(sum<0)
            sum = 0;
    }
    if(sum==0 || n==0)
        return sum;
    return maxsum;
}
