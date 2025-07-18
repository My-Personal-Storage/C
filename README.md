![Banner Repositori Petualangan C Farhan Ginting](assets/banner.png)
# 🚀 Petualangan di Dunia C

![Language](https://img.shields.io/badge/Language-C-blue.svg) ![Compiler](https://img.shields.io/badge/Compiler-GCC-lightgrey.svg) ![IDE](https://img.shields.io/badge/IDE-VSCode-blueviolet.svg) ![License](https://img.shields.io/badge/License-MIT-green.svg)

Siapa bilang belajar bahasa C itu kuno dan membosankan? Repositori ini adalah jurnal digital saya, **Farhan Ginting**, dalam menaklukkan salah satu bahasa pemrograman paling fundamental sebagai bekal pemahaman dasar dan fundamental yang penting terkait pemrograman.

Di sini, saya mendokumentasikan setiap langkah, setiap algoritma, dan setiap logika yang saya pelajari dalam sebuah roadmap yang terstruktur. Selamat datang di petualangan saya!

---

### 📖 Tentang Repositori Ini

Repositori ini adalah kumpulan kode latihan pribadi saya sebagai mahasiswa **Teknologi Rekayasa Perangkat Lunak** di **Politeknik Negeri Subang**. Tujuannya sederhana: membangun fondasi pemrograman yang kokoh dengan memahami konsep-konsep inti melalui bahasa C. Setiap folder mewakili satu tahap pencapaian dalam perjalanan belajar saya.

Sebagai bentuk apresiasi, sebagian besar inspirasi dan materi latihan awal di repositori ini berasal dari **[W3Schools](https://www.w3schools.com/c/)**, sebuah sumber belajar online yang luar biasa bagi para pemula.

---

### 🗺️ Roadmap Pembelajaran C

Berikut adalah peta perjalanan saya dalam menguasai Bahasa C, dari dasar hingga proyek akhir.

| No. | Status | Nama Folder | Topik Utama yang Dipelajari |
|:---:|:---:|:---|:---|
| 1. | ✅ | `[Started](#1-started)` | Sintaks Dasar, `main()`, `printf()`, Kompilasi dengan GCC |
| 2. | ✅ | `[Variables & DataTypes](#2-variables--datatypes)` | `int`, `char`, `float`, `double`, `sizeof`, Konstanta |
| 3. | ✅ | `[Input & Output](#3-input--output)` | `scanf()`, `getchar()`, Format Specifiers (`%d`, `%f`, `%c`, `%s`) |
| 4. | ✅ | `[Operators](#4-operators)` | Aritmatika, Penugasan, Relasional, Logika, Bitwise |
| 5. | ✅ | `[Conditional: If-Else](#5-conditional-if-else)` | `if`, `else if`, `else`, Nested If, Operator Ternary |
| 6. | ✅ | `[Conditional: Switch](#6-conditional-switch)` | `switch`, `case`, `break`, `default` |
| 7. | ✅ | `[Looping: While](#7-looping-while)` | `while`, `do-while`, `break`, `continue` |
| 8. | ✅ | `[Looping: For](#8-looping-for)` | `for`, Nested For (membuat pola bintang, dll.) |
| 9. | ✅ | `[Arrays](#9-arrays)` | Deklarasi, Inisialisasi, Akses Elemen, Iterasi Array |
| 10. | ✅ | `[Multidimensional Arrays](#10-multidimensional-arrays)` | Array 2D, Akses `array[row][col]`, Nested Loop |
| 11. | ✅ | `[Strings](#11-strings)` | Char Array, Null Terminator (`\0`), `strlen()`, `strcpy()`, `strcmp()` |
| 12. | ✅ | `[Functions](#12-functions)` | Deklarasi, Parameter, Argumen, `return`, Prototipe Fungsi |
| 13. | ✅ | `[Scope & Storage Classes](#13-scope--storage-classes)` | Variabel Lokal & Global, `static`, `extern` |
| 14. | ✅ | `[Pointers](#14-pointers)` | Operator `&` dan `*`, Deklarasi Pointer, NULL Pointer |
| 15. | ✅ | `[Pointers and Arrays](#15-pointers-and-arrays)` | Pointer Aritmatika, Akses Array dengan Pointer |
| 16. | ✅ | `[Pointers and Functions](#16-pointers-and-functions)` | Mengubah nilai argumen asli dari dalam fungsi |
| 17. | ✅ | `[Dynamic Memory](#17-dynamic-memory)` | `malloc()`, `calloc()`, `realloc()`, `free()` |
| 18. | ✅ | `[Structs](#18-structs)` | `struct`, Akses member dengan `.` dan `->` |
| 19. | ✅ | `[Unions & Enums](#19-unions--enums)` | `union`, `enum` |
| 20. | ✅ | `[File I/O](#20-file-io)` | `FILE`, `fopen()`, `fclose()`, `fprintf()`, `fscanf()`, `fgets()` |
| 21. | ✅ | `[Preprocessor](#21-preprocessor)` | `#include`, `#define` (Makro), Kompilasi Kondisional |
| 22. | ✅ | `[Advanced Topics](#22-advanced-topics)` | Rekursi, Function Pointers, Argumen Command-Line (`argc`, `argv`) |
| 23. | ✅ | `[Project](#23-project)` | Proyek akhir untuk menerapkan semua konsep yang telah dipelajari. |

---
### 📌 Detail Roadmap

<details>
<summary>➡️ Klik di sini untuk melihat detail setiap tahap pembelajaran</summary>


<a name="1-started"></a>
#### 1. Started
Langkah pertama di dunia C: menulis dan menjalankan program "Hello, World!".
* **Contoh Kode Kunci:**
    ```c
    #include <stdio.h>
    int main() {
        printf("Hello, World!");
        return 0;
    }
    ```
[⬆️ Kembali ke Atas](#-roadmap-pembelajaran-c)

---
<a name="2-variables--datatypes"></a>
#### 2. Variables & DataTypes
Mempelajari cara mendeklarasikan "wadah" data dan tipe-tipenya.
* **Contoh Kode Kunci:**
    ```c
    int age = 20;
    float gpa = 3.85;
    char grade = 'A';
    ```
[⬆️ Kembali ke Atas](#-roadmap-pembelajaran-c)

---
<a name="3-input--output"></a>
#### 3. Input & Output
Membuat program menjadi interaktif dengan menerima input dari pengguna.
* **Contoh Kode Kunci:**
    ```c
    int age;
    printf("Masukkan umur Anda: ");
    scanf("%d", &age);
    printf("Umur Anda adalah: %d tahun", age);
    ```
[⬆️ Kembali ke Atas](#-roadmap-pembelajaran-c)

---
<a name="4-operators"></a>
#### 4. Operators
Menggunakan operator untuk melakukan berbagai operasi matematika dan logika.
* **Contoh Kode Kunci:**
    ```c
    int x = 10, y = 5;
    int sum = x + y; // Hasil 15
    int isGreater = x > y; // Hasil 1 (true)
    ```
[⬆️ Kembali ke Atas](#-roadmap-pembelajaran-c)

---
<a name="5-conditional-if-else"></a>
#### 5. Conditional: If-Else
Mengontrol alur program agar bisa mengambil keputusan berdasarkan kondisi.
* **Contoh Kode Kunci:**
    ```c
    int score = 85;
    if (score >= 75) {
        printf("Lulus!");
    } else {
        printf("Gagal.");
    }
    ```
[⬆️ Kembali ke Atas](#-roadmap-pembelajaran-c)

---
<a name="6-conditional-switch"></a>
#### 6. Conditional: Switch
Alternatif `if-else` untuk menangani banyak kemungkinan nilai dari satu variabel.
* **Contoh Kode Kunci:**
    ```c
    char grade = 'B';
    switch (grade) {
        case 'A': printf("Luar Biasa!"); break;
        case 'B': printf("Bagus!"); break;
        default: printf("Cukup.");
    }
    ```
[⬆️ Kembali ke Atas](#-roadmap-pembelajaran-c)

---
<a name="7-looping-while"></a>
#### 7. Looping: While
Mengulang eksekusi kode selama sebuah kondisi terpenuhi.
* **Contoh Kode Kunci:**
    ```c
    int i = 1;
    while (i <= 5) {
        printf("%d ", i); // Output: 1 2 3 4 5
        i++;
    }
    ```
[⬆️ Kembali ke Atas](#-roadmap-pembelajaran-c)

---
<a name="8-looping-for"></a>
#### 8. Looping: For
Perulangan yang ideal ketika jumlah iterasi sudah diketahui sebelumnya.
* **Contoh Kode Kunci:**
    ```c
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i); // Output: 1 2 3 4 5
    }
    ```
[⬆️ Kembali ke Atas](#-roadmap-pembelajaran-c)

---
<a name="9-arrays"></a>
#### 9. Arrays
Menyimpan banyak data dengan tipe yang sama dalam satu variabel.
* **Contoh Kode Kunci:**
    ```c
    int scores[] = {80, 95, 78, 92, 88};
    printf("Nilai kedua: %d", scores[1]); // Output: 95
    ```
[⬆️ Kembali ke Atas](#-roadmap-pembelajaran-c)

---
<a name="10-multidimensional-arrays"></a>
#### 10. Multidimensional Arrays
Mengorganisir data dalam bentuk baris dan kolom seperti tabel.
* **Contoh Kode Kunci:**
    ```c
    int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} };
    printf("Elemen: %d", matrix[1][1]); // Output: 5
    ```
[⬆️ Kembali ke Atas](#-roadmap-pembelajaran-c)

---
<a name="11-strings"></a>
#### 11. Strings
Bekerja dengan data teks yang merupakan array dari karakter.
* **Contoh Kode Kunci:**
    ```c
    char name[] = "Farhan";
    printf("Halo, %s!", name);
    ```
[⬆️ Kembali ke Atas](#-roadmap-pembelajaran-c)

---
<a name="12-functions"></a>
#### 12. Functions
Memecah program menjadi modul-modul kecil yang dapat digunakan kembali.
* **Contoh Kode Kunci:**
    ```c
    int add(int a, int b) {
        return a + b;
    }
    int sum = add(10, 5); // sum akan bernilai 15
    ```
[⬆️ Kembali ke Atas](#-roadmap-pembelajaran-c)

---
<a name="13-scope--storage-classes"></a>
#### 13. Scope & Storage Classes
Memahami siklus hidup dan visibilitas dari sebuah variabel.
* **Contoh Kode Kunci:**
    ```c
    void myFunction() {
        static int count = 0; // Hanya diinisialisasi sekali
        count++;
        printf("Dipanggil %d kali", count);
    }
    ```
[⬆️ Kembali ke Atas](#-roadmap-pembelajaran-c)

---
<a name="14-pointers"></a>
#### 14. Pointers
Kekuatan super di C: variabel yang menyimpan alamat memori variabel lain.
* **Contoh Kode Kunci:**
    ```c
    int x = 10;
    int *ptr = &x; // ptr menunjuk ke alamat x
    printf("Nilai x: %d", *ptr); // Output: 10
    ```
[⬆️ Kembali ke Atas](#-roadmap-pembelajaran-c)

---
<a name="15-pointers-and-arrays"></a>
#### 15. Pointers and Arrays
Mendalami bagaimana pointer dan array sebenarnya adalah dua sisi dari koin yang sama.
* **Contoh Kode Kunci:**
    ```c
    int arr[] = {10, 20, 30};
    // arr[i] sama dengan *(arr + i)
    printf("Elemen pertama: %d", *arr); // Output: 10
    ```
[⬆️ Kembali ke Atas](#-roadmap-pembelajaran-c)

---
<a name="16-pointers-and-functions"></a>
#### 16. Pointers and Functions
Mengirim alamat data ke fungsi untuk memodifikasi nilai aslinya.
* **Contoh Kode Kunci:**
    ```c
    void addFive(int *val) {
        *val += 5;
    }
    int num = 10;
    addFive(&num); // num sekarang bernilai 15
    ```
[⬆️ Kembali ke Atas](#-roadmap-pembelajaran-c)

---
<a name="17-dynamic-memory"></a>
#### 17. Dynamic Memory
Mengalokasikan memori secara dinamis saat program berjalan.
* **Contoh Kode Kunci:**
    ```c
    int *arr = (int*) malloc(5 * sizeof(int));
    if (arr != NULL) {
      // Gunakan array
    }
    free(arr); // Jangan lupa bebaskan memori!
    ```
[⬆️ Kembali ke Atas](#-roadmap-pembelajaran-c)

---
<a name="18-structs"></a>
#### 18. Structs
Membuat tipe data kompleks sendiri dengan menggabungkan beberapa tipe data.
* **Contoh Kode Kunci:**
    ```c
    struct Mahasiswa {
        char nama[50];
        int npm;
    };
    struct Mahasiswa mhs1;
    strcpy(mhs1.nama, "Farhan");
    ```
[⬆️ Kembali ke Atas](#-roadmap-pembelajaran-c)

---
<a name="19-unions--enums"></a>
#### 19. Unions & Enums
Mempelajari tipe data khusus untuk efisiensi memori dan konstanta yang mudah dibaca.
* **Contoh Kode Kunci:**
    ```c
    enum Hari { SENIN, SELASA, RABU, KAMIS, JUMAT };
    enum Hari hariIni = RABU; // hariIni bernilai 2
    ```
[⬆️ Kembali ke Atas](#-roadmap-pembelajaran-c)

---
<a name="20-file-io"></a>
#### 20. File I/O
Berinteraksi dengan file: membaca dan menulis data secara permanen.
* **Contoh Kode Kunci:**
    ```c
    FILE *fptr = fopen("catatan.txt", "w");
    fprintf(fptr, "Belajar C itu seru!");
    fclose(fptr);
    ```
[⬆️ Kembali ke Atas](#-roadmap-pembelajaran-c)

---
<a name="21-preprocessor"></a>
#### 21. Preprocessor
Perintah untuk compiler yang dieksekusi sebelum proses kompilasi utama.
* **Contoh Kode Kunci:**
    ```c
    #define PI 3.14159
    double luasLingkaran = PI * r * r;
    ```
[⬆️ Kembali ke Atas](#-roadmap-pembelajaran-c)

---
<a name="22-advanced-topics"></a>
#### 22. Advanced Topics
Menyelami topik-topik lanjutan untuk melengkapi pemahaman C.
* **Contoh Kode Kunci:**
    ```c
    // Function Pointer
    int (*op_ptr)(int, int) = add;
    int hasil = op_ptr(5, 5); // Sama seperti memanggil add(5,5)
    ```
[⬆️ Kembali ke Atas](#-roadmap-pembelajaran-c)

---
<a name="23-project"></a>
#### 23. Project
Menerapkan semua ilmu yang telah dipelajari untuk membangun sebuah aplikasi kecil.
* **Ide Proyek:**
    * Sistem Manajemen Kontak Sederhana
    * Program Kasir Toko
    * Aplikasi Perpustakaan Mini
[⬆️ Kembali ke Atas](#-roadmap-pembelajaran-c)

</details>

---
### 🛠️ Cara Menggunakan

Merasa tertantang untuk mencoba kode-kode ini? Gampang!

1.  **Clone repositori ini:**
    ```bash
    git clone [https://github.com/My-Personal-Storage/C.git](https://github.com/My-Personal-Storage/C.git)
    ```

2.  **Masuk ke direktori:**
    ```bash
    cd C
    ```

3.  **Compile & Jalankan file yang kamu mau di dalam folder masing-masing:**
    Gunakan compiler `gcc`. Contohnya, untuk menjalankan file di dalam folder `09.Arrays`:
    ```bash
    # Compile program
    gcc 09.Arrays/nama_file.c -o output_program

    # Jalankan hasil compile
    ./output_program
    ```

---
### 🤝 Mari Terhubung!

Saya sangat terbuka untuk diskusi, masukan, atau sekadar bertukar pikiran tentang dunia *coding*. Jangan ragu untuk menghubungi saya!

* **LinkedIn:** [Farhan Ginting](https://linkedin.com/in/farhan-ginting/),
* **GitHub:** [Proxima a.k.a Farhan Ginting](https://github.com/FarhanGinting),
* **Email:** [farhangintingforwork@gmail.com](https://farhangintingforwork@gmail.com)