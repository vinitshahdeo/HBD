const crypto = require('crypto');
const algorithm = 'aes-256-ctr';
    
let password = crypto.createHash('sha256').update(String("vsdjkdhg")).digest('base64').substr(0, 32);
let iv = crypto.createHash('sha256').update(String("vsdjkdhg")).digest('base64').substr(0, 16);
const cipher = "524f3ee0845983021cc61bd53156b925504932ef";

const decrypt = (encrypted) => {
  var decipher = crypto.createDecipheriv(algorithm,password, iv)
  var dec = decipher.update(encrypted,'hex','utf8')
  dec += decipher.final('utf8');
  return dec;
}

const base64decode = (string) => {
    let buff = new Buffer.from(string, "base64");
    return buff.toString("ascii");
}

console.log(base64decode(decrypt(cipher)));