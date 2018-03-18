# ruby-get_tid

# Compile
```bash
ruby extconf.rb
make
```

# Test

```bash
tom@vm1:~/ruby-get_tid# ./test.rb
Main proccess PID: 29513
Thread TID: 29561
ps:
  PID  PPID   TID COMMAND         COMMAND
29513 11682 29513 ruby            ruby ./test.rb
29513 11682 29560 ruby-timer-thr  ruby ./test.rb
29513 11682 29561 test.rb:7       ruby ./test.rb
```
