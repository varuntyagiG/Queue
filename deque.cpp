#include <iostream>
#include <deque>
using namespace std;

void print(deque<int> dq){
    while(!dq.empty()){
        cout << dq.front() << " ";
        dq.pop_front();
    }
    cout << endl;
}

int main(){
    deque<int> dq;

    int i = 5;
    while(i <= 50){
        dq.push_back(i);
        i += 5;
    }

    print(dq);

    cout << "Before pop " << endl;
    cout << "Front Element : " << dq.front() << endl;
    cout << "Back Element : " << dq.back() << endl;
    cout << "Deque Size : " << dq.size() << endl;


    if(dq.empty()){
        cout << "Deque is empty" << endl;
    }else{
        cout << "Deque is'nt empty" << endl;
    }

    return 0;
}
