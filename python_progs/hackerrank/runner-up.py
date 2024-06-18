num_elements = int(input("Please enter the no of elements :"))
l = []
for i in range(num_elements):
    elements = int(input(f"Enter element{i + 1}:"))
    l.append(elements)
l2 = [i for i in l if i != max(l)]
print(max(l2))
