int p(int*a,int p,int r)<%int i=p,j=r,w;for(;i<j;)??<for(;a<:j:>>a<:p:>;j--);for(;a<:i:><a<:p:>;i++);!(i<j)??!??!??-0??!(w=a<:i:>,a<:i:>=a<:j:>,a<:j:>=w,i++,j--);%>return+j;%>
void q(int*a,int l,int r)<%int t;!(l<r)??!??!0??!(t=p(a,l,r),q(a,l,t),q(a,t+1,r),??-1);%>
