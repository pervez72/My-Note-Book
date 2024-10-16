# class declaration 
class my_class:
    def display(self):
        print("This is class function")
    
    # data set function
    def setter(self,x,y):
         self.x=x
         self.y=y
         #print(self.x+self.y)
    
    # data get function
    def dis(self):
        print(self.x)
        print(self.y)

#create in object
my_obj=my_class()

#method call
my_obj.display()
my_obj.setter(10,20)
my_obj.dis()




# why use self:
# self refers to the current instance of the class.
# It is used to access instance variables and methods within the class.
# It is a convention in Python and makes it explicit which object’s data you are working with in methods.