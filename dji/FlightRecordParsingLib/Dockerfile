# PRO TIP - Check out https://github.com/dji-sdk/FlightRecordParsingLib#how-to-run-the-sample for instructions on running this code from DJI
#
# % docker build --build-arg SDK_KEY=your_app_key -t pf .
# % docker run -v $(pwd):/tmp pf "/tmp/example-flight-records/mini-2/DJIFlightRecord_2021-09-05_[19-23-47].txt" > ./example-flight-records/mini-2/mini-2.json
# % docker run -v $(pwd):/tmp pf "/tmp/example-flight-records/air-2s/DJIFlightRecord_2021-09-05_[19-47-57].txt" > ./example-flight-records/air-2s/air-2s.json
FROM ubuntu:16.04@sha256:a3785f78ab8547ae2710c89e627783cfa7ee7824d3468cae6835c9f4eae23ff7

ARG SDK_KEY
ENV SDK_KEY=${SDK_KEY}

RUN apt-get update
RUN apt-get install -y wget git gcc g++ make cmake

WORKDIR /parse_flyrecord

COPY . .

WORKDIR /parse_flyrecord/dji-flightrecord-kit/build/Ubuntu/FRSample
RUN sh generate.sh

ENTRYPOINT ["./FRSample"]