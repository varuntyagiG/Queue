#include <deque>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
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
    vector<int> arr;
    while(!q.empty()){
        arr.push_back(q.front());
        q.pop();
    }

    int i = 0;
    int j = arr.size() - 1;
    while(i < j){
        swap(arr[i++],arr[j--]);
    }

    for(int z = 0; z < arr.size(); ++z){
        q.push(arr[z]);
    }
}

void reverse3(deque<int> &dq){
    int i = 0;
    int j = dq.size() - 1;
    while(i < j){
        swap(dq[i++],dq[j--]);
    }


    // stack<int> st;
    // for(int i = 0; i < dq.size(); ++i){
    //     st.push(dq[i]);
    // }

    // dq.clear();


    // while(!st.empty()){
    //     dq.push_back(st.top());
    //     st.pop();
    // }
}

// void print(deque<int> dq){
//     for(int i = 0; i < dq.size(); ++i){
//         cout << dq[i] << " ";
//     }
//     cout << endl;
// }

int main(){
    queue<int> q;

    int i = 10;
    while(i <= 50){
        q.push(i);
        i += 10;
    }

    cout << "Before Reverse : " ;
    print(q);

    reverse2(q);

    cout << "After Reverse : " ;
    print(q);


    // deque<int> dq;
    // for(int i = 10; i <= 50; i+=10){
    //     dq.push_back(i);
    // }

    // cout << "Before Reverse : " << endl;
    // print(dq);

    // reverse3(dq);

    // cout << "After Reverse : " << endl;
    // print(dq);
    return 0;
}
