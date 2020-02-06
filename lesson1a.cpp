#include <iostream>
using namespace std;


class myStack {
	private:
	int top;
	int x[3];
	
	public:
		myStack(){
			top = 0;
		}
		//insert for pushing
		void pushing(int a){
		
			x[++top]= a;

		}
		
			//insert for pushing
		void peek(){
			cout<<x[top];
		}
		
		//insert for pushing
		void pop(){
			top--;
		}
};
int main() {
myStack obj1;
int s, n;
cout<< "Enter a numbers\n";
for(n =0; n < 3; n++){
	cin>> s;
	obj1.pushing(s);
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


return 0;

}
