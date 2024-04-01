function hindiAnkit() {
    var xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = function () {
        if (this.readyState == 4 && this.status == 200) {
            var movies = JSON.parse(this.responseText);
            var tbody = document.querySelector("#movie-details tbody");
            movies.forEach(function (movie) {
                var row = document.createElement("tr");
                row.innerHTML = `
                <td>${movie.name}</td>
                <td>${movie.year}</td>
                <td>${movie.language}</td>
                <td>${movie.rating}</td>
                <td>${movie.runtime}</td>
                <td>${movie.actors}</td>
                `;
                tbody.appendChild(row);
            });
        }
    };
    xhttp.open("GET", "hindi.json", true);
    xhttp.send();
}

function tamil() {
    var xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = function () {
        if (this.readyState == 4 && this.status == 200) {
            var movies = JSON.parse(this.responseText);
            var tbody = document.querySelector("#movie-details tbody");
            movies.forEach(function (movie) {
                var row = document.createElement("tr");
                row.innerHTML = `
                <td>${movie.name}</td>
                <td>${movie.year}</td>
                <td>${movie.language}</td>
                <td>${movie.rating}</td>
                <td>${movie.runtime}</td>
                <td>${movie.actors}</td>
                `;
                tbody.appendChild(row);
            });
        }
    };
    xhttp.open("GET", "tamil.json", true);
    xhttp.send();
}