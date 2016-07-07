#include <iostream>

using namespace std;


int main(){
    
    string numberGuessed;
    int intNumberGuessed = 0;
    
    do {
        cout << "Guess between 1 and 10: ";
        
        // Allows for user input
        // Pass the source and destination of the input
        getline (cin,numberGuessed);
        
        // stoi converts the string into an integer
        intNumberGuessed = stoi(numberGuessed);
        cout << intNumberGuessed << endl;
        
        // We'll continue looping until the number entered is 4
    } while (intNumberGuessed != 4);
    
    
    return 0;
}