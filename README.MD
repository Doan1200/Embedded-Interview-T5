# COMPILER

## I. Định nghĩa

Compiler là quá trình chuyển đổi từ ngôn ngữ bậc cao sang ngôn ngữ máy. Ngôn ngữ lập trình C là một ngôn ngữ **dạng biên dịch**. Chương trình được viết bằng C thì phải trải qua một quá trình biên dịch để chuyển đổi từ dạng mã nguồn sang chương trình dạng mã thực thi.

**Quá trình được chia làm 4 giai đoạn chính**

- Giai đoạn tiền xử lý (Pre-processor)

- Giai đoạn dịch NNBC sang Assembly (Compiler)

- Giai đoạn dịch Assembly sang ngôn ngữ máy (Assembler)

- Giai đoạn liên kết (Linker)

<img src = "https://tapit.vn/wp-content/uploads/2017/07/GCC_CompilationProcess.png">

>Code xem file main.i: **gcc -E main.c -o main.i**

>Code xem file main.s: **gcc main.i -s -o main.s**

>ASSEMBLY CODE: Học codde này mới có thể viết được hệ điều hành RTOS

>Ngôn ngữ C: **Thao tác** với thanh ghi, lấy data từ thanh ghi và ghi data vào thanh ghi đó

>Assembly: Có thể chuyển từ địa chỉ này sang địa chỉ khác có thể quản lý bộ nhớ


## II. Hoạt động

**1. Giai đoạn tiền xử lý - Preprocessor**

Giai đoạn này sẽ thực hiện:

- Nhận mã nguồn.

- **Xóa bỏ** tất cả các chú thích, comment của CT.

- Chỉ thị **tiền xử lý** (Bắt đầu bằng dấu #) cũng được xử lý.

> Ví dụ: Chỉ thị #include cho phép ghép thêm mã chưong trình của một tệp tiêu đề để vào mã nguồn cần dịch. Các hằng số được định nghĩa bằng #define sẽ được thay thế bằng gía trị cụ thế tại mỗi nơi sử dụng của chương trình.

**2. Giai đoạn dịch NNBC sang ASSEMBLY**

- Phân tích cú pháp **(syntac)** của mã nguồn NNBC.

- Chuyển chúng sang dạng mã Assembly là một ngôn ngữ bậc thấp **(hợp ngữ)** gần với tập lệnh của vi xử lý.

**3. Công đoạn dịch ASSEMBLY**

- Dịch chương trình sang mã máy 0 và 1.

- Một tệp mã máy **(.obj)** sinh ra trong hệ thống.

**4. Giai đoạn linker**

- Trong giai đoạn này mã máy của một chương trình dịch từ nhiều nguồn **(file.c hoặc thư viện .lib)** **liên kết** lại tạo thành một chương trình đích duy nhất.

- Kết thúc quá trình tất cả đối tượng liên kết lại với nhau thành một chương trình có thể thực thi được (.exe).

# PHÂN VÙNG NHỚ

<img src= "https://lh4.googleusercontent.com/OdFcHDJs5fihfwLpauohyVVnneoZTIl5cTT9vJe-lVrLlip8BvYm3FU7SMgY7b5O27YyBNhlnecLC6bNV5iUTvIdC8H8Wo9gBxBVorFx2DarPgwQAf5FvfCKjLbt3Di1GXKSfJps">


## I. Vùng nhớ

- **Text**:

>Quyền truy cập: **Read** và nó chưa lệnh để thực thi nên tránh sửa đổi instruction

>Chứa khai báo **hằng** số trong chương trình (.rodata)

- **DATA**

>Quyền truy cập: **Read - Write**

>Chứa biến **toàn cục or static != 0**

>Được giải phóng khi kết thúc chương trình

- **BSS**

>Quyền truy cập: **Read - Write**

>Chứa biến **toàn cục or static == 0**

>Được giải phóng khi kết thúc chương trình

- **Stack**

>Quyền truy cập: **Read - Write**

>Được sử dụng cấp phát cho **biến local, input parameter của hàm,..**

>Được giải phóng khi ra khỏi block code/ hàm

- **HEAP**

>Quyền truy cập: **Read - Write**

>Được dùng để cấp phát bộ nhớ động Malloc, Calloc,...

>Được giải phóng khi được gọi hàm **free,...**

**Stack và Heap**

>Bộ nhớ Heap và Stack bản chất đều cùng là vùng nhớ được tạo ra và lưu trữ trong RAM khi chương trình được thực thi

>Bộ nhớ **Stack** được dùng để lưu biến **cục bộ trong hàm, tham số truyền vào,...** Truy cập vào bộ nhớ này **rất nhanh** và được thực thi khi chương trình được biên dịch

>Bộ nhớ **Heap** được dùng để lưu trũ vùng nhớ cho những biến con trỏ được **cấp phát động** bởi các hàm Malloc, Calloc, Realloc (Trong C)


**Kích thước vùng nhớ**

>Stack: Cố định

>Heap: Không cố định, có thể tăng giảm do đó đáp ứng được nhu cầu lưu trữ dữ liệu

**Đặc điểm vùng nhớ**

>Stack: Quản lý bởi hệ điều hành, dữ liệu trong stack sẽ **tự động hủy** khi hàm thực hiện xong chương trình

>Heap: Không bị hủy khi hàm thực hiện xong, sử dụng **free (trong C), delete hoặc delete[] (trong C++)** để giải phóng bộ nhớ

## II. Cú pháp sử dụng cấp phát bộ nhớ động

``` sh
<kiểu_dữ_liệu> *<tên_con_trỏ> = (kiểu_dữ_liệu *) malloc(kích thước);
```
***Ví dụ:***

``` sh
uint8_t *ptr = (uint8_t *) malloc(sizeof(uint8_t)*5);
```

>**Trong đó:**

>**<kiểu_dữ_liệu>** là kiểu dữ liệu mà con trỏ sẽ trỏ tới (Ví dụ: **int, float,...**)

>**<tên_con_trỏ>** là tên co trỏ được khai báo

>**<kích_thước>** là số byte cần cấp cho con trỏ (Ví dụ: **uint8_t,...**)

**Để thay đổi kích thước mảng ta sử dụng Realloc**

``` sh
<tên_con_trỏ> = (kiểu_dữ_liệu*) realloc(<con_trỏ_cũ>, kích_thước_mới);
```

***Ví dụ:***

``` sh
ptr = (uint8_t*)realloc(ptr, sizeof(uint8_t)*7);
```

# MACRO FUNTION

## I. ĐỊNH NGHĨA

>Diễn ra ở quá trình tiền xử lý

>**Bản chất của Macro:** Thay thế, định nghĩa vào đoạn code mà chúng ta gọi

**Lưu ý:**

>Size của macro **lớn**, bởi vì mỗi quá trình gọi Macro thì nó sẽ tạo ra 1 hàm

>Tuy nhiên tốc độ xử lý của Macro lại **nhanh**

>Ngược lại thì khi sử dụng hàm thì kích thước **nhỏ** và tốc độ xử lý **thấp**


# THAO TÁC BIT






