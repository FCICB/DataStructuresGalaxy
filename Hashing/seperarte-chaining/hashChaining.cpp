#include "hashChaining.h"
#include "bits/stdc++.h"
using namespace std;
//constructor
hashChaining::hashChaining(int size) {
    capacity=size;
    table.resize(capacity);
}
//hash func to calculate the index
int hashChaining::hashFunction(int key) {
    return key%capacity;
}
//func to insert a key into the hash table
void hashChaining::insert(int key) {
    int index= hashFunction(key);

    //insert the key into the ll at the calculated index
    table[index].push_back(key);
}
// func to search for a key in the hash table
bool hashChaining::search(int key) {
    int index= hashFunction(key);

    //search for the key in the ll at the calculated index
    for(int element:table[index]){
        if(element==key){
            return true; //key found
        }
    }
    return false; //key not found
}
//func to to remove a key from the hash table
void hashChaining::remove(int key) {
    int index= hashFunction(key);

    //search for the key in the ll at the calc index
    list<int>&linkedList=table[index];
    for(auto it=linkedList.begin(); it!=linkedList.end();++it){
        if(*it==key){
            linkedList.erase(it); // remove the key from the ll
            break;
        }
    }
}
//func to display the content of the hash table
void hashChaining::display() {
    for (int i = 0; i < capacity; ++i) {
        cout<<"Index "<<i<<": ";
        for (int element:table[i]) {
            cout<<element<<" ";
        }
        cout<<endl;
    }
}
int main(){
    hashChaining hashTable(10);

    hashTable.insert(5);
    hashTable.insert(15);
    hashTable.insert(25);
    hashTable.insert(35);

    cout<<"============ Hash Table Content ============\n";
    hashTable.display();
    // Output:
    // Index 0:
    // Index 1:
    // Index 2:
    // Index 3:
    // Index 4: 25
    // Index 5: 5 15 35
    // Index 6:
    // Index 7:
    // Index 8:
    // Index 9:

    std::cout << "Is 15 present? " << (hashTable.search(15) ? "Yes" : "No") << std::endl;  // Output: Yes

    hashTable.remove(15);

    std::cout << "Is 15 present? " << (hashTable.search(15) ? "Yes" : "No") << std::endl;  // Output: No

}
