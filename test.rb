#!/usr/bin/env ruby

require './thread_info'
include ThreadInfo

puts "Main proccess PID: #{Process.pid}"
Thread.new{
    puts "Thread TID: #{get_tid}"
    puts `ps axH -o pid,pgid,tid,comm,args -q #{$$}`
}.join

