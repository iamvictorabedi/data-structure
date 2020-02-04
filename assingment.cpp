#include <iostream>
using namespace std;

class arr{
	private:
	int x[5], numberToSearch ,sum=0 ,average=0;
	
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
		
		void search(){
			cout<< "Enter the number you would like to search for \n";
			cin >> numberToSearch;
			for(int i=0;i<5;i++){
			if(numberToSearch == x[i]){
			cout<< "Found an exact match \n";
			break;	
		}}
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
		
};

int main()
{

arr arr1;
arr1.instert();
arr1.display();
arr1.search();
arr1.sumAndAverage();
arr1.sumOfEvenNumbers();
arr1.getGreatest();
	
}
