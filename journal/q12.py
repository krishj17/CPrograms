n=5

def fact(n, mul):
    if(n==0):
        return mul
    else:
        return fact(n-1, mul*n) # mul value gets updated every time.
    
result=fact(n,1)    # directly passed mul value 1
print("factorial is: ", result)
        