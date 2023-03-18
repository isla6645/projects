console.log("script running");

let pictures = document.querySelectorAll(".card-image");

// create an array of section ids in order
let quizOrder = []
// select each section and loop through them
document.querySelectorAll(".question").forEach((section) => {
  // add the section ID to the end of the array
  quizOrder.push(section.id)
  // and make the section hidden
  section.classList.toggle("hidden")
})
// unhide the first section, using the section IDs we saved earlier
let firstQuestion = document.getElementById(quizOrder[0])
firstQuestion.classList.remove("hidden")

let quiz = {
  color: ["logical", "creative", "logical", "creative"],
  vacation: ["extrovert", "introvert", "extrovert", "introvert"],
  pizza: ["creative", "logical", "creative", "logical"],
  house: ["introvert", "extrovert", "introvert", "extrovert"],
  fruit: ["logical", "creative", "logical", "creative"],
  activity: ["extrovert", "introvert", "extrovert", "introvert"],
};

let quizTaker = {
  logical: 0,
  creative: 0,
  extrovert: 0,
  introvert: 0,
};

pictures.forEach((picture) => {
  picture.addEventListener("click", (e) => {
    let choice = picture.id.split("-");

    console.log(picture.id, choice)
    let questionName = choice[0]
    let answerIndex = choice[1]

    picture.classList.toggle("has-background-light");
    picture.classList.toggle("has-background-warning");

    console.log(questionName, quiz[questionName])

    let answers = quiz[questionName]
    let answer = answers[answerIndex]

    console.log(answer)
    quizTaker[answer]++;

    for (let i = 0; i < quizOrder.length; i++) {
      console.log(questionName, quizOrder[i])
      // find the first section ID that matches the current question
      if (quizOrder[i] === questionName) {
        // the conditional passed, we know that i is the index of the current section
        let currentSection = document.getElementById(quizOrder[i])
        // quizOrder stores section IDs in order, so i + 1 will be the index of the next section
        let nextSection = document.getElementById(quizOrder[i + 1])
        // hide the current section
        currentSection.classList.toggle("hidden")
        // display the next section
        nextSection.classList.toggle("hidden")
      }
    }


    if (choice[0] === "activity") {
      let resultID;

      if (quizTaker.logical > quizTaker.creative) {
        resultID = "#logical-";
      } else {
        resultID = "#creative-";
      }

      if (quizTaker.introvert > quizTaker.extrovert) {
        resultID += "introvert";
      } else {
        resultID += "extrovert";
      }

      let result = document.querySelector(resultID);
      console.log(result);
      result.classList.remove("hidden");
    }
  });
});
