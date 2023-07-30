# Tiny-Webserver

• Implemented the parsing of the HTTP protocol, supporting GET and POST requests, as well as estab-
lishing and terminating connections

• Utilized the epoll I/O multiplexing mechanism to efficiently handle I/O, monitor and process client
connection events and data transmission events.

• Employed the Reactor high-concurrency model to handle multiple connections, allowing the server to
simultaneously serve multiple client connections.

• Designed and implemented an asynchronous logging module, utilizing the singleton pattern and a
blocking queue for asynchronous log writing, thus avoiding the performance loss of synchronous writ-
ing.

• Conducted performance testing and stress testing on the server using tools like WebBench to ensure
the stability and reliability of the server
