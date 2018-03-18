# ruby-get_tid

man 2 gettid:

"gettid()  returns  the caller's thread ID (TID).  
In a single-threaded process, the thread ID is equal to the process ID (PID, as returned by getpid(2)).  
In a multithreaded process, all threads have the same PID, but each one has a unique TID."

## Compile
```bash
ruby extconf.rb
make
```

## Test

```bash
tom@vm1:~/ruby-get_tid# ./test.rb
Main proccess PID: 382
Thread TID: 411
  PID  PGID   TID COMMAND         COMMAND
  382   382   382 ruby            ruby ./test.rb
  382   382   410 ruby-timer-thr  ruby ./test.rb
  382   382   411 test.rb:7       ruby ./test.rb
```

## TODO

- OS conditionals.
- Move get_tid method to the Process class.
