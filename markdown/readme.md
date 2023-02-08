<!-- Markdown -->

## Tìm hiểu về MarkDown

### Cài đặt plugin:

- Markdown all in one
- Markdown Preview Enhance
- cần xóa keyboard shorcuts: markdown.extension.onBackspacekey để viết tiếng việt

### Formatting

- **bôi đậm đen**
- _In nghiên_
- **_đậm vừa in nghiên_**
- ~~Gạch Ngang~~
- Để giữ lại các kí tự bình thường dung \:\*
- Nhấn mạnh `một đoạn văn thông thường`
  > đây là một `quotation`
  > hahaha

### Table

- canh lề cho bảng bằng dấu :

| #   | 2    |          3 |
| --- | ---- | ---------: |
| 1   | haha | hay qua ha |
| 1   | haha | hay qua ha |
| 1   | haha | hay qua ha |

### Code block

```c
void main()
{
  printf_s("Hello world");
  return 0;
}
```

### Gạch ngang

---

---

### Chèn link

[Đây là link google](https://google.com)
format link: <**https://google.com**>
Cách viết khác:

> [gg][1] phải chừa ít nhất một dòng trống
>
> [1]: https://google.com

### Chèn hình ảnh

cú pháp truyền ảnh
![markdown](1.jfif)

### Vẽ biểu đồ

dùng mermaid: [mermaid](https://mermaid-js.github.io/mermaid/#/)

### Import file

@import "file"

### Math

Viết công thức toán học cần đặt giữa $$

$\alpha$
số ở trên dưới
$x^2$
$x_i$

Mũi tên: $\to$
Vô cùng: $\infty$
phân số: $\frac{a}{b}$
căn thức: $\sqrt[n]{k}$

trang tạo code cho phần toán học:
<https://www.latex4technics.com/>

normal Text content one

&nbsp;&nbsp;&nbsp;&nbsp;indented Text content one

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;indented more  
Text content one

normal Text content one

</br>newline

## <mark style="background-color: #FFFF00">Các toán tử</mark>

Đây là một ghi chú[^1]

[^1]: và đây là diễn giải footnote

<!-- end -->
