people = [
    {"name":"David","number":"114514"},
    {"name":"Kelly","number":"8989810"}
]

name = input("Name: ")

for person in people:
    if person["name"] == name:
        number = person["number"]
        print(f"Found {number}")
        break
else:
    print("Not Found")
