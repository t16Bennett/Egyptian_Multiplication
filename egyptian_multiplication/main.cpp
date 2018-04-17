#include <vector>
#include <iostream>

using namespace std;

int main(){
    //declare variables
    vector<int> left;
    vector<int> right;
    int first = 0;
    int second = 0;
    int total = 0;
    
    //get first number
    cout << "What is the first multiplicand?" << endl;
    cin >> first;
    left.push_back(first);
    
    //get second number
    cout << "What is the second multiplicand?" << endl;
    cin >> second;
    cout << endl;
    right.push_back(second);
    
    //perform algorithm
    while(left.at(left.size()-1) != 1){
        left.push_back(left.at(left.size()-1)/2);
        right.push_back(right.at(right.size()-1)*2);
    }
    
    //calculate product
    for(int i = 0; i < left.size(); i++){
        if(left.at(i) % 2 != 0){
            total = total + right.at(i);
        }
        cout << left.at(i) << " " << right.at(i) << endl;
    }
    
    //Display product
    cout << "Product: " << total << endl;
    
    return 0;
}