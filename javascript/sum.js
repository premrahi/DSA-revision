function sum(...args) {
    let s = 0;
    args.forEach((d) => s = s + d)
    return s;
    
}

//For the purpose of user debugging.
sum(100, 200, 300, 400);

module.exports = sum