/*DFS, BFS without recursion*/
#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
using namespace std;

stack<int> st;
queue <int> q;
vector<pair<int,int>> v;

void dfs(){
    bool status;
    while(st.size()>0){
        status = false;
        //search untraced neighbor
        for(int i=0; i<v.size(); i++){
            if(st.top()==v[i].first){
                st.push(v[i].second);
                v.erase(v.begin() + i);
                status = true;
                cout << "forward: " << st.top() << ", " << st.size() << ", " << v.size() << ", " << i << endl;
                break;
            }else if(st.top()==v[i].second){
                st.push(v[i].first);
                v.erase(v.begin() + i);
                status = true;
                cout << "forward: " << st.top() << ", " << st.size() << ", " << v.size() << ", " << i << endl;
                break;
            }
        }
        //backtrack if neighbor not found
        if(status==false){
            st.pop();
            if(st.size()>0){cout << "back:    " << st.top() << ", " << st.size() << ", " << v.size() << endl;}
            else{cout << "back:    " << "none" << ", " << st.size() << ", " << v.size() << endl;}
        }
    }
    if(v.size()==0){cout << "BFS complete." << endl;}
    else{cout << "Graph unconnected." << endl;}
}

void bfs(){
    while(q.size()>0){
        for(int i=0; i<v.size(); i++){
            if(q.front()==v[i].first){
                q.push(v[i].second);
                v.erase(v.begin() + i);
                cout << q.back() << ", " << q.size() << ", " << v.size() << ", " << i << endl;
            }else if(q.front()==v[i].second){
                q.push(v[i].first);
                v.erase(v.begin() + i);
                cout << q.back() << ", " << q.size() << ", " << v.size() << ", " << i << endl;
            }
        }
        q.pop();
    }
    if(v.size()==0){cout << "BFS complete." << endl;}
    else{cout << "Graph unconnected." << endl;}
}

int main(){
    //input
    cout << "Enter number of edges: ";
    int n; scanf("%d", &n);
    pair<int,int> p;
    for(int i=0; i<n; i++){
        cin >> p.first >> p.second;
        v.push_back(p);
    }

    //DFS
    st.push(v[0].first);
    cout << "start: " << st.top() << endl;
    dfs();

    /*
    //BFS
    q.push(v[0].first);
    cout << "start: " << q.front() << endl;
    bfs();
    */

    return 0;
}