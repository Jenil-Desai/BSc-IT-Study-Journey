def fibonacci_pyramid(n):
    fib = [0, 1]
    for i in range(2, n):
        fib.append(fib[i-1] + fib[i-2])
    
    index = 0
    for i in range(1, n + 1):
        print(" " * (n - i), end="")
        for j in range(i):
            if index < len(fib):
                print(fib[index], end=" ")
                index += 1
        print()

number = int(input("Enter An Number : "))
fibonacci_pyramid(number)