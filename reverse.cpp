#include <iostream>
#include <queue>
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

int main(){
    queue<int> q;

    int i = 10;
    while(i <= 50){
        q.push(i);
        i += 10;
    }

    cout << "Before Reverse : " ;
    print(q);

    reverse(q);

    cout << "After Reverse : " ;
    print(q);
    return 0;
}
