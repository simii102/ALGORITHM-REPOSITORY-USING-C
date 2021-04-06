#include <stdio.h>
#include<stdlib.h> 
#include <string.h> 
void array(void); 
void delection(void); 
void insert(void); 
void search(void); 
void linear(void); 
void binary(void); 
void sorting(void); 
void selection(void); 
void insertion(void); 
void bubble(void);
void quick(void); 
void quick(void);
void quicksort(int [], int, int); 
void merges(void);
void mergesort(int a[],int i,int j); 
void merge(int a[],int i1,int j1,int i2,int j2);
void stackk(void); 
void push(void); 
void pop(void); 
void display(void);
void linkedlist(void); 
void insert_at_begin(int); 
void insert_at_end(int);
 
void traverse(void);
void delete_from_begin(void); 

void delete_from_end(void);

void main()
{
int c1; printf("press 1 for array opreation\n");
printf("press 2 for searching algorithm\n");
printf("press 3 for sorting alorithm\n");
printf("press 4 for stack\n");
 
printf("press 5 for linked list\n");
scanf("%d",&c1); switch(c1)
{
case 1: array(); break; case 2: search(); break; case 3: sorting(); break;
 
case 4: stackk(); break; case 5:
linkedlist(); break; default: break;
}

}

void array()
{
int c2;
 
printf("press 1 for insertion in array\n");
printf("press 2 for delection in array\n");
printf("press 3 for exit\n"); scanf("%d",&c2); switch(c2)
{
case 1: insert(); break; case 2: delection(); break;
 
default: break;
}

}

void insert()
{
int ele,loc,i,n,a[20],s,p; printf("enter the number of elements\n");
scanf("%d",&n); printf("enter the elements in the array\n");
for(i=0;i<n;i++)
 
{
scanf("%d",&a[i]);
}
printf("enter the element you want to add\n");
int g; scanf("%d",&g);
printf("enter the position\n"); scanf("%d",&p);
for(i=n-1;i>=p-1;i--)
{
a[i+1]=a[i];
}
a[p]=g;
 
n++;
printf("after insert element is\n"); for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}

