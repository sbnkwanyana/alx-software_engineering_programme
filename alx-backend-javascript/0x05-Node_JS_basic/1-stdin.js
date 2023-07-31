process.stdout.write('Welcome to Holberton School, what is your name?\n');

if (process.stdin.isTTY) {
  process.stdin.on('name', (name) => {
    process.stdout.write(`Your name is: ${name.toString()}`);
    process.exit();
  });
} else {
  process.stdin.on('name', (name) => {
    process.stdout.write(`Your name is: ${name.toString()}`);
    process.exit();
  });
  process.on('close', () => {
    process.stdout.write('This important software is now closing\n');
  });
}
