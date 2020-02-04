#include <iostream>
using namespace std;

class arr{
	private:
	int x[5];
	
	public:
		void instert()
		{	cout<<"Enter 5 numbers";
			for(int i=0;i<5;i++)
			cin>>x[i];
		}
			void orderedInsert(){
		int val, j,z;
		cout<< "Enter numbers \n";
		for(int i = 0; i<5; i++){
			cin>>val;
			for(j =0; j<5; j++){
				if(val<x[j])//correct position
				break;
			}
			for(z= 0; z>j; z++){
				x[z] = x[z - 1];
			}
			x[z] = val;
		}
	}
		
		void display()
		{	cout<<"The numbers are";
			for(int i=0;i<5;i++)
			cout<<x[i]<<endl;
		}
};

int main()
{

arr arr1;
arr1.instert();
arr1.orderedInsert();
arr1.display();
	
}
