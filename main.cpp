#include <iostream>
using namespace std;


class myStack {
	private:
	int top;
	int x[5];
	
	public:
		myStack(){
			top = 0;
		}
		//insert for pushing
		void pushing(int a){
			x[++top]= a;
		}
		
			//insert for pushing
		void pop(){
			cout<<x[top];
		}
		
		//insert for pushing
		void peek(){
			top--;
		}
};
int main() {
myStack obj1;
int x, n;
cout<< "Enter a numbers\n";
for(n =0; n < 3; n++){
	cin>> x;
	obj1.pushing(x);
}

obj1.peek();
cout<<endl;
obj1.pop();

obj1.peek();
cout<<endl;
obj1.pop();
obj1.peek();
cout<<endl;
obj1.pop();


return 1;

}
