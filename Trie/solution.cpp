#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

class Node{
public:
    unordered_map<char, Node*> children;
    bool endOfWord;

    Node(){
        endOfWord = false;
    }
};

class Trie{
public:
    Node* root;

    Trie(){
        root = new Node();
    }

    void insert(string key){
        Node* temp = root;

        for(int i=0;i<key.size();i++){
            if(temp->children.count(key[i])==0){
                temp->children[key[i]] = new Node();
            }
            temp = temp->children[key[i]];
        }

        temp->endOfWord = true;
    }

    bool search(string key){
        Node* temp = root;

        for(int i=0;i<key.size();i++){
            if(temp->children.count(key[i])==0){
                return false;
            }
            temp = temp->children[key[i]];
        }

        return temp->endOfWord;
    }

    bool deleteWord(Node* node, string key, int depth){

        if(node == NULL)
        return false;

        if(depth == key.size()){
            if(node->endOfWord)
            node->endOfWord = false;

            return node->children.empty();
        }

        char ch = key[depth];

        if(node->children.count(ch)){
            bool shouldDelete = deleteWord(node->children[ch], key, depth+1);

            if(shouldDelete){
                delete node->children[ch];
                node->children.erase(ch);

                return node->children.empty() && !node->endOfWord;
            }
        }

        return false;
    }

    void remove(string key){
        deleteWord(root, key, 0);
    }

    void printPrefix(Node* node, string word){

        if(node->endOfWord){
            cout<<word<<endl;
        }

        for(pair<const char, Node*> child : node->children){
            printPrefix(child.second, word + child.first);
        }
    }

    void prefixSearch(string prefix){

        Node* temp = root;

        for(int i=0;i<prefix.size();i++){
            if(temp->children.count(prefix[i])==0){
                cout<<"No words with this prefix\n";
                return;
            }
            temp = temp->children[prefix[i]];
        }

        printPrefix(temp, prefix);
    }
};

int main(){

    Trie trie;
    int choice;

    do{
        cout<<"\nMenu\n";
        cout<<"1. Insert word\n";
        cout<<"2. Search word\n";
        cout<<"3. Delete word\n";
        cout<<"4. Prefix search\n";
        cout<<"5. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice){

            case 1:{
                int n;
                cout<<"Enter number of words: ";
                cin>>n;

                string word;

                for(int i=0;i<n;i++){
                    cout<<"Enter word "<<i+1<<": ";
                    cin>>word;
                    trie.insert(word);
                }
                break;
            }

            case 2:{
                string word;
                cout<<"Enter word to search: ";
                cin>>word;

                if(trie.search(word))
                cout<<"Word found\n";
                else
                cout<<"Word not found\n";

                break;
            }

            case 3:{
                string word;
                cout<<"Enter word to delete: ";
                cin>>word;

                trie.remove(word);
                cout<<"Word deleted (if it existed)\n";
                break;
            }

            case 4:{
                string prefix;
                cout<<"Enter prefix: ";
                cin>>prefix;

                cout<<"Words with prefix "<<prefix<<":\n";
                trie.prefixSearch(prefix);
                break;
            }

            case 5:
            cout<<"Program exited\n";
            break;

            default:
            cout<<"Invalid choice\n";
        }

    }while(choice!=5);

    return 0;
}
