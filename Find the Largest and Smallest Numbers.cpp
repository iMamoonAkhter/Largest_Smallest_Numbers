#include <iostream>
using namespace std;
int main() {
    int a, smallest, largest;
    cout << "Enter a number: ";
    cin >> a;
    smallest = largest = a;
    while (a != 0) {
        cout << "Enter another number: ";
        cin >> a;
        if(a==0){
        	break;
		}
		else{
        	smallest = min(smallest, a);
        	largest = max(largest, a);
    	}
    }
    if (smallest == largest) {
        cout << "They are equal numbers";
    } else {
        cout << "The largest number is: " << largest << endl
             << "The smallest number is: " << smallest;
    }
    return 0;
}

