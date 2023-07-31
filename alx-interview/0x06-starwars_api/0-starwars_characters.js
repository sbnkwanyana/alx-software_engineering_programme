#!/usr/bin/node
const request = require('request');
const URL = 'https://swapi-api.alx-tools.com/api';

if (process.argv.length > 2) {
  request(`${URL}/films/${process.argv[2]}/?format=json`, (err, _, body) => {
    if (err) {
      console.log(err);
    }
    const characterURLs = JSON.parse(body).characters;
    const charactersName = characterURLs.map(
      url => new Promise((resolve, reject) => {
        request(url, (promiseErr, __, charactersReqBody) => {
          if (promiseErr) {
            reject(promiseErr);
          }
          resolve(JSON.parse(charactersReqBody).name);
        });
      }));

    Promise.all(charactersName)
      .then(names => console.log(names.join('\n')))
      .catch(allErr => console.log(allErr));
  });
}
