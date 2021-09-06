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

## What am I currently flying?

I have two drones that I am flying at the moment - the [DJI Mini 2](https://www.dji.com/mini-2) and the [DJI Air 2S](https://www.dji.com/air-2s).

### DJI Mini 2

![https://dji-official-fe.djicdn.com/cms/uploads/0fdff7fab9f96f0db0d70fbf71dab93c.jpg](https://dji-official-fe.djicdn.com/cms/uploads/0fdff7fab9f96f0db0d70fbf71dab93c.jpg)

### DJI Air 2S

![https://dji-official-fe.djicdn.com/cms/uploads/e25101f5b918ca19fedbf8ae5c308bcb.jpg](https://dji-official-fe.djicdn.com/cms/uploads/e25101f5b918ca19fedbf8ae5c308bcb.jpg)
