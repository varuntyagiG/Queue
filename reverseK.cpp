#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;


void reverse(queue<int> &q,int k){
    if(k < 0 or k > q.size()){
        cout << "Invalid Value of K can't Reverse : " << endl;
        return;
    }

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

    arr.clear();
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
    int k = -3;
    for(int i = 5; i <= 50; i+=5){
        q.push(i);
    }

    print(q);

    reverse(q,k);

    print(q);
    return 0;
}
