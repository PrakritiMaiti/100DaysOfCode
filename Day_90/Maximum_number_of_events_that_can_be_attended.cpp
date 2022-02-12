/*There are N events in Geek's city. You are given two arrays start[] and end[] denoting starting and ending day of the events respectively. Event i starts at start[i] and ends at end[i].
You can attend an event i at any day d between start[i] and end[i] (start[i] ≤ d ≤ end[i]). But you can attend only one event in a day.
Find the maximum number of events you can attend.
*/
#include <bits/stdc++.h>
using namespace std;

class MyComp {
    public:
    bool operator() (const int &a, const int &b) {
        return a > b;
    };
};

class Solution {
  public:
    int maxEvents(int start[], int end[], int N) {
        list<pair<int, int>> ar;
        for(int i = 0; i < N; i++) ar.push_back({start[i], end[i]});
        
        ar.sort();
        
        priority_queue<int, vector<int>, MyComp> pQueue;
        int cur = 1, ans = 0;
        
        while(cur <= (int)1e5) {
            while(!ar.empty() && ar.front().first == cur) {
                pQueue.push(ar.front().second);
                ar.pop_front();
            }
            
            while(!pQueue.empty() && pQueue.top() < cur) pQueue.pop();
            if(!pQueue.empty()) {
                ++ans;
                pQueue.pop();
            }
            
            ++cur;
        }
        
        return ans;
    }
};

int main() {

        int N;
        cin>>N;
        
        int start[N], end[N];
        for(int i=0; i<N; i++)
            cin>>start[i];
        for(int i=0; i<N; i++)
            cin>>end[i];

        Solution ob;
        cout << ob.maxEvents(start,end,N) << endl;
    
    return 0;
} 