def fibonacci(a):
    if a <= 2:
        return 1
    return fibonacci(a - 1) + fibonacci(a - 2)

num = int(input("Ingresa un numero "))
print(f"el numero {num} de la sucesion de fibonacci es: {fibonacci(num)}")
#al parecer apartir del numero 40 de la sucesion ya no corre 