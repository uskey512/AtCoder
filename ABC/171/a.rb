#!/usr/bin/env ruby
I = gets.chomp.to_s
puts (I =~ /[A-Z]/) == 0 ? 'A' : 'a'
