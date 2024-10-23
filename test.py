# class my_class:
#     def dis_function(self):  # Renamed to avoid overwriting
#         print("This is class function")
    
#     # Data set function
#     def setter(self, x, y):
#         self.x = x
#         self.y = y

#     # Data get function
#     def display(self):  # Renamed to avoid overwriting
#         print(self.x)
#         print(self.y)

# # Create an object
# my_obj = my_class()

# # Method call
# my_obj.dis_function()  # Call the first method
# my_obj.setter(10, 20)  # Set data
# my_obj.display()       # Display the data

phone_book = {"John": "123-4567", "Jane": "987-6543"}

def add_number(name, phone_number):
    phone_book[name] = phone_number #Add a new contact to the phone book
def remove_number(name): #Remove a contact from the phone book.
    if name in phone_book:
        del phone_book[name]

def update_contact(name, new_phone_number): #Update a contact's phone number
    if name in phone_book:
        phone_book[name] = new_phone_number


#"Print the entire phone book.
def print_phone_book():
    for name, phone_number in phone_book.items():
        print(f"{name}: {phone_number}")

# Example usage
add_number("Mike","555-1212")  # Add Mike with phone number 555-1212
remove_number("Jane")            # Remove Jane from the phone book
update_contact(f"John", "111-2222")  # Update John's phone number to 111-2222

# Print the entire phone book
print_phone_book()
