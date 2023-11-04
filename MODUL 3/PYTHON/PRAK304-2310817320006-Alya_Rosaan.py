a = int(input())
if a > 0 and a <= 10:
    print("satuan")
elif a == 0:
    print("nol")
elif a >= 11 and a < 20:
    print("belasan")
elif a >= 20 and a < 100:
    print("puluhan")
else:
    print("Anda Menginput Melebihi Limit Bilangan")
    

