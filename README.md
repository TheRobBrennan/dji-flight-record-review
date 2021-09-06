# Welcome

This repository explores if it's possible to parse and review flight data from my [DJI](https://www.dji.com) drones using open source libraries.

## What didn't work?

### node-djiparsetxt

My first experiment was to explore the [node-djiparsetxt](https://github.com/chrisvm/node-djiparsetxt) code available at [https://github.com/chrisvm/node-djiparsetxt](https://github.com/chrisvm/node-djiparsetxt).

**SPOILER ALERT: I was not able to get it to work with `npx` when I tried doing `npx node-djiparsetxt <path/to/file.txt>`**

I added the following scripts to explore [node-djiparsetxt](https://github.com/chrisvm/node-djiparsetxt):

- `djiparsetxt` - This launches the `--help` command to see what options are possible for the command-line tool
- `djiparsetxt:mini-2:failed-experiment` - This attempts to parse the flight record file for the [DJI Mini 2](https://github.com/TheRobBrennan/dji-flight-record-review/blob/main/dji/mini-2/DJIFlightRecord_2021-09-05_%5B19-23-47%5D.txt)
- `djiparsetxt:air-2S:failed-experiment` - This attempts to parse the flight record file for the [DJI Air 2S](https://github.com/TheRobBrennan/dji-flight-record-review/blob/main/dji/air-2s/DJIFlightRecord_2021-09-05_%5B19-47-57%5D.txt)

The current code for [node-djiparsetxt](https://github.com/chrisvm/node-djiparsetxt) does not work with these files. However, I have opened up an issue on GitHub at [Does not work for Mini 2 or Air 2S #22](https://github.com/chrisvm/node-djiparsetxt/issues/22) to report this finding.

### dji-log-parser

My second experiment was to explore the [dji-log-parser](https://github.com/mikeemoo/dji-log-parser) code available at [https://github.com/mikeemoo/dji-log-parser](https://github.com/mikeemoo/dji-log-parser).

Admittedly, this was going to be a long shot. The last commit was on October 23rd, 2017 - using an example DJI Flight Record file from 2015. While this library **did** work and generate an image for the initially supplied file, it did not work at all with the [DJI Mini 2](https://github.com/TheRobBrennan/dji-flight-record-review/blob/main/dji/mini-2/DJIFlightRecord_2021-09-05_%5B19-23-47%5D.txt) and [DJI Air 2S](https://github.com/TheRobBrennan/dji-flight-record-review/blob/main/dji/air-2s/DJIFlightRecord_2021-09-05_%5B19-47-57%5D.txt) - nearly four years into the future. However, I have opened up issue [Does not work with the Mini 2 or Air 2S #22](https://github.com/mikeemoo/dji-log-parser/issues/22) to report these findings.

If you would like to experiment with this, feel free to navigate to `failed-experiments/dji-log-parser` and install the project dependencies and build the code:

```sh
$ cd failed-experiments/dji-log-parser
$ npm install
$ npm build
```

Then, go to `failed-experiments/dji-log-parser/examples/example.js` and specify the filename you would like to use:

```js
// failed-experiments/dji-log-parser/examples/example.js
...
// This works - the original example from 2015
// var fileName = "DJIFlightRecord_2015-12-29_[19-05-48].txt"

// This DOES NOT work - my example from 2021
var fileName = "DJIFlightRecord_2021-09-05_[19-23-47].txt"
...
```

I added the following scripts to explore [dji-log-parser](https://github.com/mikeemoo/dji-log-parser):

- `djilogparser:failed-experiment` - This launches the [dji-log-parser](https://github.com/mikeemoo/dji-log-parser) example at [failed-experiments/dji-log-parser/examples/example.js](failed-experiments/dji-log-parser/examples/example.js)

## What am I currently flying?

I have two drones that I am flying at the moment - the [DJI Mini 2](https://www.dji.com/mini-2) and the [DJI Air 2S](https://www.dji.com/air-2s).

### DJI Mini 2

![https://dji-official-fe.djicdn.com/cms/uploads/0fdff7fab9f96f0db0d70fbf71dab93c.jpg](https://dji-official-fe.djicdn.com/cms/uploads/0fdff7fab9f96f0db0d70fbf71dab93c.jpg)

### DJI Air 2S

![https://dji-official-fe.djicdn.com/cms/uploads/e25101f5b918ca19fedbf8ae5c308bcb.jpg](https://dji-official-fe.djicdn.com/cms/uploads/e25101f5b918ca19fedbf8ae5c308bcb.jpg)
