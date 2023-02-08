// Lesson 2
console.log("Xin Chào Bài Học 02")

// Tọa biến 
var a = 7;
var output = a++ - --a;

console.log('output: ', output); // 7 - 7 = 0

// Toán tử chuỗi

var fName = 'Trọng';
var lName = 'Đạt';

console.log(fName + ' ' + lName);

// Kiểu boolen
var isSuccess = true;

console.log(isSuccess);

var fName = 'Trọng';
var lName = 'Đạt';

// template string
console.log(`Tôi là: ${fName} ${lName}`)

// Các thủ tục hàm của string
var str = 'Học JS';

console.log('Độ dài chuỗi',str.length);

console.log('JS in str: ', str.indexOf('JS')); // không tìm kiếm được trả về -1
console.log('JS in str theo biểu thức chính qui: ', str.search('JS')); // không tìm kiếm được trả về -1

console.log('Cắt chuỗi:', str.slice(0)); // index -1 như python

console.log('Replace chuỗi: ', str.replace('JS', 'javascripts')); // thay thê chuỗi
console.log('Replace chuỗi: ', str.replace(/JS/g, 'javascripts')); // thay thê chuỗi bằng regular expression

console.log('Viết hoa tất cả kí tự: ', str.toUpperCase());
console.log('Viết thường tất cả kí tự: ', str.toLowerCase());

console.log('Loại bỏ khoảng trắng ở đầu cuỗi chuỗi: ', str.trim());

var languages = 'js, c++, ruby'
console.log('Cắt một chuỗi thành array', languages.split(', '));