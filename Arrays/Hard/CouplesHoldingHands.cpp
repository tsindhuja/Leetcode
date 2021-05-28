
/*
Problem at https://leetcode.com/problems/couples-holding-hands/


Time Compexity - O(n)
*/

const int N = 70;
set<int> g[N];
bool vis[N];
void get_clustersize(int u, int& cluster_size){
   vis[u]=1;
    cluster_size++;
    
    for(int v : g[u]){
        if(!vis[v])
            get_clustersize(v, cluster_size);
    }
    
}
class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        int n = row.size()/2;
        for(int &x:row) x=x/2;
        for(int i=0;i<n;i++){
            g[i].clear();
            vis[i]=0;
        }
        for(int i =0;i<row.size();i+=2){
            
            int c1=row[i], c2=row[i+1];
            if(c1==c2) continue;
            g[c1].insert(c2);
            g[c2].insert(c1);
            
        }
        int ans=0;
        for(int i =0;i<n;i++){
         if(!vis[i]){
             int cluster_size=0;
             get_clustersize(i,cluster_size);
             ans+=cluster_size-1;
         }
             
        }
        return ans;
        
                
    }
};