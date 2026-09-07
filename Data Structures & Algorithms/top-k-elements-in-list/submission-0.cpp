class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>map;
       for(auto i: nums){
        map[i]++;
       }
       // ab yaha pe mere ko frequency ke hisab se top ki values nikalni hai 
     priority_queue<pair<int,int>>pq;
       for(auto x:map){
        int nm=x.first;
        int fr=x.second;
        pq.push({fr,nm});
       }
       vector<int>ans;
       while(k--){
         ans.push_back(pq.top().second);
         pq.pop();
       }
       return ans;
    }
};
