# Welcome

This repository explores if it's possible to parse and review flight data from my [DJI](https://www.dji.com) drones using open source libraries.

## The verdict?

I still have not found a way to parse flight data for my [DJI Mini 2](https://www.dji.com/mini-2) and [DJI Air 2S](https://www.dji.com/air-2s).

As of Monday, September 6th, 2021, I am still searching for libraries to process these log files - or guides discussing how to process these binary files.

The best bet to process and view your flight data is to use [Airdata](https://airdata.com):

![airdata/__screenshots__/airdata-01.png](airdata/__screenshots__/airdata-01.png)
![airdata/__screenshots__/airdata-02.png](airdata/__screenshots__/airdata-02.png)

### UPDATES

#### Monday, September 20th, 2021

As of Monday, September 20th, 2021, I was pointed in the direction of [this post](https://djisdksupport.zendesk.com/hc/en-us/articles/4404500498713--When-the-MSDK-for-Mini-2-Mini-SE-and-Air-2S-will-be-released-?fbclid=IwAR3RPodE0Q8jteD9nnk0CDaHU6bzDNcumcPjdpFaRm6cB3I6qpf_-Rl5s5U) on the [DJI Developer Forums](https://djisdksupport.zendesk.com/hc/en-us/articles/4404500498713--When-the-MSDK-for-Mini-2-Mini-SE-and-Air-2S-will-be-released-?fbclid=IwAR3RPodE0Q8jteD9nnk0CDaHU6bzDNcumcPjdpFaRm6cB3I6qpf_-Rl5s5U).

![dji/__screenshots__/Screen%20Shot%202021-09-20%20at%2015.17.24%20PM.png](dji/__screenshots__/Screen%20Shot%202021-09-20%20at%2015.17.24%20PM.png)

I'm encouraged to see that there are plans to make this data available for parsing and review.

#### Thursday, September 9th, 2021

As of Thursday, September 9th, 2021, I decided to bite the bullet and see if posting in the [DJI Developer Forums](https://djisdksupport.zendesk.com/hc/en-us/community/posts/4406193231641-How-to-parse-DJI-Mini-2-and-DJI-Air-2S-flight-records-with-Node-js-or-JavaScript) will result in any forward progress:

![dji/__screenshots__/Screen%20Shot%202021-09-09%20at%2010.54.58%20AM.png](dji/__screenshots__/Screen%20Shot%202021-09-09%20at%2010.54.58%20AM.png)

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
