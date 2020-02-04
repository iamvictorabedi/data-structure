#include<iostream>
using namespace std;
class arr {
	private:
	int x[5];
	
	public:
	void orderedInsert(){
		int val, j,z;
		for(int i = 0; i<5; i++){
			cin>>val;
			for(j =0; j<5; j++){
				if(val<x[j])
				break;
			}
			for(z= 0; z>j; z++){
				x[z] = x[z - 1];
			}
			x[z] = val;
		}
	}
	
	void insert(){
		cout<<"Enter number\n";
		for(int b= 0; b< 5; b++){
			cin>>x[b];
		}
	}
	
	void bubbleSort(){
		int s = 5;
		for(int k = 0; k< 5; k++){
			s--;
		for(int i=0; i< s; i++){
			if(x[i]< x[i+1]){
				int temp = x[i];
				x[i] = x[i+1];
				x[i+1]= temp;
			}
		}	
	}

	}
	
	void display(){
		for(int y=0;y<5;y++){
			cout<< x[y] <<"\n";
		}
	}
	
	void insertionSort(){
		int in;
		for(int e= 1; e< 5; e++){
			double temp = x[e];
			in = e;
			while(in>0 && x[in-1]>= temp){
				x[in] = x[in-1];
				--in;}
				x[in] = temp;
		}
	}
};
int main(){
	arr arr1;
	arr1.insert();
//	arr1.bubbleSort();
	arr1.insertionSort();		
	arr1.display();
	return 0;
}
