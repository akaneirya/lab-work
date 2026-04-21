#include<stdio.h>

int main()
{
int a[5] ={ 90, 90, 70, 60, 50};
int b[5] ={ 99, 88, 77, 66, 55};
int c[5] ={ 80, 60, 70, 50, 99};

int sum[5];
float per[5];
char grade[5];

int i;

for (int i = 0; i<5; i++) {
sum[i] = a[i] + b[i] + c[i];

per[i]=(sum[i]/ 300.00) * 100.00;

if(per[i]>90)
printf("grade = A1\n");
else if(per[i] > 80)
printf("grade = A2\n");
else if(per[i] > 70)
printf("grade = B1\n");
else if(per[i] > 60)
printf("grade = B2\n");
else if(per[i] > 50)
printf("grade = C1\n");
}
printf("maths | sci | eng |  total | per | grade |\n");
for(int i = 0; i<5; i++){
printf("%d | %d | %d |%d | %f | \n", a[i], b[i], c[i], sum[i], per[i]);
}
}