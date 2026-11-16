from cs50 import get_string

card_number = get_string("Number: ")

total = 0
position = 0

for digit in reversed(card_number):
    digit = int(digit)

    if position % 2 == 1:
        doubled = digit * 2
        total += doubled // 10 + doubled % 10
    else:
        total += digit

    position += 1

if total % 10 != 0:
    print("INVALID")

elif len(card_number) == 15 and card_number[:2] in ["34", "37"]:
    print("AMEX")

elif len(card_number) == 16 and 51 <= int(card_number[:2]) <= 55:
    print("MASTERCARD")

elif len(card_number) in [13, 16] and card_number[0] == "4":
    print("VISA")

else:
    print("INVALID")
