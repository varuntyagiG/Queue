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

int main() {
  queue<int> q;

  int i = 10;
  while (i <= 100) {
    q.push(i);
    i += 10;
  }

  cout << "Before pop : " << endl;
  print(q);

  // pop element from other end
  // q.pop();
  // q.pop();


  // Removing Element
  q.pop();
  q.pop();

  cout << "After pop : " << endl;
  print(q);

  cout << q.front() << endl;
  cout << q.back() << endl;

  if(q.empty()){
      cout << "Queue is Empty " << endl;
  }else{
      cout << "Queue is not Empty " << endl;
  }

  return 0;
}
