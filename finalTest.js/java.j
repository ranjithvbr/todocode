function getFavs() {
  let favList = [];
  const inputs = document.querySelectorAll('input');
  for (const input of inputs) {
    if (input.checked == true) {
      favList.push(input.parentNode.textContent);
    }
  }
  document.querySelector('.fav').textContent = favList.join(" "+",");
 
}
----html----

<label><input type="checkbox" />Ice cream</label>
<label><input type="checkbox" />Pizza</label>
<label><input type="checkbox" />Tacos</label>
<label><input type="checkbox" />Meatloaf</label>
<label><input type="checkbox" />Brocolli</label>

<button onClick="getFavs()">Display Your Favorites</button>

<div class="fav"></div>
