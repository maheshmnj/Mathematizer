#https://www.facebook.com/ratnadeep.pragwalit/posts/2791519601129696
#Submitted by Ratnadeep Ghosh
import numpy as np
from scipy import stats


n=int(input())
l=list(map(int,input().split()))

print(round(np.mean(l),1))
print(round(np.median(l),1))
print(int(stats.mode(l)[0]))
