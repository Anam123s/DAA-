#include<iostream>
#include<stdlib.h>
using namespace std;
#define MAX 100
#define initial 1
#define waiting 2
#define visited 3
 int n;
 int adj[MAX][MAX];
 int state[MAX];
 void create_graph();
 void BF_traversal();
 void BFS(int F);
 int queue[MAX], front=-1, rear=-1;
 void insert_el(int first_el);
 int delete_el();
 int isempty_queue();
 
  int main()
   {
      create_graph();
      BF_traversal();
      
    }
   void BF_traversal()
   {
      int s;
      for(s=0; s<n; s++)
          state[s]=initial;
      cout<<"Enter starting vertex for Breadth First Search:";
      cin>>s;
      BFS(s);
      
      
    }  
    void BFS(int s)
    {
         int i;
         insert_el(s);
         state[s]=waiting;
          while(!isempty_queue())
          {
             s=delete_el();
             cout<<s;
             state[s]=visited;
             for(i=0; i<n; i++)
                {
                   if(adj[s][i]==1 && state[i]==initial)
                    {
                      insert_el(i);
                      state[i]=waiting;
                    }
                 }
                 
         }
      cout<<"\n";
     }
      
      
      
      
      void insert_el(int first_el)
       {
           if(rear==MAX-1)
           
               cout<<"Queue overflow\n";
             
           else
           {
              if(front==-1)
              
                front=0;
              rear=rear+1;
              queue[rear]=first_el;
            
        }
      }
        
       int isempty_queue()
       {
          if(front==-1 || front>rear)
              return 1;
          else
               return 0;
       }
       int delete_el()
       {
         int d;
         if(front==-1 || front>rear)
           {
             cout<<"Queue underflow\n";
             exit(1);
           }
           d=queue[front];
           front=front+1;
           return d;
           
        }
        
 void create_graph()
 {
    int i, max_e, o, d;
    cout<<"Enter no. of vertices:";
    cin>>n;
    max_e=n*(n-1);
    for(i=1; i<=max_e; i++)
      {
        cout<<"Enter edge (-1 -1 ) to quit "<< i<<":";
        cin>>o>>d;
         if((o==-1) && (d==-1))
          break;
          if(o>=n||d>=n||o<0||d<0)
          {
            cout<<"Invalid edges:";
            i--;
            }
            else 
            adj[o][d]=1;
        }
        
   }
        
         
 /* OUTPUT:
 Enter no. of vertices:5
Enter edge (-1 -1 ) to quit 1:0 1
Enter edge (-1 -1 ) to quit 2:1 2
Enter edge (-1 -1 ) to quit 3:2 3
Enter edge (-1 -1 ) to quit 4:4 3
Enter edge (-1 -1 ) to quit 5:4 0
Enter edge (-1 -1 ) to quit 6:1 4
Enter edge (-1 -1 ) to quit 7:0 3
Enter edge (-1 -1 ) to quit 8:3 1
Enter edge (-1 -1 ) to quit 9:-1 -1
Enter starting vertex for Breadth First Search:0
01324

 */
 