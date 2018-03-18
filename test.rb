#!/usr/bin/env ruby

require './thread_info'
include ThreadInfo

puts Process.pid
# a = 1
Thread.new{
    puts get_tid
    #a += 1 while true
    sleep 100
}.join

