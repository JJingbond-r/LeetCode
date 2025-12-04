class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
            sort(intervals.begin(),intervals.end(), [](vector<int>& a, vector<int>& b){return a[1]<b[1] ;});
        int removed=0, pre_end=intervals[0][1];
        for(int i=1; i<intervals.size(); i++){
            if(pre_end > intervals[i][0]){
                removed++;
            }else{
                pre_end = intervals[i][1];
            }
        }
        return removed;
    }
};