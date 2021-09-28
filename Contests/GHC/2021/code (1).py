

import os
from random import randint
f=open("f.txt","r")
f1=f.readlines()
lines=[]*2
for x in f1:
    lines.append(x.rstrip())
z=[]
#print(lines)

x = list(lines[0].split(" "))

d= int(x[0])
i=int(x[1])
s=int(x[2])
v=int(x[3])
F=int(x[4])

graph = {}
#print(d,i,s,v,F)

adj1 = [[0 for x in range(i)] for y in range(i)] 
adj2 = [[0 for x in range(i)] for y in range(i)] 

for j in range(0,s):
    a = list(lines[1+j].split(" "))
    
    b = int(a[0])
    c = int(a[1])
    
    y = int(a[3])
    name = a[2]
    
    adj1[b][c]=y
    adj2[b][c]=name
    

f2=open("outputF.txt","w")
p = i

f2.write(str(p))
for j in range(0,p):
    f2.write("\n%s"%str(j))
    c=0
    x=[]
    for k in range(0,i):
        if(adj2[k][j]!=0):
            c = c+1
            b = randint(4,6)
            
            string1= adj2[k][j] + " "+str(b)
            x.append(string1)
    #print(x)
    f2.write("\n%s"%str(c))
    
    for k in range(0,len(x)):
        f2.write("\n%s"%x[k])
            
f2.close()

    



    
    