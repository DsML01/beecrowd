def main():
    entrada = input().split()
    c1 = float(entrada[0])
    c2 = float(entrada[1])

    if(c1 > 0 and c2 > 0):
        print("Q1")
    elif(c1 < 0 and c2 > 0):
        print("Q2")
    elif(c1 < 0 and c2 < 0):
        print("Q3")
    elif(c1 > 0 and c2 < 0):
        print("Q4")
    elif(c1 == 0 and c2 == 0):
        print("Origem")

main()