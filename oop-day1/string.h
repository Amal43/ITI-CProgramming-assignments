struct node{
   char value;
   struct node *next;
};
typedef struct node Node;

 struct itistring{
     Node *head;
 };
 typedef  struct itistring ITIstring;

 ITIstring readITIstring();
 void printITIstring(ITIstring str);
