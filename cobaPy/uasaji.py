# SOAL 1
def soal1():
  jamkerja = int(input("Masukkan jam kerja per minggu: "))

  upah = 0

  if (jamkerja >= 50 and jamkerja <= 60):
    upah = jamkerja * 5000

  elif (jamkerja > 60):
    upah = (60 * 5000) + ((jamkerja-60) * 7500)

  elif (jamkerja < 50):
    upah = (jamkerja * 5000) - ((50-jamkerja) * 2500)

  print("Upah yang didapat adalah Rp", upah)

# SOAL 2
def soal2():
  def penambahan(a, b):
    return a + b

  def pengurangan(a, b):
    return a - b

  def perkalian(a, b):
    return a * b

  def pembagian(a, b):
    return a / b

  a = int(input("Masukkan nilai a: "))
  b = int(input("Masukkan nilai b: "))

  print("Hasil penambahan", a, "dan", b, "adalah", penambahan(a, b))
  print("Hasil pengurangan", a, "dan", b, "adalah", pengurangan(a, b))
  print("Hasil perkalian", a, "dan", b, "adalah", perkalian(a, b))
  print("Hasil pembagian", a, "dan", b, "adalah", pembagian(a, b))

if __name__ == "__main__":
  soal1()
  soal2()