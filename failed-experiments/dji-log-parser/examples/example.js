var DJIParser = require("../index")
var fs = require("fs")

var parser = new DJIParser()
var imageIndex = 1

// This works - the original example from 2015
// var fileName = "DJIFlightRecord_2015-12-29_[19-05-48].txt"

// This DOES NOT work - my example from 2021
var fileName = "DJIFlightRecord_2021-09-05_[19-23-47].txt"

parser.on("OSD", function (obj) {
  console.log(obj.getHeight())
})

parser.on("IMAGE", function (obj) {
  fs.writeFileSync("image" + imageIndex++ + ".jpg", obj.buffer, "binary")
})

parser.parse(fs.readFileSync(fileName))
