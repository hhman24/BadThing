# Javascript Lesson 02

- ==**Các Toán Tử**==
  1. Toán tử số học - Arithmetic
  2. Toán tử gán - Assignment
  3. Toán tử so sánh - Comparison
  4. Toán tử logic - Logical

## 1. Arithmetic

```js
    var a = 10;
    console.log(a);
```

- Cộng: +
- trừ: -
- nhân: \*
- lũy thừa: \*\*
- chia: /
- chia lấy dư: %
- tăng 1 giá trị số: ++
- giảm giá trị một số: --
- Tiền tố(Prefix)
  > Tăng lên, trả về sau khi tính toán
- Hậu tố(Postfix)
  > Copy biến 'a', thực hiện tính toán sau đó trả về biến copy 'a'

```js
    var a = 7;
    var output = a++ - --a;

    console.log("output: ", output); // 7 - 7 = 0

    // Thức tế:
    // a++ trả về: 7
    // --a: nhận giá trị là 8 sau khi thực hiện a++
    // thực hiện tiếp theo nên trả về 7
```

## 2. Assignment

```js
var name = "hhman";
```

- Dấu = là toán tử so sánh
  |Toán tử |Ví dụ |
  |--- |--- |
  | = |x = y |
  | += |x += y |
  | -= |x -= y |
  | _= |x _= y |
  | /= |x /= y |
  | **= |x **= y |


## 3. Comparison

- === : so sánh bằng tuyệt đối so sánh kiểu dữ liệu
- !== :  
- Để so sánh dùng biểu thức điều kiện

```js
    var a = 10;
    var b = 10;

    if (a == b) // chỉ so sánh value
    {
    alert("true");
    }
```

## 4. Logical

- Thứ tự thực hiện trong toán tử logic

```js
    var a = 1;
    if(a == 0)
    {
        console.log('false');
    }
    else
    {
        console.log('true')
    }
```

- Kiểu dữ liệu boolean
```js
    var isSuccess = true;
```

- Có sáu giá trị: 0, false, '', undefinđe, NaN, null is false khi convert sang boolean [@]


- Toán tử logic: 
  1. && - and
  2. || - or (người dùng chỉ được dùng các đk sau)
  3. !  - not
  Toán tử and lun đọc từ vế trái sang vế phải,nếu không có [@] cầm giá trị cuối cùng gán vào làm giá trị, nếu có các trị [@] thì lấy lun giá trị đó, ngược lại là or - lấy lun ngay kí tự đầu tiên không phải
  
## 7. Kiểu dữ liệu
1. Dữ liệu nguyên thủy - Primitive Data
  - Number
    ```js
      var otherNumber = new Number(9); // Tránh cách khởi tạo một đối tượng nếu đơn giản
    ```
    - Một số phương thức thao tác với số: number method
    - .tostring() -> chuyển number thành string
    - .toFixef() -> muốn làm tròn số thập phân kiểu về lại string, chỉ muốn rút gọn số
  - String # note: muốn ghi được dấu ' -> \'
  - Boolean
  - Undefinded
  - Null
  - NaN: đại diện một kiểu số không hợp lệ
  - Symbol
    ```js
      var id = Symbol('id') // unque
    ```

Khi thực hiện chương trình tạo 1 vùng nhớ static

2. Dữ liệu phức tạp - Complex Data
  - Function
  Dữ liệu hàm, phương thức và những thuộc tính
  ```js
    var myFunction = function()
    {
      alert('hhman 20 age');
    }

    myFunction();
  ```
  - Object types
  ```js
    var myObject = {
      name: 'hhman',
      age: 20,
      adress: 'Khanh Hoa'
    };
  ```
  2 khái niệm giữa Array và Object
  Khá tương đồng với structure bên c/c++
  Chứa nhiều kiểu dữ liệu
  Reference data
  ==?== Con trỏ trong javascript

  ```js
    var myArray = [];
  ```
## 6. String operator
1. Tạo chuỗi:
  - Cách cách tạo chuỗi
    ```js
      var name = new String('hhman'); // c2
    ```
2. Một số case sử dụng backflash (\)
3. Xem độ dài của một chuỗi
4. Chú ý độ dài khi viết code
  ```js
    // trên một dòng có 80 kí tự
    // có thể dùng toán tử nối chuỗi
    var str = 'hhman ' +
                '20CLC01';
  ```
5. Template string ES6
  ```js
    var fName = 'Trọng';
    var lName = 'Đạt';

    console.log(`Toi la: ${fName} ${lName}`)
  ```
6. Thủ tục hàm:
  - Length
  - Find: IndexOf(), lastIndexOf(), search() (theo regular expression)
  - Cut string
  - Replace
  - convert to upper case
  - convert to lower case
  - Trim
  - Split
  - get a character by index