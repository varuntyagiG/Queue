#include <functional>
#include <iostream>
#include <utility>
using namespace std;

class cicularQueue {
public:
  int *arr;
  int front;
  int rear;
  int size;

  cicularQueue(int size) {
    this->size = size;
    this->front = -1;
    this->rear = -1;
    arr = new int[size];
  }

  void push(int data) {
    if ((front == 0 && rear == size - 1) || rear - front == -1) {
      cout << "Queue is full" << endl;
    } else if (front == -1 && rear == -1) {
      front++;
      rear++;
      arr[rear] = data;
    } else if (rear == size - 1 && front != 0) {
      rear = 0;
      arr[rear] = data;
    } else {
      rear++;
      arr[rear] = data;
    }
  }

  void pop(){
      // empty check
      if((front - rear == 1) || (front == -1 && rear == -1)){
          cout << "Q is empty" << endl;
          return;
      }


      // single element
      if((front == rear) && (front != -1)){
          arr[front] = -1;
          front = rear = -1;
          return;
      }
      // circular in nature
      if(front == size -1 ){
          front = 0;
      }

      // normal flow
      arr[front] = -1;
      front++;
  }
};

int main() {
  cout << "Hello-World" << endl;
  return 0;
}
