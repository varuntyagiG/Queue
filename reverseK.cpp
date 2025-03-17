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

    // stack<int> st;

    // for(int i = 1; i <= k; ++i){
    //     st.push(q.front());
    //     q.pop();
    // }

    // Use Vector in the place of Stack
    vector<int> sk;
    for(int i = 1; i <= k; ++i){
        sk.push_back(q.front());
        q.pop();
    }

    vector<int> arr;
    while(!q.empty()){
        arr.push_back(q.front());
        q.pop();
    }

    // reverse the array
    reverse(sk.begin(),sk.end());
    for(int i = 0; i < sk.size(); ++i){
        q.push(sk[i]);
    }

    for(int i = 0; i < arr.size(); ++i){
        q.push(arr[i]);
    }

    arr.clear();
    sk.clear();
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
    int k = 9;
    for(int i = 5; i <= 50; i+=5){
        q.push(i);
    }

    cout << "Before Reverse : ";
    print(q);

    reverse(q,k);


    cout << "After Reverse first k elements: ";
    print(q);
    return 0;
}
