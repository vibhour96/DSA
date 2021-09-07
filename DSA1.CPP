 #include<iostream.h>
 #include<conio.h>
 int main()
 {
 int arr[10];
 clrscr();
 cout<<"\nEnter the 10  elements of the array";
 for(int i=0;i<10;i++)
 cout<<arr[i]<<"\n";
 cout<<"The elements of the array in reverse order\n";
 for (i=9;i>0;i--)
 cout<<arr[i]<<"\n";
 return 0;
 }