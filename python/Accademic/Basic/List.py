#list declear
my_list =[1,2,3,4,5] #inside value is call item

 # list access
print(my_list[0])

# add or insert in element
my_list.append(6)

# remove in element
my_list.remove(3)

# all print 
for item in my_list:
   print(item)

# user input list
n=int(input("What is length of list"))
list_1=[]
for i in range(n):
     user_input=input()
     list_1.append(user_input)

# now output
print(list_1)


# Create a list of squares using list comprehension
squares = [x**2 for x in range(5)]
print(squares)

# power in variable
x=2
print(x**2)


#class note 
#list inside tupple or tuple inside list
li=[5,6,('ha','ka'),(1,2),1,3]
print(li)
