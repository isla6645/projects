let button = document.querySelector("#loginButton");
let username = document.querySelector("#usernameInput");

button.addEventListener("click", (e) => {
  console.log(username);
  localStorage.setItem('username', username.value);
  console.log(localStorage.getItem('username'));
  let user = localStorage.getItem('username')
  window.location.href = 'inner.html';
});