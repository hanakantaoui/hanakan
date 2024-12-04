import re,os
os.system("cls")
def write():
    twit = input("Enter the twit: ")
    with open("twiter.txt", "a") as file:
        file.write(f"{twit}\n")

def read():
    with open("twiter.txt", "r") as file:
        pattern = re.compile(r"#[a-zA-Z_]+")  
        for line in file.readlines():
            line = line.rstrip()  
            hashtags = pattern.findall(line)  
            if hashtags:
                print(f"Hashtags:\n {'\n'.join(hashtags)}")
            else:
                print("No hashtags found.")
    with open("hashtags.txt","w") as f:
        f.write(f"{'\n'.join(hashtags)}")            


write() 
read()  

