function fetchMe() {
    var xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = function () {
        if (this.readyState == 4 && this.status == 200) {
            document.getElementById("dynamic").innerHTML =
                this.responseText;
        }
    };
    xhttp.open("GET", "about_cars.txt", true);
    xhttp.send();
}

function aboutMe() {
    var xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = function () {
        if (this.readyState == 4 && this.status == 200) {
            document.getElementById("dynamic").innerHTML = this.responseText;
        }
    };
    xhttp.open("GET", "about_ankit.txt", true);
    xhttp.send();
}

function fetchJson() {
    var xhr = new XMLHttpRequest();
    xhr.onreadystatechange = function () {
        if (this.readyState == 4 && this.status == 200) {
            var mobiles = JSON.parse(this.responseText);
            var tbody = document.querySelector("#mobiles-table tbody");
            mobiles.forEach(function (mobile) {
                var row = document.createElement("tr");
                row.innerHTML = `
            <td>${mobile.model_number}</td>
            <td>${mobile.name}</td>
            <td>${mobile.price}</td>
            <td><img src="${mobile.image}" alt="${mobile.name}"></td>
          `;
                tbody.appendChild(row);
            });
        }
    };
    xhr.open("GET", "mobiles.json", true);
    xhr.send();
}

function fetchXml() {
    var xhr = new XMLHttpRequest();
    xhr.onreadystatechange = function () {
        if (this.readyState == 4 && this.status == 200) {
            var xmlDoc = this.responseXML;
            var cars = xmlDoc.getElementsByTagName("car");
            var carDetailsDiv = document.getElementById("xmlWala");
            var html = "<ul>";
            for (var i = 0; i < cars.length; i++) {
                var car = cars[i];
                var id = car.getElementsByTagName("id")[0].childNodes[0].nodeValue;
                var make = car.getElementsByTagName("make")[0].childNodes[0].nodeValue;
                var model = car.getElementsByTagName("model")[0].childNodes[0].nodeValue;
                var year = car.getElementsByTagName("year")[0].childNodes[0].nodeValue;
                var color = car.getElementsByTagName("color")[0].childNodes[0].nodeValue;
                html += "<li>ID: " + id + ", Make: " + make + ", Model: " + model + ", Year: " + year + ", Color: " + color + "</li>";
            }
            html += "</ul>";
            carDetailsDiv.innerHTML = html;
        }
    };
    xhr.open("GET", "cars.xml", true);
    xhr.send();
}