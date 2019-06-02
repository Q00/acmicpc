import sys
stair = []
for a in sys.stdin.read().split('\n'):
    if a.strip()!='':
        stair.append(int(a))
arr=[[0]*(stair[0]+1) for i in range(stair[0]+1)]
for x in range(0, stair[0]):
    i=x+1
    if i == 1:
        arr[1][1] = stair[1]
        continue
    elif i == 2:
        arr[2][1] = stair[2]
        arr[2][2] = stair[1]+stair[2]
        continue
    else:
        arr[i][1] = stair[i]
        arr[i][i-1]=max(arr[i-2][i-2], arr[i-2][i-3])+arr[i][1]
        arr[i][i]=arr[i-1][i-2]+arr[i][1]
f = stair[0]
print(max(arr[f][f-1],arr[f][f]))
            
        



