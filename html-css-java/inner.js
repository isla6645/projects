let Data = [
  {
    day: "Sunday",
    workouts: []
  },
  {
    day: "Monday",
    workouts: []
  },
  {
    day: "Tuesday",
    workouts: []
  },
  {
    day: "Wednesday",
    workouts: []
  },
  {
    day: "Thursday",
    workouts: []
  },
  {
    day: "Friday",
    workouts: []
  },
  {
    day: "Saturday",
    workouts: []
  }
];

console.log(localStorage.getItem('username'));
let name = localStorage.getItem('username');
document.getElementById("title").innerHTML = `<h1> Welcome ${name}! </h1>`

let workout = document.querySelector("#newWorkout");
let workoutInput = document.querySelector("#workoutInput");
let workoutOutput = document.querySelector("#workoutOutput");
let output = [];

workoutInput.addEventListener ("change", (e) => {
  console.log(workoutInput);
  output.push(workoutInput.value);
  console.log(output);
  workoutInput.value = "";
  workoutOutput.innerHTML = "";
  for (i = 0; i < output.length; i++) {
    workoutOutput.innerHTML = workoutOutput.innerHTML + `<li> ${output[i]} </li>`
  }; 
}); 

let day = document.querySelector("#dayInput");
let logInput = document.querySelector("#newWorkout");

logInput.addEventListener ("click", (e) => {
  console.log("clicked");
  let dayInput = day.value;
  for (i = 0; i < Data.length; i++) {
    if (dayInput === Data[i].day) {
      Data[i].workouts = [];
      Data[i].workouts.push(output);
      output = [];
      console.log(output);
      console.log(Data[i]);
    };
  };
});

let Days = document.querySelectorAll(".button");
for (Day of Days) {
  Day.addEventListener ("click", (e) => {
    let day = Day.id.split("-");
    console.log("it works!");
    console.log(Day.id);
    console.log(day);
  });
};