void delection()
{
int a[20],n,i,d,p; printf("enter the number of elements\n");
 
scanf("%d",&n); printf("enter the number of elements in the array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("press 1 for delete element from first position\n");
printf("press 2 for delete element from middle position\n");
printf("press 3 for delete element from last position\n");
scanf("%d",&d); switch(d)
 
{
case 1: for(i=0;i<n-1;i++)
{
a[i]=a[i+1];
} n--;
printf("after the deletion the element is :\n"); for(i=0;i<n-1;i++)
{
printf("%d\n",a[i]);
}
break;
 
case 2: printf("enter the position\n");
scanf("%d",&p); for(i=p;i<n-1;i++)
{
a[i]=a[i+1];
} n--;
printf("after delete element is\n"); for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
 
break; case 3:
printf("after delete element is\n"); for(i=0;i<n-1;i++)
{
printf("%d\n",a[i]);
}
break; default: break;
}

}
 
void search()
{
int c3; printf("press 1 for linear search\n");
printf("press 2 for binary seearch\n");
printf("press 3 for exit"); scanf("%d",&c3); switch(c3)
{
case 1: linear(); break;
 
case 2: binary(); break; default: break;
}

}

void linear()
{
int a[30],i,n,search; printf("enter the number of elements ");
scanf("%d",&n);
 
printf("enter the number of elements in the array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the element you want to search\n"); scanf("%d",&search);
for(i=0;i<n;i++)
{
if(a[i]==search)
{
 
printf("%d element found at location%d",search,i+1);
}
else
{
a[i]=a[i+1];
}
}
if(a[i]==n)
{
printf("element not found");
}

}
 
void binary()
{
int n,c,array[30],search,first,last,middle;
printf("Enter number of elements\n");
scanf("%d", &n); printf("Enter %d integers\n", n);
for (c = 0; c < n; c++) scanf("%d", &array[c]); 
printf("Enter value to find\n"); 
scanf("%d", &search);
first = 0;
 
last = n - 1; middle = (first+last)/2; while (first <= last) {
if (array[middle] < search) first = middle + 1;
else if (array[middle] == search)
{
printf("%d found at location %d.\n", search, middle+1);
break;
}
else
last = middle - 1; middle = (first + last)/2;
 
}
if (first > last) printf("Not found! %d isn't present in the list.\n", search);
}

void sorting()
{
int c4; printf("press 1 for selection sort\n");
printf("press 2 for insertion sort\n");
printf("press 3 for bubble sort\n");
 
printf("press 4 for quick sort\n");
printf("press 5 for merge sort\n");
printf("press 6 for exit\n"); scanf("%d",&c4); switch(c4)
{
case 1: selection(); break; case 2: insertion(); break;
 
case 3: bubble(); break; case 4: quick(); break; case 5: merges(); break; default: break;
}

}
 
void selection()
{

int n,array[100],min,j,i,temp; printf("Enter number of elements\n");
scanf("%d",&n); printf("Enter %d integers\n",n);
for (i=0;i<n;i++) scanf("%d", &array[i]); for(i=0;i<n-1;i++)
{
min=i;
 
for(j=i+1;j<n-1;j++)
{
if(array[j]<array[min])
min=j;
}
temp=array[min]; array[min]=array[i]; array[i]=temp;
}
printf("after sorting element is\n");
for (i=0;i<n;i++) printf("%d\t",array[i]); printf("\n");
 
}

void insertion()
{

int n,array[100],i,j,temp,flag=0;
printf("Enter number of elements\n"); scanf("%d", &n);
printf("Enter %d integers\n",n);
for (i=0;i<n;i++) scanf("%d", &array[i]); for (i=1;i<=n-1;i++)
 
{
temp=array[i]; for(j=i-1;j>=0;j--)
{
if (array[j]>temp)
{
array[j+1]=array[j]; flag = 1;
}
else break;
}
if(flag) array[j+1]=temp;
 
}
printf("after sorting element is\n"); for(i=0;i<=n-1;i++)
{
printf("%d\n", array[i]);
}

}

void bubble()
{
int n,array[100],min,j,i,temp; printf("Enter number of elements\n");
 
scanf("%d",&n); printf("Enter %d integers\n",n);
for (i=0;i<n;i++) scanf("%d", &array[i]); for(i=0;i<n-1;i++)
{
for(j=i;j<n-1;j++)
{
if(array[j]>array[j+1])
{
temp=array[j]; array[j]=array[j+1]; array[j+1]=temp;
 
}
}
}
printf("after sorting element is\n");
for (i=0;i<n;i++) printf("%d\t",array[i]); printf("\n");
}

void quick()
{
int list[50]; int size, i;
 
printf("Enter the number of elements: ");
scanf("%d", &size); printf("Enter the elements to be sorted:\n");
for (i = 0; i < size; i++)
{
scanf("%d", &list[i]);
}
quicksort(list, 0, size - 1); printf("After applying quick sort\n");
for (i = 0; i < size; i++)
{
 
printf("%d ", list[i]);
}
printf("\n");
}

void quicksort(int list[], int low, int high)
{
int pivot, i, j, temp; if (low < high)
{
pivot = low; i = low;
j = high;
 
while (i < j)
{
while (list[i] <= list[pivot] && i
<= high)
{ i++;
}
while (list[j] > list[pivot] && j
>= low)
{ j--;
}
if (i < j)
{
 
temp = list[i]; list[i] = list[j]; list[j] = temp;
}
}
temp = list[j]; list[j] = list[pivot]; list[pivot] = temp;
quicksort(list, low, j - 1); quicksort(list, j + 1, high);
}

}

void merges()
 
{
int a[30],n,i; printf("Enter no of elements:");
scanf("%d",&n); printf("Enter array elements:");
for(i=0;i<n;i++) scanf("%d",&a[i]);
mergesort(a,0,n-1); printf("\nSorted array is :"); for(i=0;i<n;i++)
printf("%d ",a[i]);
}
 


void mergesort(int a[],int i,int j)
{
int mid; if(i<j)
{
mid=(i+j)/2; mergesort(a,i,mid); mergesort(a,mid+1,j);
merge(a,i,mid,mid+1,j);
}

}
 
void merge(int a[],int i1,int j1,int i2,int j2)
{
int temp[50]; int i,j,k;
i=i1; j=i2; k=0;
while(i<=j1 && j<=j2)
{
if(a[i]<a[j]) temp[k++]=a[i++]; else temp[k++]=a[j++];
 
}
while(i<=j1) temp[k++]=a[i++]; while(j<=j2) temp[k++]=a[j++]; for(i=i1,j=0;i<=j2;i++,j++) a[i]=temp[j];
}

int stack[100],choice,n,top,x,i; void stackk()
{
top=-1;
 
printf("\n Enter the size of STACK[MAX=100]:");
scanf("%d",&n); printf("\n\t STACK OPERATIONS USING ARRAY");
printf("\n\t");
printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
do
{
printf("\n Enter the Choice:");
scanf("%d",&choice);
 
switch(choice)
{
case 1:
{
push(); break;
}
case 2:
{
pop(); break;
}
case 3:
{
 
display(); break;
}
case 4:
{
printf("\n\t EXIT POINT "); break;
}
default:
{
printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
}
}
 
}
while(choice!=4);
}

void push()
{
if(top>=n-1)
{
printf("\n\tSTACK is over flow");
}
else
{
 
printf(" Enter a value to be pushed:"); scanf("%d",&x);
top++; stack[top]=x;
}

}

void pop()
{
if(top<=-1)
{
printf("\n\t Stack is under flow");
 
}
else
{
printf("\n\t The popped elements is %d",stack[top]);
top--;
}

}

void display()
{
if(top>=0)
{
 
printf("\n The elements in STACK \n");
for(i=top; i>=0; i--)
printf("\n%d",stack[i]); 
printf("\n Press Next Choice");
}
else
{
printf("\n The STACK is empty");
}

}
 
struct node
{
int data; struct node *next;
};

struct node *start = NULL; int count = 0;
void linkedlist()
{
int i, data; for (;;) {
printf("1. Insert an element at the beginning of linked list.\n");
 
printf("2. Insert an element at the end of linked list.\n");
printf("3. Traverse linked list.\n");
printf("4. Delete an element from beginning.\n");
printf("5. Delete an element from end.\n"); printf("6. Exit\n");
scanf("%d", &i); if (i == 1) {
printf("Enter value of element\n");
scanf("%d", &data); insert_at_begin(data);
 
}
else if (i == 2) { printf("Enter value of element\n");
scanf("%d", &data); insert_at_end(data);
}
else if (i == 3) traverse(); else if (i == 4)
delete_from_begin(); else if (i == 5) delete_from_end(); else if (i == 6)
 
break; else
printf("Please enter valid input.\n");
}

}

void insert_at_begin(int x)
{
struct node *t; t = (struct
node*)malloc(sizeof(struct node));
t->data = x; count++;
 
if (start == NULL) { start = t;
start->next = NULL; return;
}
t->next = start; start = t;
}

void insert_at_end(int x)
{
struct node *t, *temp;
t = (struct node*)malloc(sizeof(struct node));
 
t->data = x; count++;
if (start == NULL) { start = t;
start->next = NULL; return;
}
temp = start;
while (temp->next != NULL) temp = temp->next;
temp->next = t; t->next	= NULL;
}
 
void traverse()
{
struct node *t; t = start;
if (t == NULL) {
printf("Linked list is empty.\n");
return;
}
printf("There are %d elements in linked list.\n", count);
while (t->next != NULL) { printf("%d\n", t->data); t = t->next;
 
}
printf("%d\n", t->data);
}

void delete_from_begin()
{
struct node *t; int n;
if (start == NULL) { printf("Linked list is empty.\n");
return;
}
n = start->data;
 
t = start->next; free(start); start = t;
count--; 
printf("%d deleted from the beginning successfully.\n", n);
}

void delete_from_end()
{
struct node *t, *u; int n;
if (start == NULL) {
 
printf("Linked list is empty.\n\n");
return;
}
count--;
if (start->next == NULL) { n = start->data; free(start);
start = NULL; 
printf("%d deleted from end successfully.\n\n", n);
return;
}
t = start;
 
while (t->next != NULL) { u = t;
t = t->next;
}
n = t->data;
u->next = NULL; free(t);
printf("%d deleted from end successfully.\n\n", n);
}
 

