from cs50 import get_int

height = get_int("Height: ")

while height < 1 or height > 8:
    height = get_int("Height: ")

for row in range(1, height + 1):
    spaces = height - row
    hashes = row
    print(" " * spaces + "#" * hashes + "  " + "#" * hashes)
