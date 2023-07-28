# PRO TIP - Check out https://github.com/dji-sdk/FlightRecordParsingLib#how-to-run-the-sample for instructions on running this code from DJI
#
# % docker build --build-arg SDK_KEY=your_app_key -t pf .
# % docker run -v $(pwd):/tmp pf "/tmp/V132_DJIFlightRecord_2020-06-18_[19-01-24].txt" > json_result.json
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