filename = "pi.txt"
with open(filename) as file :
    pi = file.read()
    print(pi.rstrip())

with open(filename) as file:
    i = 0
    for line in file :
        print(f"Line number {i} : {line} ")
        i += 1

with open(filename) as file:
    i = 0
    lines = file.readlines()
    for line in lines:
        print(f"Line number {i} : {line} ")
        i += 1
pi = ""
for line in lines :
    pi += line.strip()
print()
print(f"{pi}")

filename2 = "Programming"
with open(filename2,"w") as file2 :
    file2.write("I am programming")