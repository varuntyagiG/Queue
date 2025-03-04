#include <iostream>
#include <queue>
using namespace std;

// print queue
void print(queue<int> q){
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
  queue<int> q;

  int i = 1;
  while (i <= 5) {
      q.push(i);
      i += 1;
  }

  cout << "Before Pop : " << endl;
  print(q);
  cout << "Front Element : " << q.front() << endl;
  cout << "Back Element : " << q.back() << endl;
  cout << "Size of Queue : " << q.size() << endl;

  q.pop();
  q.pop();
  cout << endl;


  cout << "After Pop : " << endl;
  print(q);
  cout << "Front Element : " << q.front() << endl;
  cout << "Back Element : " << q.back() << endl;


  cout << "Size of Queue : " << q.size() << endl;
  if(q.empty()){
      cout << "Queue is Empty " << endl;
  }else{
      cout << "Queue is'nt Empty" << endl;
  }


  return 0;
}
