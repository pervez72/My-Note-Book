# Brancing statemet 

# For loop example
# use iteration  
for i in range(5): #all setting defult 0 to 4
    print(i)

# user control
print("\n")
for i in range(0,10,2): #(start,stop,step)
    print(i)

#do not new line print 
for i in range(5): # length 0 to 4
    print(i,end=' ')

#while loop
print("\n")
x=10
while x!=0:
    print(x)
    x-=2 #increment and decrement

#nested loop
print("Nested loop")
for row in range(0,5,1):
    for col in range(0,row,1):
        print("*",end=' ')
    print("\n")

#Break and contine 
#break 
for i in range(5):
    if(i==3):
        break
    print(i)

#continue 
print("\n")
for i in range(5):
    if(i==3):
        continue
    print(i)

