# -*- coding: utf-8 -*-
watch( '.*\.re' ) {|re|
  puts re
  system("rake build c=#{re} --trace")
}
