let panes = document.querySelectorAll("#nav li");
let content = document.querySelector(".tab-content");
for (const pane of panes) {
  pane.addEventListener ("click", (e) => {
    console.log(pane)
    content.classList.remove("is-hidden");
  });
};

// Cards for Cardio Section
for (const cardioCard of cardioCardsData) {
	document.getElementById("pane-1").innerHTML = document.getElementById("pane-1").innerHTML +
		`<div id="template-card" class="column is-4">
					<div class="card large">
						<div class="card-image">
							<figure class="image is-16by9">
								<img id="card-image-${cardioCard.id}" alt="Image" src=${cardioCard.image}>
							</figure>
						</div>
						<div class="card-content">
							<div class="media">
								<div class="media-left">
									<figure class="image is-48x48">
										<img id="template-card-icon"
											src="https://images.emojiterra.com/google/noto-emoji/v2.034/share/1f4aa.jpg"
											alt="Image">
									</figure>
								</div>
								<div class="media-content">
									<p class="title is-4 no-padding" id="template-card-title">${cardioCard.title}</p>
									<p>
										<span class="title is-6" id="template-card-description">
									</p>
									<p class="subtitle is-6" id="template-card-price">${cardioCard.description}</p>
								</div>
							</div>
							<div class="content">
								<center><button id="button-${cardioCard.id}" class="button is-full-width"><a href=${cardioCard.vid}>Check out how to do it!</a></button></center>
								<div class="background-icon"><span class="icon-twitter"></span></div>
							</div>
						</div>
					</div>
				</div>`
};

// Cards for Upper Body Section
for (const upperCard of upperCardsData) {
	document.getElementById("pane-2").innerHTML = document.getElementById("pane-2").innerHTML +
		`<div id="template-card" class="column is-4">
					<div class="card large">
						<div class="card-image">
							<figure class="image is-16by9">
								<img id="card-image-${upperCard.id}" alt="Image" src=${upperCard.image}>
							</figure>
						</div>
						<div class="card-content">
							<div class="media">
								<div class="media-left">
									<figure class="image is-48x48">
										<img id="template-card-icon"
											src="https://images.emojiterra.com/google/noto-emoji/v2.034/share/1f4aa.jpg"
											alt="Image">
									</figure>
								</div>
								<div class="media-content">
									<p class="title is-4 no-padding" id="template-card-title">${upperCard.title}</p>
									<p>
										<span class="title is-6" id="template-card-description">
									</p>
									<p class="subtitle is-6" id="template-card-price">${upperCard.description}</p>
								</div>
							</div>
							<div class="content">
								<center><button id="button-${upperCard.id}" class="button is-full-width"><a href=${upperCard.vid}>Check out how to do it!</a></button></center>
								<div class="background-icon"><span class="icon-twitter"></span></div>
							</div>
						</div>
					</div>
				</div>`
};

// Cards for Core Section
for (const coreCard of coreCardsData) {
	document.getElementById("pane-3").innerHTML = document.getElementById("pane-3").innerHTML +
		`<div id="template-card" class="column is-4">
					<div class="card large">
						<div class="card-image">
							<figure class="image is-16by9">
								<img id="card-image-${coreCard.id}" alt="Image" src=${coreCard.image}>
							</figure>
						</div>
						<div class="card-content">
							<div class="media">
								<div class="media-left">
									<figure class="image is-48x48">
										<img id="template-card-icon"
											src="https://images.emojiterra.com/google/noto-emoji/v2.034/share/1f4aa.jpg"
											alt="Image">
									</figure>
								</div>
								<div class="media-content">
									<p class="title is-4 no-padding" id="template-card-title">${coreCard.title}</p>
									<p>
										<span class="title is-6" id="template-card-description">
									</p>
									<p class="subtitle is-6" id="template-card-price">${coreCard.description}</p>
								</div>
							</div>
							<div class="content">
								<center><button id="button-${coreCard.id}" class="button is-full-width"><a href=${coreCard.vid}>Check out how to do it!</a></button></center>
								<div class="background-icon"><span class="icon-twitter"></span></div>
							</div>
						</div>
					</div>
				</div>`
};

// Cards for Lower Body Section
for (const lowerCard of lowerCardsData) {
	document.getElementById("pane-4").innerHTML = document.getElementById("pane-4").innerHTML +
		`<div id="template-card" class="column is-4">
					<div class="card large">
						<div class="card-image">
							<figure class="image is-16by9">
								<img id="card-image-${lowerCard.id}" alt="Image" src=${lowerCard.image}>
							</figure>
						</div>
						<div class="card-content">
							<div class="media">
								<div class="media-left">
									<figure class="image is-48x48">
										<img id="template-card-icon"
											src="https://images.emojiterra.com/google/noto-emoji/v2.034/share/1f4aa.jpg"
											alt="Image">
									</figure>
								</div>
								<div class="media-content">
									<p class="title is-4 no-padding" id="template-card-title">${lowerCard.title}</p>
									<p>
										<span class="title is-6" id="template-card-description">
									</p>
									<p class="subtitle is-6" id="template-card-price">${lowerCard.description}</p>
								</div>
							</div>
							<div class="content">
								<center><button id="button-${lowerCard.id}" class="button is-full-width"><a href=${lowerCard.vid}>Check out how to do it!</a></button></center>
								<div class="background-icon"><span class="icon-twitter"></span></div>
							</div>
						</div>
					</div>
				</div>`
};