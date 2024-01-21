# container image
FROM ubuntu:noble

ARG user=smk

# Install locales and set up the en_US.UTF-8 locale
RUN apt-get update && apt-get install -y locales && rm -rf /var/lib/apt/lists/* \
    && localedef -i en_US -c -f UTF-8 -A /usr/share/locale/locale.alias en_US.UTF-8

# Install build essentials & Python
RUN apt-get update && apt-get install -y build-essential python3 && apt-get clean && rm -rf /var/lib/apt/lists/*

# add gdb
RUN apt-get update && apt-get install -y --no-install-recommends gdb && \
    gdb --eval-command "set pagination 0" --eval-command "thread apply all bt" --batch --pid 1

# Add a user with a specific UID
RUN useradd -m -u 3000 -s /bin/bash ${user}

ENV LANG en_US.utf8

USER ${user}

CMD ["/bin/bash"]
