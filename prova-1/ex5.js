const {
  read
} = require('fs');

const readline = require('readline').createInterface({
  input: process.stdin,
  output: process.stdout
});

let ant = 1;
let prox = 1;
let f = 1;
let n;

readline.question('Entre N: ', input => {
  n = Number(input);
  for (let i = 1; i <= n; i++) {
    if (i < 3) {
      f = 1;
    } else {
      f = ant + prox;
      ant = prox;
      prox = f;
    }
    process.stdout.write(`${f}${i !== n ? ', ' : '\n'}`);
  }
  readline.close();
});