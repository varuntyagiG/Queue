#include <deque>
#include <iostream>
#include <queue>
#include <stack>
#include <utility>
using namespace std;

void print(queue<int> q){
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

void reverse(queue<int>& q){
    if(q.empty()){
        return;
    }

    int temp = q.front();
    q.pop();
    reverse(q);

    // B.T
    q.push(temp);
}

void reverse2(queue<int> &q){
    stack<int> st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
}

void reverse3(deque<int> &dq){
    // int i = 0;
    // int j = dq.size() - 1;
    // while(i < j){
    //     swap(dq[i++],dq[j--]);
    // }


    stack<int> st;
    for(int i = 0; i < dq.size(); ++i){
        st.push(dq[i]);
    }

    dq.clear();


    while(!st.empty()){
        dq.push_back(st.top());
        st.pop();
    }
}

int main(){
    // queue<int> q;

    // int i = 10;
    // while(i <= 50){
    //     q.push(i);
    //     i += 10;
    // }

    // cout << "Before Reverse : " ;
    // print(q);

    // reverse2(q);

    // cout << "After Reverse : " ;
    // print(q);


    deque<int> dq;
    for(int i = 10; i <= 50; i+=10){
        dq.push_back(i);
    }

    for(int i = 0; i < dq.size(); ++i){
        cout << dq[i] << " ";
    }
    cout << endl;

    reverse3(dq);

    for(int i = 0; i < dq.size(); ++i){
        cout << dq[i] << " ";
    }
    cout << endl;
    return 0;
}
