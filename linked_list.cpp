#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

class LinkedList{
    Node* head;
    Node* tail;
    
    public:
    LinkedList(){
        head=tail=NULL;
    }

    void pushfront(int val){
        Node* newNode= new Node(val);//dynamic
        if(head==NULL){
            head= newNode;
            tail= newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }
    void print(){
        Node* temp;
        temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void pushback(int val){
        Node* newNode= new Node(val);
        //head==tail==NULL
        if(tail==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            newNode->next= NULL;
            tail=newNode;
        }
    }
    void popfront(){
        if(head==NULL){
            cout<<"empty list"<<" ";
        }
        else{
        Node* temp;
        temp=head;
        head=head->next;
        delete temp;
        }
    }
    void popback(){
        Node* temp= head;
        if(head==NULL){//incase koi node nhi h
            cout<<"empty";
        }
        else if(head==tail){//incase ek node h sirf
            delete head;
            head=tail=NULL;
        }
        else{
            // temp->next->next==NULL     ye condition bhi use ho skti h
            while(temp->next!=tail){
            temp=temp->next;//we reach the second last node here
            }
            tail=temp;//tail ko second last node pr point kr diye
            temp=temp->next;//temp ko last node pr point kr diye
            delete temp;//temp ko delete kr diye
            tail->next=NULL;//tail k aage null laga diye
        }
    }
    void insert_at_position(int val, int pos){
        if(pos<0){
            cout<<"invalid position";
            return;
        } 
        else if(pos==0){
            pushfront(val);
        }
        else{
        Node* newNode= new Node(val);
        Node* temp=head;
        for(int i=0;i<pos-1;i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        }
    }
    void reversell(){
        if(head==NULL or head->next==NULL) {
            cout<<"impossible";
            return;
        }
        if(head->next->next==NULL){
            //1 2
            Node* temp=head->next;
            head->next->next=head;
            head->next=NULL;
            temp=head;
            return;
        }
        // 1->  2->   3->   4->   5
        //left curr right
        // 1<->2  3->4->5
        // 1<->2<-3  4->5
        // 1    <-2  <-3         4->5
        //right curr left
         
        Node* left=NULL;
        Node* curr=head;
        Node* right;
        while(curr!=NULL){
            right=curr->next;
            curr->next=left;
            left=curr;
            curr=right;
        }
        head=left;
    }

    int search(int key){
        Node* temp=head;
        int count=0;
        while(temp!=NULL){
            if(temp->data == key){
            return count;
        }
        temp=temp->next;
        count++;
        }
        return -1;
    }
};

int main() {
    LinkedList ll;
    ll.pushback(1);
    ll.pushback(2);
    ll.pushback(3);
    ll.pushback(4);
    ll.pushback(5);
    ll.print();
    ll.reversell();
    ll.print();
    // // ll.popfront();
    // ll.print();
    // ll.popback();
    // ll.insert_at_position(4,2);
    // ll.print();
    // cout<< ll.search(6);
    return 0;
}