import sys
inum = int(sys.stdin.read())
l =[]
l.append(-1)
for i in range(1,inum+1):
    l.append( l[i-1]+1)
    if i%2==0:
        l[i]=min(l[i],l[int(i/2)]+1)
    if i%3==0:
        l[i]=min(l[i],l[int(i/3)]+1)

print(l[-1])
