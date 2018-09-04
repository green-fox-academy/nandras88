export class BlogPost {

  authorName: string;
  title: string;
  text: string;
  publicationDate: string;

  constructor(title, authorName, publicationDate, text) {
    this.title = title;
    this.authorName = authorName;
    this.publicationDate = publicationDate;
    this.text = text;
  }

}

let loremBlog: BlogPost = new BlogPost('Lorem Ipsum', 'John Doe', '2000.05.04', 'Lorem ipsum dolor sit amet.');
let waitBlog: BlogPost = new BlogPost('Wait but why', 'Tim Urban', '2010.10.10', 'A popular long-form, stick - figure - illustrated blog about almost everything.');
let oneBlog: BlogPost = new BlogPost('One Engineer Is Trying to Get IBM to Reckon With Trump', 'William Turton', '2017.03.28.', 'Daniel Hanley, a cybersecurity engineer at IBM, doesn’t want to be the center of attention. When I asked to take his picture outside one of IBM’s New York City offices, he told me that he wasn’t really into the whole organizer profile thing.')
let uccaCucca: BlogPost = new BlogPost('Magyarorszag remalma', 'DopeMan', '2000', 'DopeMan cucca utni fog');

class Blog {

  listOfBlogPost: BlogPost[] = [];

  constructor() {

  }
  add(blogPost: BlogPost): void {
    this.listOfBlogPost.push(blogPost);
  }
  delete(int: number): void {
    this.listOfBlogPost.splice(int, 1);
  }
  update(int: number, blogPost: BlogPost): void {
    this.listOfBlogPost.splice(int, 1, blogPost)

  }
}

let bandiBlog: Blog = new Blog();
bandiBlog.add(loremBlog);
bandiBlog.add(waitBlog);
bandiBlog.add(oneBlog);


bandiBlog.update(0, uccaCucca);
console.log(bandiBlog);