//
//  main.cpp
//  test_random_number
//
//  Created by ryan johnson on 1/13/26.
//

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>


using std::cout;
using std::cin;
using std::endl;
using std::rand;
using std::srand;
using std::time;

using std::string;

int main() {
    
    // first get the time
    // the nullptr will pass an empty pointer in the time function to get the time in seconds from a date to use as a seed
//    int my_time = time_t(nullptr);
//    
//    // now to put that time number into the seed
//    srand(my_time);
    
    string start_button;
//    string end_button = "end";
    // now to create a die roll
    cout << "Type start in lowercase to roll 3 die or type end in lowercase to stop program" << endl;
    cin >> start_button;
    
    if (start_button == "start")
    {
        int my_time = time(nullptr);
        
        // now to put that time number into the seed
        srand(my_time);
        int die1 = rand() % 6;
        die1+=1;
        cout << "the first die roll was " << die1 << endl;
        
        int die2 = rand() % 6;
        die2 = die2 + 1;
        cout << "the second die roll was " << die2 << endl;
        
        int die3 = rand() % 6;
        die3+=1;
        cout << "the third die roll was " << die3 << endl;
        
        cout << "all three were " << die1 << " " << die2 << " " << die3 << endl;
    }
    else if (start_button == "end")
    {
        cout << "the program has ended " << endl;
    }
    
    
    
//    int die1 = rand() % 6;
//    die1+=1;
//    cout << "the first die roll was " << die1 << endl;
//    
//    int die2 = rand() % 6;
//    die2 = die2 + 1;
//    cout << "the second die roll was " << die2 << endl;
//    
//    int die3 = rand() % 6;
//    die3+=1;
//    cout << "the third die roll was " << die3 << endl;
    
    
    
    
    
    
    
    return 0;
}
