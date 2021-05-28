/*
Problem at https://leetcode.com/problems/all-paths-from-source-to-target/

Time Complexity - O(n*n)
*/



const int N = 20;
vector<int> g[N];
using path=vector<int>;
set<path> getAllPaths(int src, int dest){
    set<path> paths = {};
    if(src==dest) return {{dest}};
    for(int child:g[src]){
        set<path> rem_path = getAllPaths(child,dest);
        for(path p : rem_path){
            p.push_back(src);
            paths.insert(p);
        }
    }
    return paths;
}
class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        if(n==0) return {{}};
        for(int i=0;i<n;i++){
            g[i].clear();
            for(int v:graph[i]){
                g[i].push_back(v);
            }
        }
        vector<path> final_ans ={};
        auto ans = getAllPaths(0,n-1);
        for(auto p:ans){
            reverse(p.begin(),p.end());
            final_ans.push_back(p);
        }
            
        return final_ans;
    }
};