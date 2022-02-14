/*
Given N activities with their start and finish day given in array start[ ] and end[ ]. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a given day.
Note : Duration of the activity includes both starting and ending day.*/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
       int jobs = 1;
       priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
       for(int i = 0; i< n; i++) pq.push({end[i],start[i]});
       int cur_stop = pq.top().first;
       while(true){
           pq.pop();
           if (pq.empty()) break;
           int nex_start = pq.top().second;
           if(nex_start > cur_stop){
               jobs += 1;
               cur_stop = pq.top().first;
           } 
       }
        return jobs;
    }
};

int main()
{
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    
    return 0;
}