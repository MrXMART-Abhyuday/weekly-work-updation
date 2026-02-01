#include <iostream>
using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int val){
//         data=val;
//         next=NULL;
//     }
// };

// class LinkedList{
//     Node* head;
//     Node* tail;
    
//     public:
//     LinkedList(){
//         head=tail=NULL;
//     }

//     void pushfront(int val){
//         Node* newNode= new Node(val);//dynamic
//         if(head==NULL){
//             head= newNode;
//             tail= newNode;
//         }
//         else{
//             newNode->next=head;
//             head=newNode;
//         }
//     }
//     void print(){
//         Node* temp;
//         temp=head;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }

//     void pushback(int val){
//         Node* newNode= new Node(val);
//         //head==tail==NULL
//         if(tail==NULL){
//             head=newNode;
//             tail=newNode;
//         }
//         else{
//             tail->next=newNode;
//             newNode->next= NULL;
//             tail=newNode;
//         }
//     }
// };
int main() {
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    // int n=3;
    for(int i=n-1;i>=0;i--){
        cin>>arr1[i];
    }
    for(int i=n-1;i>=0;i--){
        cin>>arr2[i];
    }
    int sum[n+1]={0};
    for(int i=n-1;i>=0;i--){
        sum[i]=sum[i]+arr1[i]+arr2[i];
        if(sum[i]>=10){
            sum[i]=sum[i]%10;
            sum[i+1]=sum[i+1]+1;
        }
    }

    if(sum[0]==0){
        n--;
    }
    for(int i=n;i>=0;i--){
        cout<<sum[i]<<" ";  
        }

    return 0;
}
