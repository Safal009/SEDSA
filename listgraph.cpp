#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<pair<int,int>> adj[], int u, int v, int wt){
    adj[u].push_back({v,wt});
    adj[v].push_back({u, wt});
}


void printGraph(vector<pair<int,int>> adj[], int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" -> ";
        for(int j=0;j<adj[i].size();j++){
            cout<<"("<<adj[i][j].first<<","<<adj[i][j].second<<") ";
        }
        cout<<endl;
    }
}


int main(){
    int m,n;

    cout<<"Enter the number of nodes and edges in graph: "<<endl;
    cin>>n>>m;

    vector<pair<int, int>> adj[n+1];
    bool cond = true;

    while(cond){
        cout<<"Enter 1 for adding an edge in graph "<<endl;
        cout<<"Enter 2 for printing the graph "<<endl;
        cout<<"Enter 3 for exit "<<endl;
        int choice;
        cin>>choice;
        if(choice == 1){
            cout<<"Enter the edges between which you want the edge: "<<endl;
            int u,v,wt;
            cin>>u>>v;
            cout<<"Enter the weight of the edge: "<<endl;
            cin>>wt;
            addEdge(adj, u, v, wt);
        }
        else if (choice == 2)
        {
            printGraph(adj, n);
        }
        else if (choice == 3)
        {
            cond = false;
        }
        
        
    }
}
