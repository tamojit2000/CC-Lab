def first_max_even(x):
    l=x.split()
    Max=0
    index=0
    for i in range(len(l)):
        ilength=len(l[i])
        if ilength>Max and ilength%2==0:
            Max=ilength
            index=i
    return l[index]


def n_even_length(x,n):
    l=x.split()
    index=0
    counter=0
    for i in range(len(l)):
        if len(l[i])%2==0:
            index=i
            counter+=1
            if counter==n:
                return l[index]

def m_max_length(x,n):
    l=x.split()
    index=0
    Max=0
    d={}
    for i in range(len(l)):
        ilength=len(l[i])
        d[ilength]=i
    keys=list(d.keys())
    keys.sort(reverse=True)
    return l[d[keys[n-1]]]
            
            


if __name__=='__main__':

    a=input('Enter String: ')
    print('First Max Length Even: ',first_max_even(a))

    a=input('Enter String: ')
    n=int(input('Enter index: '))
    print('N Even Length: ',n_even_length(a,n))

    a=input('Enter String: ')
    n=int(input('Enter index: '))
    print('M Even Length: ',m_max_length(a,n))










    
