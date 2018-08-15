class PostIt {

  backgroundColor: string;
  text: string;
  textColor: string;

  constructor(backgroundColor: string, text: string, textColor: string) {
    this.backgroundColor = backgroundColor;
    this.text = text;
    this.textColor = textColor;

  }

}

let orangePostIt: PostIt = new PostIt('orange', 'Idea1', 'blue');
let pinkPostIt: PostIt = new PostIt('pink', 'Awesome', 'black');
let yellowPostIt: PostIt = new PostIt('yellow', 'Superb!', 'green');



