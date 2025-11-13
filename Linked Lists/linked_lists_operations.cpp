#include <iostream>
using namespace std;
class Node{    //node has two parts: value and the pointer to next node
    public:
    int data;
    Node* next;

    Node(int val){   //constructor to define a node
        data=val;
        next=NULL;
    }
};

class List{     //defining a linked list
    Node* head;
    Node* tail;
public:
    List(){
        head=tail=NULL;
    }

    void push_front(int val){   //pushing a value to the beginning of linked list
        Node* newNode= new Node(val);
        if(head==NULL){
            head=tail= newNode;
            return;
        }
        else{
            newNode->next= head;
            head= newNode;
        }
    }

    void display(){       //displaying values of linked list
        Node* temp=head;
        while(temp!= NULL){
            cout<< temp->data<<"->";
            temp= temp->next;
        }
        cout<<"NULL"<<endl;
    }
};


int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.display();
    return 0;
}