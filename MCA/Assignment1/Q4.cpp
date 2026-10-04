#include<iostream>
using namespace std;
class Sorting{
	private:
		int arr[50];
		
	public:
		Sorting(int);
		void sortArray(int);
		void display(int no);
		~Sorting();
};

Sorting::Sorting(int no){
	cout <<endl<< "...Constructor Called..."<<endl; 
	cout << endl <<"--- Enter Values in The Array ---"<<endl<<endl; 
	for(int i=0; i<no; i++){
		cout<<"arr["<<i<<"] = ";
		cin>>arr[i];
	}
}

void Sorting::sortArray(int no){
	for (int i = 0; i < no - 1; i++) {
		int min = i;
        for (int j = i+1; j < no; j++) {
            if (arr[min] > arr[j])
            	min = j;		
        }
        if(min != i){
        	int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
		}
    }
}

void Sorting::display(int no){
	cout << endl << "--- Display Array ---"<<endl;
    for (int i = 0; i < no; i++) {
        cout << "arr["<<i<<"] = " << arr[i] << endl;
    }
    cout << endl;
}

Sorting::~Sorting(){
	cout << "Destructor Called..."<<endl;
}

int main(){
	int no;
	cout<<"Enter the Total no of values : ";
	cin>>no;
	Sorting obj(no);
	obj.sortArray(no);
	obj.display(no);	
	return 0;
}