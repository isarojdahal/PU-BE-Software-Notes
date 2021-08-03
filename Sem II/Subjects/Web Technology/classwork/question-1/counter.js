function increaseValue() {
  var inputFieldValue = parseInt(document.getElementById("inputField").value);
  var newInputFieldValue = inputFieldValue + 1;
  document.getElementById("inputField").value = newInputFieldValue;
}
