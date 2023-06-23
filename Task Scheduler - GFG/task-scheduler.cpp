//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
        int charFrq[26] = {0};
        int mxfrq = 0;
        for(int i=0;i<N;i++)
        {
            charFrq[tasks[i]-'A']++;
            mxfrq = max(mxfrq, charFrq[tasks[i]-'A']);
        }
        
        int mxctr = 0;
        for(int i=0;i<26;i++)
        {
            if(charFrq[i] == mxfrq)
            {
                mxctr++;
            }
        }
        
        int T = (mxfrq-1)*(K+1) + mxctr;
        int ans = max(T, N);
        
        return ans;
    
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<char> tasks(N);
        for (int i = 0; i < N; i++) cin >> tasks[i];

        Solution obj;
        cout << obj.leastInterval(N, K, tasks) << endl;
    }
    return 0;
}
// } Driver Code Ends