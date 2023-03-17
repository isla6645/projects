// Creating a list for each section
// CARDIO LIST
const cardioCardsData = [
  { //good
		id: 1,
		title: "Running",
		description: "A classic cardio workout that helps to burn fat, lower blood pressure, help heart health, among other benefits",
		vid: "https://www.youtube.com/watch?v=brFHyOtTwH4",
		image: "https://www.verywellfit.com/thmb/4I4fua472xNbQTaqeOLIDLG__eU=/1500x1125/smart/filters:no_upscale()/Snapwire-Running-17-38ab6267e82c41a0b03b66469087aefb.jpg"
	},
  { //good
		id: 2,
		title: "Cycling",
		description: "Great cardio workout that even helps strengthen your legs and even reduces stress levels",
		vid: "https://www.youtube.com/watch?v=x4WHeVf5DN4",
		image: "https://hips.hearstapps.com/hmg-prod.s3.amazonaws.com/images/mff-roka-0618-1-preview-maxwidth-3000-maxheight-3000-ppi-300-quality-90-1620433208.jpg"
	},
  { //good
		id: 3,
		title: "Burpees",
		description: "Is an amazing cardio workout alongiside helping to workout the legs, hips, buttocks, abdomen, arms, chest, and shoulders",
		vid: "https://www.youtube.com/shorts/zlYA1SENYG4",
		image: "https://c.ndtvimg.com/2020-06/qlr3qdf8_push-up_650x400_29_June_20.jpg"
	},
  { //good
    id: 4,
		title: "Jumping Jacks",
		description: "Is an amazing cardio workout alongiside helping to workout the legs, hips, buttocks, abdomen, arms, chest, and shoulders",
		vid: "https://www.youtube.com/watch?v=nGaXj3kkmrU",
		image: "https://post.greatist.com/wp-content/uploads/sites/2/2020/04/GRT-two-people-jumping-jacks-732x549-thumb-732x549.jpg"
  },
  { //good
    id: 5,
		title: "Jumprope",
		description: "An effective choice for cardio, as well as working out the calves and even the arms",
		vid: "https://www.youtube.com/watch?v=FJmRQ5iTXKE",
		image: "https://static.toiimg.com/photo/71956822.cms"
  },
  { //good
    id: 6,
		title: "Squat Jumps",
		description: "A great way to burn calories while also getting a solid leg workout",
		vid: "https://www.youtube.com/watch?v=A-cFYWvaHr0",
		image: "https://hips.hearstapps.com/hmg-prod.s3.amazonaws.com/images/squat-jump-1541779788.jpg"
  }
];

// UPPER BODY LIST
const upperCardsData = [
  { //good
		id: 1,
		title: "Push Ups",
		description: "Involve the entire body and are a good way to work the heart, lungs, and muscles",
		vid: "https://www.youtube.com/shorts/ba8tr1NzwXU",
		image: "https://phantom-marca.unidadeditorial.es/ec9b2d0d83b895d1f5e52073fe0868f1/crop/0x93/899x599/f/jpg/assets/multimedia/imagenes/2022/01/19/16426036798831.jpg"
	},
  { //good
		id: 2,
		title: "Pull Ups",
		description: "Benefits the lats, Biceps, as well as deltoids, rhomboids, and core",
    vid: "https://www.youtube.com/shorts/ZTsuNUzq3e4",
		image: "https://www.mensjournal.com/wp-content/uploads/mf/pullup-1280_0.jpg?w=1200&h=960&crop=1&quality=86&strip=all"
	},
  { //good
		id: 3,
		title: "Tricep Dips",
		description: "Helps target the triceps brachii as well as your chest and back",
		vid: "https://www.youtube.com/watch?v=6kALZikXxLc",
		image: "https://static.toiimg.com/thumb/msid-78169896/78169896.jpg?width=500&resizemode=4"
	},
  { //good
    id: 4,
		title: "Mountain Climbers",
		description: "Works the shoulder muscles, triceps, chest muscles, serratus anterior, and abdominal muscles ",
		vid: "https://www.youtube.com/watch?v=cnyTQDSE884",
		image: "https://images.healthshots.com/healthshots/en/uploads/2022/01/10173515/mountain-climber.jpg"
  },
  { //good
    id: 5,
		title: "Supermans",
		description: "Very helpful for the lower and upper back as well as shoulders, abdominal muscles, and legs",
		vid: "https://www.youtube.com/watch?v=ATly_pW0i6g",
		image: "https://cdn.mos.cms.futurecdn.net/qQGPNHTz6oXE7ays8ms237-1200-80.jpg"
  },
  { //good
    id: 6,
		title: "Chin Ups",
		description: "Extremely beneficial for the back (like pull ups) but are extra helpful for biceps",
		vid: "https://www.youtube.com/watch?v=brhRXlOhsAM",
		image: "https://media.self.com/photos/5bad13813f15b979ec0368eb/master/pass/woman-doing-chin-up.jpg"
  }
];

