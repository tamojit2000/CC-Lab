import sys

def CheckSquareFree(x):
    for i in range(2,x+1):
        if x%i==0 and (i**0.5)%1==0:
            return False
    return True


N=int(sys.stdin.readline())

count=0

for i in range(2,N+1):
    if N%i==0 and CheckSquareFree(i):
        count+=1

sys.stdout.write(str(count))
