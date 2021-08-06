function validateData() {
  var customerNameField = getValue("customerName");
  var customerAddressField = getValue("customerAddress");
  var customerPhoneField = getValue("customerPhone");
  var plainLassiQtyField = getValue("plainLassiQty");
  var bananaLassiQtyField = getValue("bananaLassiQty");
  var specialLassiQtyField = getValue("specialLassiQty");

  if (customerNameField.match(/^[a-zA-Z]+\s[a-zA-Z]{3,}\s[a-zA-Z]+$/) != null) {
    if (customerAddressField.match(/^[a-zA-Z0-9]+$/) != null) {
      if (customerPhoneField.match(/^[0-9]{10}$/) != null) {
        if (
          plainLassiQtyField.match(/^[0-9]{1,2}$/) != null &&
          bananaLassiQtyField.match(/^[0-9]{1,2}$/) != null &&
          specialLassiQtyField.match(/^[0-9]{1,2}$/) != null
        ) {
          setStatus("Order placed Successfully");

          var paidFrom;
          if (document.getElementsByClassName("esewa-payment")[0].checked) {
            paidFrom = "Esewa";
          } else paidFrom = "Cash on Delivery";

          var summaryDiv = document.getElementById("summaryDiv");
          summaryDiv.innerHTML = `
          <h3>Order Summary : </h3><br/><br/>
          ${customerNameField}<br/>
          ${customerAddressField}<br/>
          ${customerPhoneField}<br/><br/>

          You have ordered ${plainLassiQtyField} Plain Lassi<br/>
          You have ordered ${bananaLassiQtyField} Banana Lassi<br/>
          You have ordered ${specialLassiQtyField} Special Lassi
          <br/><br/>

          Paid From : ${paidFrom}
          `;
        } else {
          setStatus("Incorrect Quantity Field");
        }
      } else {
        setStatus("Incorrect Customer Phone Field");
      }
    } else {
      setStatus("Incorrect Customer Address Field");
    }
  } else {
    setStatus("Incorrect Customer Name Field");
  }
}

function setStatus(data) {
  var statusDiv = document.getElementById("statusDiv");
  statusDiv.innerText = data;
}

function getValue(id) {
  return document.getElementById(id).value;
}
