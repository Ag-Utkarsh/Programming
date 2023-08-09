#include<conio.h>
#include<stdio.h>
int main()
{ int arr[20][20];
int m,n,i,j, ins, inst, insert, del, delt;
clrscr();
printf("Enter size of array:\n");
scanf("%d%d", &m,&n);
printf("Enter values in array\n");
for(i=0;i<m;i++){
	for(j=0;j<n;j++)
		scanf("%d", &arr[i][j]);
		}
printf("Array is:\n");
for(i=0;i<m;i++){
	for(j=0;j<n;j++)
		printf("%d ", arr[i][j]);
		printf("\n");
		}
//INSERTION
printf("Enter position of the inserting element\n");
scanf("%d%d", &ins, &inst);
printf("Enter value to be inserted\n");
scanf("%d", &insert);
arr[ins][inst]=insert;
printf("Array is:\n");
for(i=0;i<m;i++){
	for(j=0;j<n;j++)
		printf("%d ", arr[i][j]);
		printf("\n");
		}
//DELETION
printf("Enter index to be deleted\n");
scanf("%d%d", &del, &delt);
for(i=m;i>=del;i--){
	for(j=n;j>=delt;j--){
	    arr[i-1][j-1]=arr[i][j];
	}

}
printf("Array is:\n");
for(i=0;i<m;i++){
	for(j=0;j<n;j++)
		printf("%d ", arr[i][j]);
		printf("\n");
		}
getch();
return 0;
}