FROM python:3.12-alpine


# RUN apt-get update && apt-get install -y --no-install-recommends python3-tk \
#     && rm -rf /var/lib/apt/lists/*

WORKDIR /app

COPY . /app

# No external dependencies needed, Tkinter comes with base image
CMD ["python", "hello-world.py"]
