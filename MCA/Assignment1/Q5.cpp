#include <iostream>
using namespace std;

class Check {
	private:
    	int arr[50];
    	char answer;

	public:
    	Check(int);
    	void arrayCheck(int);
    	void display();
    	~Check();
};

Check::Check(int no) {
    cout <<endl<< "...Constructor Called..."<<endl; 
	cout << endl <<"--- Enter Values in The Array ---"<<endl<<endl; 
	for(int i=0; i<no; i++){
		cout<<"arr["<<i<<"] = ";
		cin>>arr[i];
	}
}

void Check::arrayCheck(int n) {
    if (n <= 0) {
        answer = 'C';
        return;
    }
    if (n == 1) {
        answer = 'D';
        return;
    }

    int Ascending = 1;
    int Descending = 1;
    int Equal = 1;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            Descending = 0;
            Equal = 0;
        } else if (arr[i] > arr[i + 1]) {
            Ascending = 0;
            Equal = 0;
        }
    }

    if (Equal) {
        answer = 'D';
    } else if (Ascending) {
        answer = 'A';
    } else if (Descending) {
        answer = 'B';
    } else {
        answer = 'C';
    }
}

void Check::display() {
    cout <<endl<< "--- Result ---"<<endl;
    if (answer == 'A') {
    	cout << "Answer = A : Array is in Ascending Order" << endl;
	} else if (answer == 'B') {
    	cout << "Answer = B : Array is in Descending Order" << endl;
	} else if (answer == 'C') {
    	cout << "Answer = C : Array is in No Order" << endl;
	} else if (answer == 'D') {
    	cout << "Answer = D : All elements are equal" << endl;
	} else {
    	cout << "Status undetermined." << endl;
	}
    cout << endl;
}

Check::~Check() {
    cout << "...Destructor Called..."<<endl;
}

int main() {
    int no;
    cout << "Enter the total number of elements (1 to 50): ";
    cin >> no;
    Check obj(no);
    obj.arrayCheck(no);
    obj.display();

    return 0;
}