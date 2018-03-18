# ruby-get_tid

# Compile
```bash
ruby extconf.rb
make
```

# Test

```bash
tom@vm1:~/ruby-get_tid# ./test.rb
Main proccess PID: 382
Thread TID: 411
  PID  PGID   TID COMMAND         COMMAND
  382   382   382 ruby            ruby ./test.rb
  382   382   410 ruby-timer-thr  ruby ./test.rb
  382   382   411 test.rb:7       ruby ./test.rb
```
