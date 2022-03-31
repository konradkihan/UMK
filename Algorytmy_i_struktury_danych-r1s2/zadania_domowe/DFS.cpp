#include<iostream>
#include<stack>
#include<queue>
#include<vector>

using namespace std;

const int SIZE = 1000;

bool is_graph_consistent(vector<int>graph[SIZE], int edge, int n){
    /*Function takes graph as a vector and checks if the
    graph is consistent using DFS algorithm. If yes - returns true
    else returns false*/
    bool is_consistent = true;
    bool is_visited[SIZE];
    stack<int>data_stack;

    for(int i=0; i<100; i++) is_visited[i] = false;     // i is node
    data_stack.push(edge);      // pushing edge to a stack
    is_visited[edge] = true;    // setting visited edge to a push
    #pragma region visiting graph edges
        while(!data_stack.empty()){     // while there can be possible visited
            edge = data_stack.top();    // set edge from the top of a stack
            data_stack.pop();
            int edge_length = graph[edge].size();
            for(int i = 0; i < edge_length; i++){
                // if edge visitation done change to "true"
                int edge_no = graph[edge][i];

                if(!is_visited[edge_no]){
                    is_visited[edge_no] = true;
                    data_stack.push(edge_no);
                }
            }
        }
    #pragma endregion

    #pragma region validating if graph is consistent
    for(int i = 0; i < n; i++){
        if(is_visited[i] == false) return !is_consistent;
    }
    return is_consistent;
    #pragma endregion

}


int main(){
    vector<int>graph[SIZE];
    int ap_amt, edge_amt, edge_1, edge_2, edge_tmp;
    bool is_ready = false;
    cin>>ap_amt>>edge_amt;

    for(int i = 0; i < edge_amt; i++){
        cin>>edge_1>>edge_2;
        graph[edge_1].push_back(edge_2);
        graph[edge_2].push_back(edge_1);

        if(!is_ready){
            edge_tmp = edge_1;
            is_ready = true;
        }

    }


    if(
        is_graph_consistent(graph, edge_tmp, ap_amt)
        ) cout<<"tak";
    else cout<<"nie";

}