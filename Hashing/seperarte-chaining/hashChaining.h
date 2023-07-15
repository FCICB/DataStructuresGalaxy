
#ifndef DS_IMPLEMENTATION_HASHCHAINING_H
#define DS_IMPLEMENTATION_HASHCHAINING_H
#include <list>
#include <vector>
using namespace std;
class hashChaining {
private:
    int capacity; //capacity of hash table
    vector<list<int>>table; // hash table as a vector of ll

    // hash to calc the index
    int hashFunction(int key);

public:
    //constructor
    hashChaining(int size);

    // func to insert a key into the hash table
    void insert(int key);

    //func to search for a key in the hash table
    bool search(int key);

    //func to remove a key from hash table
    void remove(int key);

    //func to display the contents of the hash table
    void display();

};


#endif //DS_IMPLEMENTATION_HASHCHAINING_H
