print("input")
angka = int(input())

print("output")

hari = angka // 86400
sisa_hari = angka % 86400

jam = sisa_hari //3600
sisa_jam = sisa_hari % 3600

menit = sisa_jam // 60
detik = sisa_jam % 60

if angka >= 0 and angka <= 60:
    print("00:00:{:02d}".format(detik))
elif angka > 60 and angka <=3599:
    print("00:{:02d}:{:02d}".format(menit, detik))
elif angka >= 3600 and angka <= 86399:
    print("{:02d}:{:02d}:{:02d}".format(jam, menit, detik))
else:
    print("{}hari:{:02d}:{:02d}:{:02d}".format(hari, jam, menit, detik))  

