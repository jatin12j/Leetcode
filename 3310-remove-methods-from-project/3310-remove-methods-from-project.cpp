class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>>adj(n);
        vector<int>inDegree(n,0);
        vector<bool>suspecious(n,false);

        for(auto &edges:invocations){
            int u =edges[0];
            int v =edges[1];
            adj[u].push_back(v);
            inDegree[v]++;
        }

        //DFS
        queue<int> que;
        que.push(k);
        suspecious[k] = true;

        while(!que.empty()){
            int curr = que.front();
            que.pop();

            for(auto &ngbr:adj[curr]){
                inDegree[ngbr]--;
                if(!suspecious[ngbr]){
                    que.push(ngbr);
                    suspecious[ngbr]=true;
                }
            }
        }
        vector<int>result;
        bool cannotRemove = false;
        for(int i=0;i<n;i++){
            if(suspecious[i] && inDegree[i]>0){
                cannotRemove = true;
                break;
            }
            if(!suspecious[i]){
                result.push_back(i);
            }
        }

        if(cannotRemove){
            vector<int>vec(n);
            for(int i=0;i<n;i++){
                vec[i]=i;
            }
            return vec;
        }
        return result;
    }
};