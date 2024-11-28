#include <iostream>
#include <map>
#include "MyMap.h"
using namespace std;

int main()
{
        map<int, string> myMap;
        myMap[1] = "One";
        myMap[2] = "Two";
        myMap[3] = "Three";
        myMap[4] = "Four";
        myMap[5] = "Five";


        map<int, string>::iterator it;
        cout << "Here is the map : {" << endl;


        for (it = myMap.begin(); it != myMap.end(); ++it) {
                cout << " {" << it->first << ", " << it->second
                        << "} " << endl;
        }
        cout << '}' << endl;
        cout << "One full iteration complete.";

        return 0;
}