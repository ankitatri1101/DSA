//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends

#include<bits/stdc++.h>
pair<long long, long long> getMinMax(long long a[], int n) 
{
      long long minimumValue = a[0];
    long long  maximumValue = a[0];
    for(int i = 0 ; i < n ; i++){
        if(a[i] < minimumValue) minimumValue = a[i];
        if(a[i] > maximumValue) maximumValue = a[i];
    }
    return make_pair(minimumValue , maximumValue);
}
