class Solution {
public:
    unordered_set<int> safe,cycle;
    void dfs(int i,vector<vector<int>>& graph, bool* visited){
        if(safe.find(i)!=safe.end()||cycle.find(i)!=cycle.end())
            return;

        if(visited[i]){
            cycle.insert(i);
            return;
        }
        
        visited[i] = true;
        for(auto x: graph[i]){
            dfs(x,graph,visited);
            if(cycle.find(x)!=cycle.end()){
                cycle.insert(i);
                return;
            } 
        }
        safe.insert(i);
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();

        bool* visited = new bool[n];
        for(int k = 0;k<n;k++)
            visited[k] = false;
        vector<int> ans;
        for(int i = 0;i<n;i++){
            dfs(i, graph,visited);
            if(safe.find(i)!=safe.end())
                ans.push_back(i);
        }
        return ans;
    }
};
