var data = prompt("Enter your phone number");
var matched = data.match(/^[0-9]{10}$/);

if (matched) {
  document.write("Matched");
} else {
  document.write("Didnot match");
}
