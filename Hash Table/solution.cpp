#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Node{
public:
    string key;  
    int val ;    
    Node* next; 

    Node(string key , int val){
        this->key = key ;
        this->val = val;
        next = NULL;
    }

    ~Node(){
        if(next != NULL){
            delete next;
        }
    }
};
class HashTable{
    int size;
    int currSize; // for rehashing
    Node** table;

    int hashFunction(string key){
        // find ASCII value of string then add that ascii value find module 
        // It will be the index
        //(str[i] * str[i] +....)% total size
        int idx =0 ;
        for(int i =0 ; i < key.size() ;i++){
            idx += (key[i] *key[i]) % size;
        }
        return idx % size;

    }

    void reHash(){ // O(n)
        Node** oldTable = table;
        int oldSize = size;
        size = 2* size;
        currSize = 0;
        table = new Node* [size];

        for (int i =0 ;i <size ; i++){
            table[i]=nullptr;
        }

        for(int i =0 ; i< oldSize ;i++){
            Node* temp = oldTable[i];
            while(temp != nullptr){
                insert(temp->key , temp->val);
                temp = temp->next;
            }
        
        if(oldTable[i] != NULL){
            delete oldTable[i];
        }
        }
        delete oldTable;
    }
public:
// store size of an array. "Module"
    
    HashTable(int size){
        this->size = size;
        currSize =0;
        table = new Node*[size];

        for(int i =0 ; i < size ; i++){
            table[i] =nullptr;
        }
        
    }

    void insert(string key , int val){ //O(1)
        //Rehashing occur when the data size is greater than table size in that case increase the size of tble to accamodate maximum element.
        int idx = hashFunction(key); // step 1: we got index 
        Node* newNode = new Node(key , val);
      

        newNode->next = table[idx];
        table[idx]= newNode;
        currSize++;
        
        double lambda = currSize / size;
        if(lambda >1){
            reHash(); // worst case O(n)
        }
    }

    bool exist(string key){
        int idx = hashFunction(key);

        Node* temp = table[idx];
        while(temp != NULL){
            if(temp->key == key){
                return true;
            }
            temp = temp->next;
        }
        return false;

    }

    int search(string key){
        int idx = hashFunction(key);
        Node* temp = table[idx];

        while(temp != nullptr){
            if(temp->key == key){
                return temp->val;
            }
            temp = temp->next;
        }
        return -1;

    }

    void remove(string key){
        int idx = hashFunction(key);
        Node* temp = table[idx];
        Node* prev = temp;

        while(temp != NULL){
            if(temp ->key== key){
                if(prev == temp){
                    table[idx] = temp->next;

                }else{
                    prev->next = temp->next;
                }
                break;

            }
            prev = temp;
            temp = temp->next; 
        }

    }

    void print(){
        for(int i =0 ; i< size ; i++){
            cout<<"Idx "<< i <<"-> ";
            Node* temp = table[i];

            while(temp != NULL){
                cout<<temp->key <<" ,"<<temp->val<<endl;
                temp = temp->next;
            }
        }
    }



};


int main(){
    HashTable ht(6);
    ht.insert("India" , 150);
    ht.insert("china" , 150);
    ht.insert("US" , 130);
    ht.insert("UK" , 100);
    ht.insert("Nepal" , 10);
    ht.insert("Canada" , 20);

    if(ht.exist("china")){
        cout<<"Population of China is :"<<ht.search("china")<<endl;

    }
    ht.remove("china");
    ht.remove("Nepal");
    ht.print();
   
    return 0;
}
