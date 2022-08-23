#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
class linklist{
    private:
    node *head;
    node *tail;
    public:
    linklist(){
        head = NULL;
        tail = NULL;
    }
    void insertNode(int n){
        node * ptr = new node;
        ptr -> data = n;
        ptr -> next = NULL;
        if (head == NULL){
            head = ptr;
        }
        else{
            node *nodeptr;
            nodeptr = head;
            while (nodeptr -> next  != tail){
                nodeptr = nodeptr -> next;
            }
            nodeptr -> next = ptr;
        }
    }
    void display(){
        if(head == NULL){
            cout<<"Linklist is empty"<<endl;
        }
        else{
            node * i = head;
            while(i!= tail){
                cout<< i -> data<<"\t";
                i = i->next;
            }
        }
    }
    void search(int n){
        bool found = false;
        node *ptr = head;
        while(ptr != NULL){
            if(ptr->data== n){
                found = true;
            }
            ptr = ptr->next;
        }
        if(found == true){
            cout<<"\nNumber found successfully";
        }
        else{
            cout<<"\nNumber not found";
        }
    }

};
int main(){
    linklist l1;
    l1.insertNode(11);
    l1.insertNode(13);
    l1.insertNode(15);
    l1.insertNode(17);
    l1.display();
    l1.search(15);
    return 0;}