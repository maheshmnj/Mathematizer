# https://www.facebook.com/jyotiprakash.nayak.372/posts/1837128093092133
# subscibed by Code House
clear
clc
syms x;
a=(x*cos(x) ) -(x^2) ;
b=diff(a,x);
x=1;
conv=0.00001;
for i=1:10
 z=x;
 x=double(subs(x-a/b));
 if ((abs(z-x))<conv)
 break;
 end
end
solution=x
