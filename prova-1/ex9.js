const a = 10;
const b = 12;
const c = -1;

const p = b > a;
const k = !((a + b) > (c - b) && (b < c));
const x = ((a + b) <= (c - b) && (b < c));
const y = a > c || a > b;

console.log(p, k, x, y);