#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n;              // number of vertices
    int m;              // number of edges
    cout<<"vertices: ";
    cin>>n;
    cout<<"edges: ";
    cin>>m;

    unordered_map<int,list<int>> adjList;
    cout<<"Enter edges(u,v): ";
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    cout<<"adjacency list: "<<endl;
    for(auto it:adjList){
        cout<<it.first<<"->";
        for(auto j:it.second){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}