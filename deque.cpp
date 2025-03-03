#include <iostream>
#include <deque>
using namespace std;

void  print(deque<int> dq){
    while(!dq.empty()){
        cout << dq.front() << " ";
        dq.pop_front();
    }
    cout << endl;
}

int main(){
    deque<int> dq;

    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(30);
    dq.push_back(40);
    dq.push_back(50);
    dq.push_back(60);

    print(dq);

    cout << dq.front() << endl;
    cout << dq.back() << endl;
    cout << dq.size() << endl;
    cout << dq.empty() << endl;



    return 0;
}
