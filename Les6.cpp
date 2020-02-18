#include <iostream>
using namespace std;

//Queue imp on Lesson 6
class queue {
	private:
	int arr[5];
	int rear, front, deletedValue;
	
	public:
		queue(){
			front = 0;
			rear = 0;
		}
		void enqueue(int x){
			arr[rear++] = x;
			if(rear>4){
				rear=0;
			}
		}
		int dequeue(){
		 deletedValue = arr[front++];
			if(front>4){
			front=0;
			}
			return deletedValue;
			
		}
		void peek(){
			cout<< "the front has ........"<< arr[front]<<endl;
			
		}
};

int main() {
	queue q;
	q.enqueue(40);
	q.enqueue(20);
	q.enqueue(10);
	q.peek();
	cout << "Deleted value......."<<q.dequeue()<<endl;
	q.peek();
	
	return 0;
}
