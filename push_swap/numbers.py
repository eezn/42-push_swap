import random
RANGE = int(input("range >>> "))
numbers = random.sample(range(1, RANGE + 1), RANGE)

print("\"", end="")
for index, value in enumerate(numbers):
	print(value, end="")
	if not index == RANGE - 1:
		print(" ", end="")
print("\"")