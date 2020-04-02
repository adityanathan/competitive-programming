test=int(input())
t=test
while t:
    t-=1
    x=input()
    num1,num2 = "",""
    boo=False
    for dig in x:
        if dig=='4':
            if not boo:
                boo=True
            num1+='3'
            num2+='1'
        else:
            num1+=dig
            if boo:
                num2+='0'
    print("Case #"+str(test-t)+": "+str(num1),num2)
        