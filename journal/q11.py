""" n=1111
sum=0

while(n>0):
    r=n%10
    sum=sum+r
    n=n/10

print(int(sum)) """

i = 2
while(i < 100):
    j = 2
    while(j <= (i/j)):
        if(i%j==0):
            break
        j = j + 1
    if (j > i/j): 
        print("%d is prime"%i)
    i = i + 1
print("Good bye!")