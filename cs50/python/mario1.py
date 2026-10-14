while True:
    try:
        n = int(input("heigh: "))
        if n > 0:
            break
    except ValueError:
        print("not integer")

for _ in range(n):
    print("#")