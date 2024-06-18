a = '$'

# the ord() funtion return the ascii value of the variable
code_char = ord(a)

if (65 >= code_char >= 90 or 97 >= code_char >= 122):
    print(f"{a}is a normal character")

elif (type(a) == str):
    print(f"{a}is a special character")

elif (type(a) == int):
    print(f"{a}is an integer")

elif (type(a) == float):
    print(f"{a}is a float")
