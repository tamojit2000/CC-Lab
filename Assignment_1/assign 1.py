def MagicString(x):
    d={}
    length=0
    for i in x:
        try:
            d[i]+=1
        except:
            d[i]=1
            length+=1
    #print(d)
    #print(length)
    arr=list(d.values())
    arr.sort()
    for i in range(length-1):
        for j in range(1,length):
            S=arr[i]+arr[j]
            #print(arr[i],arr[j],S)
            if S in arr:
                return True
    return False


t=int(input())
for i in range(t):
    s=input()
    if MagicString(s):
        print('Magic')
    else:
        print('Not Magic')
        
    
