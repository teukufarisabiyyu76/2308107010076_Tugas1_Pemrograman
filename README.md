# Program 1 konversi bilangan ke bentuk lainnya
program ini dapat mengkonversi bilangan ke bentuk lainnya seperti desimal, biner dan octal.
# description
Program konversi bilangan memiliki beberapa kegunaan yang berguna, di antaranya:

1. **Pendidikan**: Program ini dapat digunakan sebagai alat pembelajaran untuk memahami konsep konversi bilangan dari sistem desimal ke sistem biner dan oktal. Ini bisa menjadi alat bantu yang bagus untuk mahasiswa atau siswa yang belajar tentang sistem bilangan.

2. **Pengembangan Perangkat Lunak**: Dalam pengembangan perangkat lunak, terutama dalam bidang yang berkaitan dengan pemrograman terkait hardware atau low-level, pemahaman konversi bilangan menjadi penting. Program ini bisa digunakan untuk mengonversi bilangan desimal menjadi bentuk biner atau oktal, yang mungkin dibutuhkan dalam pengembangan perangkat keras atau perangkat lunak yang berkaitan dengan pemrograman tingkat rendah.

3. **Verifikasi**: Program ini dapat digunakan untuk memverifikasi hasil konversi bilangan dari sumber lain. Misalnya, jika ada program atau perangkat lain yang melakukan konversi bilangan, hasilnya dapat dibandingkan dengan hasil yang diberikan oleh program ini untuk memastikan keakuratannya.

4. **Debugging**: Dalam pengembangan perangkat lunak, terkadang perlu untuk memeriksa representasi biner atau oktal dari suatu bilangan desimal untuk tujuan debugging atau analisis. Program ini dapat digunakan secara cepat untuk mengonversi bilangan desimal menjadi bentuk biner atau oktal untuk tujuan tersebut.

5. **Pengujian Fungsionalitas**: Program ini juga dapat digunakan sebagai bagian dari pengujian fungsionalitas perangkat lunak yang lebih besar. Dengan menggunakan program ini, pengujian dapat dilakukan untuk memastikan bahwa konversi bilangan berfungsi dengan benar dalam aplikasi yang lebih kompleks.

Dengan demikian, program konversi bilangan memiliki beragam kegunaan yang bermanfaat, baik sebagai alat pembelajaran, alat bantu dalam pengembangan perangkat lunak, atau untuk tujuan verifikasi dan debugging.

# program
Berikut adalah langkah-langkah dalam membuat program konversi bilangan ke bentuk desimal, biner, dan oktal menggunakan bahasa pemrograman C:

	1.	Inklusi Library: Mulailah dengan menyertakan library yang diperlukan untuk input-output, misalnya stdio.h.
	2.	Deklarasi Fungsi: Deklarasikan fungsi-fungsi yang akan digunakan dalam program, seperti fungsi konversi bilangan ke biner dan oktal.
	3.	Implementasi Fungsi Konversi: Implementasikan fungsi-fungsi untuk mengonversi bilangan ke bentuk biner dan oktal. Anda dapat menggunakan operasi aritmatika dan bitwise untuk melakukan konversi ini.
	4.	Fungsi Main: Tulis fungsi main() yang akan bertanggung jawab untuk menerima input dari pengguna, memanggil fungsi konversi, dan mencetak hasilnya ke layar.
	5.	Validasi Input: Pastikan untuk memvalidasi input yang diberikan oleh pengguna untuk memastikan bahwa itu adalah bilangan bulat atau sesuai dengan format yang diharapkan.
	6.	Cetak Output: Setelah konversi selesai, cetak hasilnya ke layar agar pengguna dapat melihat representasi biner dan oktal dari bilangan yang diberikan.
	7.	Uji dan Debugging: Uji program dengan memberikan berbagai jenis input dan periksa apakah hasil konversi sesuai dengan yang diharapkan. Jika ada kesalahan, lakukan debugging dan perbaikan yang diperlukan.

 # Penggunaan
 Untuk mengeksekusi program yang telah dibuat, program tersebut yang telah dibuat pada text editor di compile terlebih dahulu, compilenya bisa dilakukan dengan gcc 2308107010076_1.c -o 2308107010076_1. Untuk mengeksekusi dapat dilakukan dengan ./2308107010076_1.

 # program 2 : tahun kabisat
 program ini berisi kode yang digunakan untuk mengetahui tahun yg diinput adalah kabisat atau tidak

 # description
 Sistem penanggalan yang digunakan Excel didasarkan pada kalender Gregorian, yang pertama kali ditetapkan pada tahun 1582 oleh Paus Gregorius XIII. Kalender ini dirancang untuk memperbaiki kesalahan yang disebabkan oleh kalender Julian yang kurang akurat.
Dalam kalender Masehi, satu tahun normal terdiri dari 365 hari. Karena panjang tahun sideris yang sebenarnya (waktu yang dibutuhkan Bumi untuk sekali mengelilingi Matahari) adalah 365,2425 hari, maka "tahun kabisat" sebanyak 366 hari digunakan setiap empat tahun sekali untuk menghilangkan kesalahan yang disebabkan oleh tiga tahun normal ( tapi pendek) tahun. Setiap tahun yang habis dibagi 4 adalah tahun kabisat: misalnya 1988, 1992, dan 1996 adalah tahun kabisat.
Namun, masih ada kesalahan kecil yang harus dipertanggungjawabkan. Untuk menghilangkan kesalahan ini, kalender Masehi menetapkan bahwa tahun yang habis dibagi 100 (misalnya 1900) adalah tahun kabisat hanya jika tahun tersebut juga habis dibagi 400.

# program
Berikut langkah-langkah untuk membuat program tahun kabisat di C:

	1.	Inklusi Library: Mulailah dengan menyertakan library yang diperlukan, misalnya stdio.h, untuk input-output.
	2.	Fungsi Utama: Tulis fungsi main() yang akan bertanggung jawab untuk menerima input tahun dari pengguna dan memeriksa apakah tahun tersebut adalah tahun kabisat atau tidak.
	3.	Input Tahun: Dalam fungsi main(), minta pengguna untuk memasukkan tahun yang akan diperiksa.
	4.	Verifikasi Tahun: Tentukan aturan untuk menentukan apakah tahun tersebut adalah tahun kabisat atau tidak. Tahun kabisat adalah tahun yang habis dibagi oleh 4, kecuali tahun-tahun yang habis dibagi oleh 100 tetapi tidak habis dibagi oleh 400.
	5.	Cek Kabisat: Implementasikan logika untuk memeriksa apakah tahun yang dimasukkan pengguna adalah tahun kabisat atau tidak.
	6.	Output Hasil: Cetak hasil verifikasi apakah tahun tersebut adalah tahun kabisat atau tidak ke layar.
# penggunaan
Untuk mengeksekusi program yang telah dibuat, program tersebut harus di compile terlebih dahulu agar bahasa C tersebut dapat diterjemahkan oleh bahasa komputer. Compile dapat dilakukan dengan cara gcc 2308107010076_2.c -o 2308107010076_2. Kemudian di eksekusi dengan ./2308107010076_2.

# editor
Program ini dibuat oleh Teuku Faris Abiyyu, dengan NPM 2308107010076.
