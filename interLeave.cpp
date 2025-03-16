#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void print(queue<int> q){
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

void interLeave(queue<int> &q){
    int n = q.size();

    vector<int> first,second;


    for(int i = 1; i <= n/2; ++i){
        first.push_back(q.front());
        q.pop();
    }

    for(int i = 1; i <= n/2; ++i){
        second.push_back(q.front());
        q.pop();
    }

    for(int i = 0; i < n/2; ++i){
        q.push(first[i]);
        q.push(second[i]);
    }
}


int main(){
    queue<int> q;
    for(int i = 1; i <= 8; ++i){
        q.push(i);
    }

    print(q);


    interLeave(q);


    print(q);
}
