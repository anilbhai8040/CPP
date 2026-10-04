#include<iostream>
using namespace std;
class Minimum{
	private:
		int arr[100];
		
	public:
		Minimum(int);
		int minValue(int);
		~Minimum();
};

Minimum::Minimum(int no){
	cout <<endl<< "...Constructor Called..."<<endl; 
	cout << endl <<"--- Enter Values in The Array ---"<<endl<<endl; 
	for(int i=0; i<no; i++){
		cout<<"arr["<<i<<"] = ";
		cin>>arr[i];
	}
}

int Minimum::minValue(int no){
	int min = arr[0];
	for(int i=1; i<no; i++){
		if(min > arr[i])
			min = arr[i];
	}
	return min;
}

Minimum::~Minimum(){
	cout << "Destructor Called..."<<endl;
}

int main(){
	int no;
	
	cout<<"Enter the Total no of values : ";
	cin>>no;
	Minimum obj(no);
	cout<<endl<<"Min value is : "<<obj.minValue(no)<<endl<<endl;
	
	return 0;
}