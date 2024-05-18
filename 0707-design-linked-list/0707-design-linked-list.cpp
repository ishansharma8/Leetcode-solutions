class Node{
    public:
    int val;
    Node* next;

    //why this.next=NULL;
//bcoz whenever we make a brand new node,until or unless we attach this new node to a linkedlist ,its next property should be null
//its a new object , its  not been connected to the  list ,so its not part of the linkedlist
    Node(int val){
       this->val=val;
       next=NULL; //this.next is going to be the object property
    }
};

class MyLinkedList {    
public:
        Node* head =NULL;
        int size=0;
         MyLinkedList() { }

    
    int get(int index) {
        
        if(index<0){  // || head==NULL
            return -1;
        }
        Node* temp=head;  
        int i=0;
        while(i<index && temp!=NULL){
            temp=temp->next;
            i++;
        }
        if(temp==NULL)return -1;
        int ans= temp->val;
        // cout<<ans;
        return ans;
    }
    
    void addAtHead(int val) {
        Node* n1;                
        if(head==NULL){
            head =new Node(val);
            head->next=NULL;
        }
        else{
            n1=new Node(val);
            n1->next=head;
            head=n1;
        }

        size++;
        
    }
    
    void addAtTail(int val) {
        Node* n1=head;
        if(head==NULL){
            head =new Node(val);
            head->next=NULL;
        }
        else{
            Node *n2=new Node(val);
            while(n1->next!=NULL){
                n1=n1->next;
            }
            n1->next=n2;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {

        
        if(index==0){
            addAtHead(val);
            return;
        }
        Node * temp=head;
        Node* Nodetoinsert=new Node(val);
        int i=0;
        while(i<index-1 && temp!=NULL){
//temp!=NULL bcoz if initially only you add at 4th index ,then it should not be allowed            
            temp=temp->next;
            i++;
        }
        if(temp==NULL)return;
        //we are handling the case when ll length =2,and they are asking to insert at index 4,
//ideally we can maintain a length variable as well ,but i did last node will be null,so its next we should not access
        Node* NodetoinsertNext=temp->next;
        temp->next=Nodetoinsert;
        Nodetoinsert->next=NodetoinsertNext;
        size++;
    }
    
    void deleteAtIndex(int index) {
        
        if(head==NULL){
            return ;
        }


        Node* prev = NULL;
        int i=0;
        Node* nodetobedeleted = head;
        
        while(i<index && nodetobedeleted!=NULL){
            prev=nodetobedeleted;
            nodetobedeleted=nodetobedeleted->next;
            i++;
        }
        if(i!=index){
            return;  //ll is not havinf the index,index expected longer than length
        }
        
        if(nodetobedeleted ==NULL)return;
        Node* newnext=nodetobedeleted->next;
        if(prev!=NULL){        
        prev->next=newnext;
        nodetobedeleted->next=NULL;
        return;
        }
        if(index==0){//means we are deleting the head only,eg testcase in notes on lc
            head=newnext;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */