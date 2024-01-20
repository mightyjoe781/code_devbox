# container image
FROM alpine:3.19

ARG user=smk
# tools dependencies

RUN apk add --no-cache git build-base gdb python3 py3-pip &&\
    adduser -D ${user} --uid 3000