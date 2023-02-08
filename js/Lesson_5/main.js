// polyfill
// có thêm vào để chạy các trình duyệt cũ
if (!String.prototype.includes) // nếu có chuỗi tồn tại
{
    // định nghĩa ra phương thức
    String.prototype.includes = function(search, start){
        'use strict'; // chế độ nghiêm ngoặt
        
        // kiểm tra tính hợp lệ Regular Express
        if (search instanceof RegExp) {
            throw TypeError('first argument must not be a RegExp');
        }
        // Nếu không truyền vào tự định nghĩa bắt đầu 0
        if (start == undefined) { start = 0; }
        // con trỏ this sử dụng indexOf
        return this.indexOf(search, start) !== -1;
    };
}