#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main(){
clrscr();
int x=100, i=0, n=0, j=0,l=0;
int a[10];
cout<<"[1] What is the length of the array \n";
cin>>n;
n--;
cout<<"[2] Enter the data of the array... \n";
for(i=0;i<=n;i++){
cin>>a[i];
if(a[i]>l){
l=a[i];}}
cout<<"[3] The array is. ";
for(i=0;i<=n;i++){
cout<<a[i]<<",";}
cout<<"\n [4] Now we will proceed with arrangingthe array items in descending order. \n";
delay(1000);
for(i=0;i<=n && l!=a[0];i++){
j++;
if(j==n+1 && l!=a[0]){
i=0;
j=1;}
if(a[j]>a[i]){
x=a[i];
a[i]=a[j];
a[j]=x; 
}}
cout<<"\n [5] The arranged array is \n";
for(i=0;i<=n;i++){
cout<<a[i]<<",";}
delay(5000);}
