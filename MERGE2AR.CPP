#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	int arr1[4],arr2[4],res[8],i,j,k,n1,n2;
	printf("\nEnter the number of element in the frist array:");
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter the number of element in the second array:");
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	i=0;
	j=0;
	k=0;
	while(i< n1 && j< n2)
	{
		if(arr1[i] <= arr2[j])
		{
			res[k] = arr1[i];
			i++;
			k++;
		}
		else
		{
			res[k] = arr2[j];
			k++;
			j++;
		}
	}
	while(i<n1)
	{
		res[k] = arr1[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		res[k] = arr2[j];
		k++;
		j++;
	}
	printf("\nThe Resultant array is:");
	for(i= 0;i< n1+n2;i++)
	{
		printf("%d\t", res[i]);
	}
	getch();
}

Output:

										
Enter the number of element in the frist array:4                                
11 22 33 44                                                                     
Enter the number of element in the second array:3                               
10 24 35                                                                        
                                                                                
The Resultant array is:10       11      22      24      33      35      44      
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
										

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
