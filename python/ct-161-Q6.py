
fruits = ["Apple", "Banana", "Mango", "Orange", "Grapes"]
index = int(input("Enter an index (0-4): "))
if 0 <= index < len(fruits):
    print("Fruit at index", index, "is:", fruits[index])
else:
    print("Invalid index! Please enter a number between 0 and 4.")
