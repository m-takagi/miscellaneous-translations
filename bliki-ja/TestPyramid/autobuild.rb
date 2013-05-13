# -*- coding: utf-8 -*-
# 更新があったファイルを自動でHTML化する。
# [起動方法] $watchr autobuild.rb
watch( '.*\.re' ) {|re|
  puts re
  system("rake build c=#{re} --trace")
}
