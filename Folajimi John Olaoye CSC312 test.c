#include <stdio.h>
#include <stdlib.h>
struct Node
{ float Number ;
  Node *Link ;
} ;
  class stack
{ Node *Top ;
 public :
 STACK( ) {Top = NULL ;}
 void PUSH( ) ;
 void POP( ) ;
  ~STACK( ) ;
} ;
 void STACK::PUSH( )
{ Node *Temp;
  Temp=new Node;
 if(Temp= =NULL)
{
 cout<<"\nNo memory to create the Node:";
 exit(1);
}
 cout<<"\nNo Enter number to be inserted:";
 cin>>Temp→ Number;
 Temp→ Link=Top;
 Top=Temp;
}

}
