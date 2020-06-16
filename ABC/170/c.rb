#!/usr/bin/env ruby
X,N = gets.chomp.split.map(&:to_i)
P = gets.chomp.split.map(&:to_i)

a=[*-100..200]

P.each do |p|
  a[p+100] = -9999
end

idx = X
if a[idx+100] != -9999
  puts a[idx+100]
  return
end

(0...101).each do |i|
  if a[idx+100-i] != -9999
    puts a[idx+100-i]
    return
  end
  if a[idx+100+i] != -9999
    puts a[idx+100+i]
    return
  end
end