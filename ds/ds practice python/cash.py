while True:
    try:
        n = float(input("How much? "))
        if n > 0:
            break
    except ValueError:
        print("try again")

cents = round(n * 100)
coins = 0

for coin in [25,10,5,1]:
    coins += cents // coin
    cents %= coin

print(coins) 