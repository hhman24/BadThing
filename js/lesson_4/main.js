// tạo hàm 
function showDialog() 
{
    // alert('Hello guys');
};

showDialog();

function arg()
{
    console.log(arguments)
};

arg('log 1', 'log 2', 'log 3');

// sử dụng vòng for of

function loop()
{
    // gần tương tự vòng for trong python
    var myString = ' ';
    for(var param of arguments)
    {
        myString += `${param} -`
    }
    console.log(myString)
};

loop('log', 'log', 'lol');

// return trong hàm
// var isConfirm = confirm('Message');

// console.log(isConfirm);

function add(a, b)
{
    return a + b;
}

var result = add(2, 3);

console.log(result);

// Default không trả về thì trả undifinded