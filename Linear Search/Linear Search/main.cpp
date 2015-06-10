////////////////////////
//Name: Kathleen Levi
//
//Project: EX05_01 (12.2)
//
//Date: 09 June 2105
////////////////////////

#include <iostream>
#include <string>
using namespace std;

template<typename T>
int linearSearch (const T list[], T key, int arraySize)
{
    for (int i = 0; i < arraySize; i ++)
    {
        if (key == list[i])
            return i;
    }
    return -1;
}

int main (){
    
    int list1[] = {1, 2, 3, 4, 5, 6};
    cout << "linearSearch<int>(list1, 3, 6): " << linearSearch<int>(list1, 3, 6) << endl;
    
    double list2[] = {0.6, 2.3, 1.1, 4.5, 6.3, 8.9, 12.7, 13.9};
    cout << "linearSearch<double>(list2, 12.7, 8): " << linearSearch<double>(list2, 12.7, 8) << endl;
    
    string list3[] = {"George", "Kathy", "Mark", "Pie", "Doug"};
    cout << "linearSearch<string>(list3, \"Doug\", 5): " << linearSearch<string>(list3, "Doug", 5) << endl;
    
}