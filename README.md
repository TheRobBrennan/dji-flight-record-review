# Welcome

This repository explores using open-source libraries to parse and review flight data from my [DJI](https://www.dji.com) drones.

🎉 SUCCESS!!! 🎉 As of Friday, July 28th, 2023, this project includes the latest code from the [DJI FlightRecordParsingLib](https://github.com/dji-sdk/FlightRecordParsingLib) Open API library. I would encourage you to download the latest from that repo - but the example does include a Docker image that successfully runs on my  M1 Max.

```sh
# Use your free DJI Developer Account and request a new key from DJI. Go to https://developer.dji.com/user/apps/#all and follow the instructions at https://github.com/dji-sdk/FlightRecordParsingLib#how-to-apply-for-my-app-key

# Install the free Docker Desktop for your system - https://www.docker.com/products/docker-desktop/

# Navigate to the FlightRecordParsingLib directory
% cd dji/FlightRecordParsingLib

# Check out https://github.com/dji-sdk/FlightRecordParsingLib#how-to-run-the-sample for instructions on running this code from DJI
% docker build --build-arg SDK_KEY=YOUR_APP_KEY -t pf .

% docker run -v $(pwd):/tmp pf "/tmp/example-flight-records/mini-2/DJIFlightRecord_2021-09-05_[19-23-47].txt" > ./example-flight-records/mini-2/mini-2.json

% docker run -v $(pwd):/tmp pf "/tmp/example-flight-records/air-2s/DJIFlightRecord_2021-09-05_[19-47-57].txt" > ./example-flight-records/air-2s/air-2s.json
```

## Credits

I'd love to give a shout-out to [mcihadarslanoglu](https://github.com/mcihadarslanoglu) rekindling the flame by inquiring if there has been any update on this front - and for [howff](https://github.com/howff) pointing to the updated code at [https://github.com/dji-sdk/FlightRecordParsingLib](https://github.com/dji-sdk/FlightRecordParsingLib).

It works on my 2021 14" MacBook Pro with its  M1 Max silicon precisely as I hoped.

## What am I currently flying?

I have two drones that I am flying at the moment - the [DJI Mini 2](https://www.dji.com/mini-2) and the [DJI Air 2S](https://www.dji.com/air-2s).

### DJI Mini 2

![https://dji-official-fe.djicdn.com/cms/uploads/0fdff7fab9f96f0db0d70fbf71dab93c.jpg](https://dji-official-fe.djicdn.com/cms/uploads/0fdff7fab9f96f0db0d70fbf71dab93c.jpg)

### DJI Air 2S

![https://dji-official-fe.djicdn.com/cms/uploads/e25101f5b918ca19fedbf8ae5c308bcb.jpg](https://dji-official-fe.djicdn.com/cms/uploads/e25101f5b918ca19fedbf8ae5c308bcb.jpg)
