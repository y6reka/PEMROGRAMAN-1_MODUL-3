detik = int(input(""))

hasil_hari = detik // 86400
hasil_jam = (detik % 86400) // 3600

hasil_menit = (detik % 3600) // 60
hasil_detik = (detik % 60)

if hasil_hari > 0 :
    print(f"{hasil_hari} hari {hasil_jam:02}:{hasil_menit:02}:{hasil_detik:02}")
else :
    print(f"{hasil_jam:02}:{hasil_menit:02}:{hasil_detik:02}")
