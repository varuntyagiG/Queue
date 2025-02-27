#include <iostream>
using namespace std;

class Queue {
public:
  int *arr;
  int size;
  int front;
  int rear;

  Queue(int size) {
    this->size = size;
    this->front = 0;
    this->rear = 0;
    arr = new int[size];
  }

  // function
  void push(int data) {
    if (rear >= size) {
      cout << "Queue is full " << endl;
      return;
    }

    arr[rear] = data;
    rear += 1;
  }

  void pop() {
    if (front == rear) {
      cout << "Queue is empty " << endl;
      return;
    }

    front += 1;
    if (front == rear) {
      front = 0;
      rear = 0;
      return;
    }
  }

  bool isEmpty() {
    if (front == rear) {
      return 1;
    } else {
      return 0;
    }
  }

  int Tsize() { return rear - front; }

  // front Element
  int getFront(){
      if(front != rear){
          return arr[front];
      }else{
          return -1;
      }
  }

  // Back Element
  int BackElement(){
      if(front != rear){
          return arr[rear -1];
      }else{
          return -1;
      }
  }
};

int main() {
  Queue *Q1 = new Queue(5);
  Q1->push(100);
  Q1->push(150);
  Q1->push(200);
  Q1->push(250);

  cout << "Size of Queue is : " << Q1->Tsize() << endl;
  cout << "Is Empty ? : " << Q1->isEmpty() << endl;

  Q1->pop();
  cout << "After Size of Queue is : " << Q1->Tsize() << endl;


  cout << "Front Element : " << Q1->getFront() << endl;
  cout << "Back Element : " << Q1->BackElement() << endl;
  return 0;
}
