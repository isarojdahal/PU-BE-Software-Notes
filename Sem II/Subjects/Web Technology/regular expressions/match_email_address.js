var data = prompt("Enter your Email address : ");
console.log(data);

var matched = data.match(/^[a-zA-Z0-9]+@[a-zA-z]{3,}\.[a-zA-Z]{3,}$/);

if (matched) {
  document.write("Matched");
} else {
  document.write("Didnot match");
}
