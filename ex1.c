1.
  
#include<stdio.h>
void main()
{
    int a[50],n,i,j,tmp;
    printf("Enter the no of elements :");
    scanf("%d",&n);
    //getting the numbers
    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //sorting
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]> a[j])
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }   
        }
    }
//printing sorted elements
printf("The ascending order is :");
for(i=0;i<n;i++)
    printf("\n %d",a[i]);

}



2.
#include <stdio.h>
void main()
{
    int a[10],i,n,min,max;
   
    printf("Enter the no of elements : ");
    scanf("%d",&n);
 
    printf("Enter the numbers : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
 
    min=max=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i])
		  min=a[i];   
		   if(max<a[i])
		    max=a[i];       
    }
     printf("minimum of array is : %d",min);
    printf("\n maximum of array is : %d",max);

}


3.
#include <stdio.h>

void main() {
  int n1, n2, n3;
  printf("Enter the three elements: ");
  scanf("%d %d %d", &n1, &n2, &n3);

  if (n1 >= n2 && n1 >= n3)
    printf("%d is the greatest number.", n1);

  if (n2 >= n1 && n2 >= n3)
    printf("%d is the greatest number.", n2);

  if (n3 >= n1 && n3 >= n2)
    printf("%d is the greatest number.", n3);

}


4.
// #include <stdio.h>
// void main()
// {       int arr[20];
//         int n,i;
//         printf("Enter the range :");
//         scanf("%d",&n);

//         arr[0] = 0;
//         arr[1] = 1;
//         printf("FIBONACCI SERIES: \n");

//         for(i = 2; i < n; i++)
//         {

//         arr[i] = arr[i-1] + arr[i-2];
//         }

//         for (i = 0; i < n; i++)
//         {

//         printf("\n%d", arr[i]);
//         }
// }

#include<stdio.h>    
int main()    
{    
 int a,b,c,i,n;   
 printf("Enter the number of elements:");    
 scanf("%d",&n);    
 a=0;
 b=1;
 printf("\n%d %d",a,b);  
 for(i=2;i<n;++i)   
 {    
  c=a+b;  
  printf(" %d",c);    
  a=b;
  b=c;  
 }  

 }    

5.
#include <stdio.h>  

  
void main ()  
{  
    int arr[10];  
    int p, i, n; // declare int type variable  
    printf (" Enter the number of elements in an array:  ");  
    scanf (" %d", &n);  
    printf (" Enter %d elements in array:", n);  
    // use for loop to insert elements one by one in array  
    for (i = 0; i < n; i++ )  
    {   printf (" arr[%d] = ", i);  
        scanf (" %d", &arr[i]);  
    }  
      
    // enter the position of the element to be deleted  
    printf( " enter the index of the element to be deleted : ");  
    scanf (" %d", &p);  
      
    // check whether the deletion is possible or not  
    if (p >= n+1)  
    {  
        printf (" \n Deletion is not possible in the array.");  
    }  
    else  
    {  
        // use for loop to delete the element and update the index  
        for (i = p; i < n -1; i++)  
        {  
            arr[i] = arr[i+1]; // assign arr[i+1] to arr[i]  
        }  
          
        printf (" \n The resultant array is: \n");  
          
        // display the final array  
        for (i = 0; i< n - 1; i++)  
        {  
            printf (" arr[%d] = ", i);  
            printf (" %d \n", arr[i]);  
        }  
    }   
}  

6.
#include <stdio.h>  

  
void main ()  
{  
    int arr[10];  
    int p, i, n; // declare int type variable  
    printf (" Enter the number of elements in an array:  ");  
    scanf (" %d", &n);  
    printf (" Enter %d elements in array:", n);  
    // use for loop to insert elements one by one in array  
    for (i = 0; i < n; i++ )  
    {   printf (" arr[%d] = ", i);  
        scanf (" %d", &arr[i]);  
    }  
      
    // enter the position of the element to be deleted  
    printf( " enter the index of the element to be deleted : ");  
    scanf (" %d", &p);  
      
    // check whether the deletion is possible or not  
    if (p >= n+1)  
    {  
        printf (" \n Deletion is not possible in the array.");  
    }  
    else  
    {  
        // use for loop to delete the element and update the index  
        for (i = p; i < n -1; i++)  
        {  
            arr[i] = arr[i+1]; // assign arr[i+1] to arr[i]  
        }  
          
        printf (" \n The resultant array is: \n");  
          
        // display the final array  
        for (i = 0; i< n - 1; i++)  
        {  
            printf (" arr[%d] = ", i);  
            printf (" %d \n", arr[i]);  
        }  
    }   
}  


7.
#include<stdio.h>     
int main(){  
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
 
printf("enter the number of rows =");    
scanf("%d",&r);    
printf("enter the number of columns =");    
scanf("%d",&c);    
printf("enter the first matrix elements = \n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}    
printf("enter the second matrix elements = \n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&b[i][j]);    
}    
}    
    
printf("Multiplication of the 2 matrix= \n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
//for printing result    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}    

}  

  
