#include<stdio.h>
int main(){
	printf("// les pointeur et les var int,float...");
	int z,y,a=5;
	int b=7;
int *p;

p=&a;
p=&b;// l'adresse de b

printf("%d\n",*p);// affiche 7
y=++*p+a;
printf("%d\n",y);// affiche 8+5=13
/*
z=a+*p++;
printf("%d\n",z);// affiche 5+7=12
*/
printf("//// les pointeur et les tableaux \n");

int Tab[4]= {3,2,7,9};//declaration du tableaux a 4 valeur
int *p1;
int l,m;               //declaration du pointeur de type int
p1 = Tab;  // ou p = &Tab[0]; (pointer sur le tableaux Tab).
l=*p1;  //la meme chose que l= Tab[0]; 
//m=*(p1+2); // attention il est diff de *p+2 
m=*p1+2; // *p1=Tab[0]=3 et +2 egal a 5

printf("%d\n%d\n",l,m);
return 0;
}


