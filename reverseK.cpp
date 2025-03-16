#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;


void reverse(queue<int> &q,int k){
    stack<int> st;

    for(int i = 1; i <= k; ++i){
        st.push(q.front());
        q.pop();
    }

    vector<int> arr;
    while(!q.empty()){
        arr.push_back(q.front());
        q.pop();
    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    for(int i = 0; i < arr.size(); ++i){
        q.push(arr[i]);
    }
}

void print(queue<int> q){
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main(){
    queue<int> q;
    int i = 5;
    int k = 4;
    while(i <= 50){
        q.push(i);
        i += 5;
    }

    print(q);

    reverse(q,k);

    print(q);
    return 0;
}
