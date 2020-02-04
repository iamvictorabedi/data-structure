#include <iostream>
using namespace std;

class arr{
	private:
	int x[5], y[5], numberToSearch ,sum=0 ,average=0;
	
	public:
		void instert()
		{	cout<<"Enter 5 numbers\n";
			for(int i=0;i<5;i++)
			cin>>x[i];
		}
		
		void display()
		{	cout<<"The numbers are\n";
			for(int i=0;i<5;i++)
			cout<<x[i]<<endl;
		}
		
		int search(){
			cout<< "Enter the number you would like to search for \n";
			cin >> numberToSearch;
			for(int i=0;i<5;i++){
			if(x[i] == numberToSearch){
			cout<< "Found an exact match \n";
			return 0;	
		}else{
			cout<<"Not found!! \n";
		}}
		}
		
		int mydelete(){
			int key;
			cout<< "Enter the number you would like to delete \n";
			cin >> key;
			for(int i=0;i<5;i++){
			if(x[i] == key)
			{
				cout<< "Found \n";
							for(int i=0;i<5;i++)
							x[i] = x[i + 1];
							return 0;

		}
					cout << "Not Found!! \n";

	}

	}
	
	int binarySearch(){
		int mid , low = 0, high= 4, key;
		cout<< "Enter the number you would like to search for \n";
		cin >> key;
		mid = (low + high)/2;
		while(1){
			if(x[mid] == key)
			{
			cout<< "found \n";
			return 0;	
			}else if(low >high)
			{
			cout << "Not found!! \n";
			return 0;	
			}
			else{
				if(x[mid]< key)
				{
					low = mid +1;
				}else
				high = mid -1;
			}	
				}	
			
			
		}
		
		
		void sumAndAverage(){
			for(int i=0;i<5;i++){
				sum = sum + x[i];
		}
			cout<< "Sum = "<<sum<<"\n";
			cout<< "Average = "<< sum / 5<<"\n";
		}
		
		
		void sumOfEvenNumbers(){
		int even =0;
		for(int i=0;i<5;i++){
		if(x[i] % 2 == 0){
		even = even + x[i];
		}}
		cout<< "Sum of Even Numbers = "<<even<<"\n";
		}
		
		void getGreatest(){
			int greatest;
			cout<< "Enter threshold \n";
			cin>> greatest;
			cout<< "The greatest are: \n";
		for(int i=0;i<5;i++){
		if(x[i] >greatest )
		cout<<x[i]<<"\n";
		}
		}
		
		void orderedInsert(){
			int val, i, y;
			cout<< "Enter the number you would like to insert for ? \n";
			cin>> val;
			for(int i =0 , i<5; i++)
			{
				if(val>x[i])
				{
					break;
				}
			}
			for(int y= 5; y>i; y++)
			{
			x[y] = x[i-1];	
			}
			x[y] = val;
		}
	
};

int main()
{

arr arr1;
arr1.instert();
arr1.orderedInsert();
arr1.binarySearch();
arr1.mydelete();
arr1.display();
arr1.search();
arr1.sumAndAverage();
arr1.sumOfEvenNumbers();
arr1.getGreatest();
	
}
