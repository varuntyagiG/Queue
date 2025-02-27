#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue<int> q;

  for(int i = 10; i <= 100; i+=10){
      q.push(i);
  }

  cout << "Queue Size : " << q.size() << endl;

  // cout << "Printing Queue : " << endl;
  // while(!q.empty()){
  //     cout << q.front() << " ";
  //     q.pop();
  // } cout << endl;


  // // Removal of 10
  q.pop();
  q.pop();

  cout << "Queue size after removal : " << q.size() << endl;

  if(q.empty()){
      cout << "Queue is Empty " << endl;
  }else{
      cout << "Queue is not empty " << endl;
  }

  cout << "Front element is : " << q.front() << endl;
  cout << "Back element is : " <<  q.back() << endl;
  return 0;
}
