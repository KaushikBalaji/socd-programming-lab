FROM gcc:latest AS builder

WORKDIR /app
COPY . /app

RUN make

FROM debian:bookworm-slim

WORKDIR /app

COPY --from=builder /app/UserInterface /app/UserInterface

CMD ["./UserInterface"]
