#include <iostream>
#include<vector>
using namespace std;
//top dowm approach
int topdownsolve(int n,vector<int> &dp){
    //Base case
    if(n == 0 || n == 1){
        return n;
    }
    //Checking if there are already calculated elements then directly put values
    if(dp[n] != -1)
    return dp[n];
    
    //storing ans in dp array
    dp[n] = topdownsolve(n-1,dp)+topdownsolve(n-2,dp);
    return dp[n];
}
int main()
{
    cout<<"Enter n"<<endl;
    int n; 
    cin>>n;
    //Dp array creation of n+1 size and intializing all the elements by -1
    vector<int> dp(n+1,-1);
    cout<<topdownsolve(n,dp);
    return 0;
}

//OUTPUT
//Enter n
//8
//21