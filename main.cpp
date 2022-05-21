// Started at 11:45 5-21-2022

// Section 12
// Returning Pointers
#include <iostream>

using namespace std;

int *create_array(size_t size, int init_value = 0) {
    int *new_storage {nullptr};
    new_storage = new int[size];
    for(size_t i{0}; i < size; ++i)
        *(new_storage + i) = init_value;
    return new_storage;
}

void display(const int *const array, size_t size) {
    for (size_t i{0}; i < size; ++i)
        cout << array[i] << " ";
    cout << endl;
}
int main() {
    int *my_array {nullptr};
    size_t size;
    int init_value {};
    
    cout << "\nHow many integers would you like to allocate? ";
    cin >> size;
    cout << "What value would you like them to be initialized to? ";
    cin >> init_value;
    
    my_array = create_array(size, init_value);
    cout << "\n------------------------------------" << endl;
    
    display(my_array, size);
    delete [] my_array;
    return 0;
}


// Section 12
// References

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    int num {100};
    int &ref {num};
    
    cout << num << endl;
    cout << ref << endl;
    
    num = 200;
    cout << "\n----------------------------" << endl;
    cout << num << endl;
    cout << ref << endl; 
    
    ref = 300;
    cout << "\n----------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;
    
    cout << "\n----------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};
    
    for(auto str: stooges) 
        str = "Funny";
    
    for (auto str: stooges)
        cout << str << endl;
        
    cout << "\n----------------------------" << endl;
    for(auto &str: stooges)
        str = "Funny";
        
    for(auto const &str: stooges) 
        cout << str << endl;
    
    return 0;
}


// Ended at 1:52 5-21-2022
