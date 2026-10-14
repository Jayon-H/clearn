import csv

name = input("Name:")
number = input("Number:")

# file = open("phonebook.csv","a")
# writer = csv.writer(file)
# writer.writerow([name,number])
# file.close()


with open("phonrbook.csv","a") as file:
    writer = csv.writer(file)
    writer.writerow([name,number])