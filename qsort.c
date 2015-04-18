int p(int*a,int p,int r)<%int i=p,j=r,w;for(;i<j;)??<for(;a<:j:>>a<:p:>;j--);for(;a<:i:><a<:p:>;i++);!(i<j)??!??!??-0??!(w=a<:i:>,a<:i:>=a<:j:>,a<:j:>=w,i++,j--);%>return+j;%>
void q(int*a,int l,int r)<%int t;!(l<r)??!??!0??!(t=p(a,l,r),q(a,l,t),q(a,t+1,r),??-1);%>

#include <stdio.h>
 
int main(int argc, char** argv) {
	int i, array[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	q(array,0, 9);
	
	for(i=0;i<10;i++)
		printf("%d,", array[i]);
	
	return 0;
}
