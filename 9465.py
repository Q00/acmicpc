import sys

n = int(sys.stdin.readline())
for i in range(n):
    o = int(sys.stdin.readline())
    l1 =sys.stdin.readline().split()
    l1 = list(map(int, l1))
    l2 =sys.stdin.readline().split()
    l2 = list(map(int, l2))
    #su=[[0]*2 for c in range(o)]
    #첫줄이 oxxd 인경우 max(a, c)+d => 최적의 계산
    #       xac
    # xabx 인경우 이후 경우의수는 
    # oxxd             max(a, b)+d ==> 최적의 계산 
    su=[0]*(o+1)
    su2=[0]*(o+1)
    su[1]=l1[0]
    su2[1]=l2[0]
    if o>2:
        for a in range(2,o+1):
            su[a]=max(su2[a-1],su2[a-2])+l1[a-1]
            su2[a]=max(su[a-1],su[a-2])+l2[a-1]
    
    if o==2: 
        su[2]=su[1]+l2[1]
        su2[2]=su2[1]+l1[1]
    print(su, su2)
    print(max(su[o],su2[o]))

            
