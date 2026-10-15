while True:
    try:
        n = int(input("height:"))
        if n > 0:
            break
    except ValueError:
        print("please input a integer greater than 0")

for i in range(n):
        print(" " * (n - i - 1) + "#" * (i + 1) + "  " + "#" * (i + 1))