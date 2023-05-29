# COMPILER

## I. Định nghĩa

Compiler là quá trình chuyển đổi từ ngôn ngữ bậc cao sang ngôn ngữ máy. Ngôn ngữ lập trình C là một ngôn ngữ **dạng biên dịch**. Chương trình được viết bằng C thì phải trải qua một quá trình biên dịch để chuyển đổi từ dạng mã nguồn sang chương trình dạng mã thực thi.

**Quá trình được chia làm 4 giai đoạn chính**

- Giai đoạn tiền xử lý (Pre-processor)

- Giai đoạn dịch NNBC sang Assembly (Compiler)

- Giai đoạn dịch Assembly sang ngôn ngữ máy (Assembler)

- Giai đoạn liên kết (Linker)

<img src = "https://tapit.vn/wp-content/uploads/2017/07/GCC_CompilationProcess.png">

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



