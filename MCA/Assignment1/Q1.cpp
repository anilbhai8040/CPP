#include<iostream>
using namespace std;
class Maximum{
	private:
		int arr[100];
		
	public:
		Maximum(int);
		int maxValue(int);
		~Maximum();
};

Maximum::Maximum(int no){
	cout <<endl<< "...Constructor Called..."<<endl; 
	cout << endl <<"--- Enter Values in The Array ---"<<endl<<endl; 
	for(int i=0; i<no; i++){
		cout<<"arr["<<i<<"] = ";
		cin>>arr[i];
	}
}

int Maximum::maxValue(int no){
	int max = arr[0];
	for(int i=1; i<no; i++){
		if(max < arr[i])
			max = arr[i];
	}
	return max;
}

Maximum::~Maximum(){
	cout << "Destructor Called..."<<endl;
}

int main(){
	int no;
	
	cout<<"Enter the Total no of values : ";
	cin>>no;
	Maximum obj(no);
	cout<<endl<<"Max value is : "<<obj.maxValue(no)<<endl<<endl;
	
	return 0;
}