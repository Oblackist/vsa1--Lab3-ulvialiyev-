# Laboratoriya İşi № 3 — Növbə (Queue)

**Fənn:** Verilənlərin Strukturu və Alqoritmlər
**Tələbə:** Name Surname
**Qrup:** KOM25
**Müəllim:** Şamil Hümbətov
**Tarix:** October 13, 2026

## Məqsəd

C++-da `queue` strukturundan istifadə etməyi və FIFO (ilk gələn ilk çıxır) prinsipini öyrənmək.

---

## Məsələ 1: Aptekdə növbə

### Problem

Müştərilər aptekdə növbəyə düzülür. Yeni müştəri növbənin sonuna əlavə olunur. Dərmanını alan müştəri növbənin başından çıxır.

- **Giriş:** müştərinin adı və dərman adı
- **Çıxış:** əlavə/çıxarma mesajları və növbənin siyahısı
- **Struktur:** `queue<Musteri>`

### Alqoritm

1. `novbeyeElaveEt` — müştərini növbənin sonuna əlavə et.
2. `ilkMusteriniCixar` — növbə boşdursa xəbərdarlıq yaz. Əks halda ilk müştərini çıxar.
3. `novbeniCapEt` — bütün müştəriləri sıra ilə ekrana yaz.

### Kod

Fayl: `aptekde_novbe.cpp`

### Nəticə

```
Əli növbəyə əlavə olundu (Paracetamol)
Leyla növbəyə əlavə olundu (Aspirin)
Orxan növbəyə əlavə olundu (Vitamin C)
--- Növbə ---
1. Əli - Paracetamol
2. Leyla - Aspirin
3. Orxan - Vitamin C
Əli dərmanını (Paracetamol) aldı və növbədən çıxdı
--- Növbə ---
1. Leyla - Aspirin
2. Orxan - Vitamin C
```

---

## Məsələ 2: Avtobus dayanacağında növbə və prioritet

### Problem

65 yaşdan yuxarı sərnişinlər avtobusa prioritetlə minir. Qalanlar normal növbə ilə minir. Bunun üçün iki növbə işlədilir: yaşlılar və normal.

- **Giriş:** sərnişinin adı və yaşı
- **Çıxış:** əlavə/minmə mesajları və hər iki növbənin siyahısı
- **Struktur:** iki ədəd `queue<Sernisin>`

### Alqoritm

1. `novbeyeElaveEt` — yaş 65-dən böyükdürsə yaşlılar növbəsinə, əks halda normal növbəyə əlavə et.
2. `avtobusaMin` — yaşlılar növbəsi boş deyilsə oradan, boşdursa normal növbədən sərnişini çıxar. İkisi də boşdursa xəbərdarlıq yaz.
3. `novbeniCapEt` — hər iki növbəni ekrana yaz.

### Kod

Fayl: `avtobus_novbe.cpp`

### Nəticə

```
Ramin (66) yaşlılar növbəyə əlavə olundu
Elcin (70) yaşlılar növbəsinə əlavə olundu
Nihad (30) normal növbəyə əlavə olundu
Nuri (68) yaşlılar növbəsinə əlavə olundu
Seid (19) normal növbəyə əlavə olundu
--- Yaşlılar növbəsi ---
1. Ramin - 66 yaş
2. Elcin - 70 yaş
3. Nuri - 68 yaş
--- Normal növbə ---
1. Nihad - 30 yaş
2. Seid - 19 yaş


Ramin (66) prioritetlə avtobusa mindi
Elcin (70) prioritetlə avtobusa mindi
Nuri (68) prioritetlə avtobusa mindi

--- Yaşlılar növbəsi ---
(boşdur)
--- Normal növbə ---
1. Nihad - 30 yas
2. Seid - 19 yas
```

---

## Nəticə

Növbədə elementlər sona əlavə olunur və başdan çıxarılır. Birinci məsələdə sadə növbə, ikinci məsələdə iki növbə ilə prioritet sistemi.

## Kompilyasiya
