#Include<stdio.h>
// f u n c ti o n f o r measuring a r ra y l e n g t h with data
int a_length ( char array [ ] )
{
int count = 0 ;
for ( int i = 0 ; array [ i ] != NULL; i++)
{



count++;
}
return count ;
}
int main ( )
{
int n;
printf("This is a program for even parity checking./n");
scanf("Enter number of bits:");
cout<<"Enter number of bits:"<<endl;
cin>>n ;
char data[n] ;

cout<<"Enter the data : "<<endl ;
for(int i=0;i<n;i++)
    cin>>data[i];

int length= n;

int count =0;
for ( int i =0; i<length ; i++)
{
// checking even parity
if ( data [ i ]== '1')
{
count++;
}
}
// increasing the array for adding the parity bit .
int c=length +1;
char output[c];
//new array
if ( count%2 == 0 )
{
output[0]='0';
for(int i=1;i<c;i++)
    output[i]=data[i-1];


cout<<"After adding '0' at the front of the data : "<<endl ;
for(int i=0;i<c;i++)
    cout<<output[i] ;

cout<<endl ;
}
else
{
output[0]='1';
for(int i=1;i<c;i++)
    output[i]=data[i-1];


cout<<"After adding '1' at the front of the data : "<<endl ;
for(int i=0;i<c;i++)
    cout<<output[i] ;

cout<<endl ;
}
}
