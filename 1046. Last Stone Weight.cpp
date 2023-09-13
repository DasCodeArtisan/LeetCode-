class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        priority_queue<int>max_heap(stones.begin(),stones.end());
        int first,second;
        while(n>1){
            first=max_heap.top();
            max_heap.pop();
            second=max_heap.top();
            max_heap.pop();
            n-=2;
            if(first-second>0){
                max_heap.push(first-second);
                n+=1;
            }
        }
        if(!max_heap.empty()){
            return max_heap.top();
        }
        return 0;

    }
};