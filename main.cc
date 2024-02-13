/*
 * INSTRUCTION:
 *     This is a C++ starting code for hw 0_1.
 */

// Finish the head comment with Abstract, Name, and Date.
/*
 * Title: main_hw0_1.cc
 * Abstract: Write the main purpose of the program.
 * Name: Write your name
 * Date: MM/DD/YYYY
 */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Your code should be here.
    // The following is a just sample statement.
    // cout << "Hello world!" << endl;

    int size1;
    vector <int> vec;

    cin >> size1;

    for(int i = 0; i < size1; i++){
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }

    int size2;
    vector <int> vec2;

    cin >> size2;

    for(int i = 0 ; i < size2; i++){
        int temp;
        cin >> temp;
        vec2.push_back(temp);
    }

    for(int i = 0; i < size1; i++){
        cout << vec[i] << " ";
    }

    cout << endl;

    for(int i = 0; i < size2; i++){
        cout << vec2[i] << " ";
    }

    cout << endl;

    cout << "Answer:20 15 14 -7" << endl;
    return 0;
}
