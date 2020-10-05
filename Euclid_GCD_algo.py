# https://www.facebook.com/fort.m.7/posts/385714229262556
# Subscribed by voice kaushik

#Implementing Euclid's GCD Algorithm
print("Input two space separated integers to find their GCD using Euclid's GCD algorithm")
l=list(map(int,input().split()))  #inputing the numbers as space separated integers
ma=l[0]
mi=l[1]
if l[1]>l[0]:
    ma=l[1]
    mi=l[0]
while mi:
    ma=ma%mi
    #swap ma,mi using a temporary variable temp
    temp=ma
    ma=mi
    mi=temp
if ma<0:
    ma=ma*(-1)
print(f"The GCD of {l[0]} and {l[1]} is {ma}")

#Time complexity of the algorithm is O(log min(a,b)),where a and b are the two numbers whose GCD we have to find
