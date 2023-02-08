// Hello this is lesson 03

var languages = [
    'js',
    'Php',
    'Ruby'
];

// console.log(languages);

// var arr = new Array(3); // không nên tạo

console.log('Biến array thành một chuỗi: ' + languages.toString());
console.log('Join thành chuỗi: ' + languages.join('-'));

console.log('Xóa phần tử cuối mảng:',languages.pop()); // trả về phần tử đã xóa
// Không có phần nào xóa thì trả về undefinded

console.log('Thêm một hay nhiều phần tử cuối mảng: ', languages.push('Dart'));
// trả về độ dài mới của mảng

console.log('Xóa phần tử đầu mảng: ', languages.shift())
// trả về phần tử đầu tiên bị xóa

console.log('Thêm một hay nhiều phần tử vào đầu mảng: ', languages.unshift('C++'));

// xóa phần tử của mảng
console.log('Xóa phần tử của mảng: ', languages.splice(0,1));
// có thể chèn thêm một phần tử
console.log('Chèn một phần tử vào mảng: ', languages.splice(1, 0, 'html', 'css'));

// Dùng để nối 2 array
var users = [
    'hhman',
    'Trọng Đạt'
];

console.log('Nối 2 array: ', languages.concat(users));

// có thể nói là sao chép chuỗi
console.log('Sao chép 1 array: ',languages.slice(0));

console.log(languages)