// CORE LIST
const coreCardsData = [
  { //good
		id: 1,
		title: "Crunches",
		description: "Works the abdominal muscles",
    vid: "https://www.youtube.com/watch?v=MKmrqcoCZ-M",
		image: "https://e00-marca.uecdn.es/assets/multimedia/imagenes/2022/02/26/16458965207700.jpg"
	},
  { //good
		id: 2,
		title: "Planks",
		description: "Whole Body but especially strengthens the spine, your rhomboids and trapezius, and abdominal muscles",
		vid: "https://www.youtube.com/shorts/U3uVoXIxu6k",
		image: "https://barbend.com/wp-content/uploads/2019/01/BarBend-Feature-Image-1200-x-675-2021-06-02T165505.056.jpg"
	},
  { //good
		id: 3,
		title: "Russian Twists",
		description: "Targets the obliques and hip flexors among other abdominal muscles",
		vid: "https://www.youtube.com/watch?v=wkD8rjkodUI",
		image: "https://images.healthshots.com/healthshots/en/uploads/2021/04/20172928/Russian-Twists-.jpg"
	},
  { //good
		id: 4,
		title: "Leg Raises",
		description: "Benefits the lower and upper abs, hamstrings, quadriceps, hip flexors, and lower back muscles",
		vid: "https://www.youtube.com/watch?v=JB2oyawG9KI",
		image: "https://cdn.mos.cms.futurecdn.net/8pqYVQDnmf5ZEAY6gorthj.jpg"
	},
  { //good
		id: 5,
		title: "Bicycle Crunches",
		description: "Targets the obliques and hip flexors among other abdominal muscles",
		vid: "https://www.youtube.com/watch?v=1we3bh9uhqY",
		image: "https://cdn.media.amplience.net/i/thegymgroup/The_Gym_Group-Exercises-How_To_Do_A_Bicycle_Crunch-Step_By_Step_6?fmt=auto&h=545&w=1440&sm=c&qlt=default&$qlt$&$poi$"
	},
  { //good
		id: 6,
		title: "Toe Touches",
		description: "Focuses on the transverse abdominis, rectus abdominis, and obliques",
		vid: "https://www.youtube.com/watch?v=9iEI95-eZWk",
		image: "https://hips.hearstapps.com/hmg-prod.s3.amazonaws.com/images/fit-brunette-female-exercising-during-workout-at-royalty-free-image-1645631357.jpg"
	}
];

// LOWER BODY ARRAY
const lowerCardsData = [
  { //good
		id: 1,
		title: "Squats",
		description: "Helps out the hip Muscles, calves, hamstrings, and obliques",
		vid: "https://www.youtube.com/shorts/gslEzVggur8",
		image: "https://images.contentstack.io/v3/assets/blt45c082eaf9747747/blt8241bd9b0fdf0e49/5de0ba2521303702f198c341/Squats_Header_CUT.jpg?format=pjpg&auto=webp&quality=76&width=1232"
	},
  { //good
		id: 2,
		title: "Lunges",
		description: "Uses all the leg muscles primarily the gluteus maximus, hamstrings, quadriceps, and calves",
		vid: "https://www.youtube.com/watch?v=QOVaHwm-Q6U",
		image: "https://media.self.com/photos/58effa561197db41e3ca48ee/4:3/w_2560%2Cc_limit/GettyImages-481448544.jpg"
	},
  { //good
		id: 3,
		title: "Calf Raises",
		description: "Works your entire calf muscled up to the achilles tendon",
		vid: "https://www.youtube.com/shorts/fOfPwmb5FXU",
		image: "https://www.intowellness.in/wp-content/uploads/2019/12/Standing-Calf-Raise.jpg"
	},
  {
		id: 4,
		title: "Lateral Lunges",
		description: "Benefits multiple muscle groups throughout your lower body, including your quadriceps, abductors, glutes, adductors, and hamstring",
		vid: "https://www.youtube.com/watch?v=mwQVUfiO5Qc",
		image: "https://images.contentful.com/3s5io6mnxfqz/7jv9EjAclB8uf4ld81WP8E/307a33568baf13fb24b1f3117a01dd59/MasterClassSEO_Lateral_Lunge_TWO.jpg"
	},
  {
		id: 5,
		title: "Split Squats",
		description: "Targets multiple muscles in your lower body, including your hip flexors, hamstrings, quadriceps, and glutes",
		vid: "https://www.youtube.com/shorts/uODWo4YqbT8",
		image: "https://hips.hearstapps.com/hmg-prod.s3.amazonaws.com/images/screen-shot-2019-06-12-at-5-37-47-pm-1560437631.jpg"
	},
  {
		id: 6,
		title: "Warrior Balance",
		description: "Strengthens the whole backside of the body, including the shoulders, hamstrings, calves, ankles, and back along with helping your balance",
		vid: "https://www.youtube.com/watch?v=zmcX481uQD8",
		image: "https://www.ekhartyoga.com/media/images/articles/content/Warrior-3-pose-Ekhart-Yoga.jpg"
	}
];