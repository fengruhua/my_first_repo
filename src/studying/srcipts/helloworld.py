if __name__ == "__main__":
    b = 0
    a = [0]
    while(b !=","):
        b = input()
        a[-1] = b
        a.append(b)
    print(a)