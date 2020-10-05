#https://www.facebook.com/mission.gate.79/posts/327813885110980
#subscribed by code house

clear;
clc;
syms x y
f=-diff(y,x)+x+2*y;
x0=0;
y=0;
xr=1;
h=0.01;
for x=x0:0.01:xr
    y=double(y+h*subs(f));
end
sol=y
