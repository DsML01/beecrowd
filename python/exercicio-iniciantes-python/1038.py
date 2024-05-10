def main():
    entrada = input().split()

    item = int(entrada[0])
    quantidade = int(entrada[1])

    match item:
        case 1:
            print(f"Total: R$ {(quantidade * 4.00):.2f}")
        case 2:
            print(f"Total: R$ {(quantidade * 4.50):.2f}")
        case 3:
            print(f"Total: R$ {(quantidade * 5.00):.2f}")
        case 4:
            print(f"Total: R$ {(quantidade * 2.00):.2f}")
        case 5:
            print(f"Total: R$ {(quantidade * 1.50):.2f}")

main()