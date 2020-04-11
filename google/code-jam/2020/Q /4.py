test,b=[int(x) for x in input().split()]
t=test

def opp(s):
    x=""
    for i in s:
        if i=='0':
            x+='1'
        if i=='1':
            x+='0'
    return x

while t and b==10:
    t-=1
    s=''
    for i in range(10):
        print(i+1)
        s+=input()

    print(s)
    verdict=input()
    if verdict!="Y" :
        break

while t and b==20:
    t-=1
    left,mid,right='','',''
    s='1'*20
    for i in range(10):
        print(i+1)
        left+=input()

    for i in range(10):
        print(i+6)
        mid+=input()

    if left[6:]!=mid[:6] and opp(left[6:])!=mid[:6]:
        if mid[6:]==left[6:][::-1]:
            print(left)
        
    else:
        print(s)
    verdict=input()
    if verdict!="Y" :
        break
        