class my_class:
    def dis_function(self):  # Renamed to avoid overwriting
        print("This is class function")
    
    # Data set function
    def setter(self, x, y):
        self.x = x
        self.y = y

    # Data get function
    def display(self):  # Renamed to avoid overwriting
        print(self.x)
        print(self.y)

# Create an object
my_obj = my_class()

# Method call
my_obj.dis_function()  # Call the first method
my_obj.setter(10, 20)  # Set data
my_obj.display()       # Display the data
