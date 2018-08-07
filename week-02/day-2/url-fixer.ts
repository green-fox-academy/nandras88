// Accidentally I got the wrong URL for a funny subreddit. It's probably "odds" and not "bots"
// Also, the URL is missing a crutial component, find out what it is and insert it too!
//url.concat(urlCut);
//console.log(url);

let url: string = 'https//www.reddit.com/r/nevertellmethebots';

let https = url.slice(0,5);
let www = url.slice(5,42);
let newUrl = https.concat(':');
url = newUrl.concat(www);
url = url.replace('bots', 'odds');
console.log(url);
