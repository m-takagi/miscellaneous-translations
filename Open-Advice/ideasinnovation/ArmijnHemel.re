#@# \chapterwithauthor{Armijn Hemel}{Code First}
= Code First

@<href>{https://github.com/Open-Advice/Open-Advice/blob/master/ideasinnovation/ArmijnHemel.tex, The original text} (licenced under CC-BY-SA)

//flushright{
Armijn Hemel
//}

#@# \authorbio{Armijn Hemel has been using free software since 1994, when his brother
#@# came home with a stack of floppies with an early version of FreeBSD. A year
#@# later the switch to Linux was made and he has been using Unix(-like) systems
#@# ever since then, both at home, during his studies at Utrecht University and at
#@# work.
#@# Since 2005, Armijn has been part of the core team of gpl-violations.org and
#@# has his own consultancy (Tjaldur Software Governance Solutions) specialized
#@# in detection and resolution of GPL license violations.}
//lead{
Armijn Hemelがフリーソフトウェアを使い始めたのは1994年のこと。初期のFreeBSDが入ったフロッピーディスクを兄が持ち帰ってきたのがきっかけだった。
1年後にはLinuxに転向したが、その当時からずっと、家でもユトレヒト大学でも職場でもUnix系のシステムを使い続けている。
2005年には、gpl-violations.orgのコアチームの一員となり、コンサルタント会社（Tjaldur Software Governance Solutions）を設立した。
GPL違反を見つけたり解決したりするのが専門だ。
//}

#@# \noindent{}Back in 1999 I was just getting started in FLOSS activism. I had already
#@# been using Linux and FreeBSD for a number of years then, but I was merely a user and
#@# I wanted to actually contribute something back. The best way I thought for
#@# contributing back was to write code. I could not find any existing project I
#@# would be comfortable working on, so I decided to start my own project. In
#@# hindsight the reason why I did that was probably a mixture of various things.
#@# One factor was insecurity whether or not my code was actually good enough to be
#@# accepted in an existing project (I was, and still am, no brilliant programmer)
#@# and with your own project that is not much of an issue. The second reason is
#@# probably youthful arrogance.
//noindent
話は1999年にさかのぼる。私がFLOSSの世界で積極的に動き始めたころのことだ。
LinuxやFreeBSDを使い始めてから数年はたっていたものの、当時の私は単なる1ユーザーに過ぎず、何かしらの恩返しをしたいと思っていた。
とりあえず、一番いいのはコードを書くことだよなあ、と考えた私は、
自分が気持ちよく貢献できそうなプロジェクトを探してみた。が、見つからなかった。
そこで、自分でプロジェクトを立ち上げることにした。
今思えば、そんな行動に至った背景にはいろいろな要素があったのだろう。
そのひとつは「自分のコードが既存のプロジェクトに受け入れられるほどのできばえなのか不安」ということだった
（その当時も、そして今も、決して私はスーパープログラマーではない）。
自分のプロジェクトなら、そんな心配はいらない。
自分のプロジェクトを立ち上げたもうひとつの理由は、いわゆる若気の至りってやつだろう。

#@# My idea was to make a presentation program, which would fancy more of the
#@# advanced (or, annoying, if you wish) features of PowerPoint. Back in that time
#@# there was no OpenOffice.org and choices were pretty limited to LaTeX and
#@# Magicpoint, which are more tailored to delivering text content, than to showing

#@# whirly effects. I wanted to make the program cross platform and back then I
#@# thought Java would be the best choice for this. The idea was to make a
#@# presentation program, written in Java, which would have support for all those
#@# whirly effects. I made up my mind and started the project.
My idea was to make a presentation program, which would fancy more of the advanced (or, annoying, if you wish) features of PowerPoint. Back in that time there was no OpenOffice.org and choices were pretty limited to LaTeX and Magicpoint, which are more tailored to delivering text content, than to showing whirly effects. I wanted to make the program cross platform and back then I thought Java would be the best choice for this. The idea was to make a presentation program, written in Java, which would have support for all those whirly effects. I made up my mind and started the project.

#@# Infrastructure-wise everything was there: there was a mailing list, there was a
#@# website, there was source code control (CVS). But there was no actual code for
#@# people to work on. The only things I had were some ideas of what I wanted to do,
#@# an itch to scratch and the right buzzwords. I actually wanted people to join in
#@# creating this program and make it a truly collaborative project.
Infrastructure-wise everything was there: there was a mailing list, there was a website, there was source code control (CVS). But there was no actual code for people to work on. The only things I had were some ideas of what I wanted to do, an itch to scratch and the right buzzwords. I actually wanted people to join in creating this program and make it a truly collaborative project.

#@# I started making designs (with some newly acquired UML knowledge) and sent them
#@# around. Nothing happened. I tried to get people involved, but collaboratively
#@# working on a design is very hard (besides, it is probably not the best way to
#@# create software in the first place). After a while I gave up and the project
#@# silently died, without ever producing a single line of code. Every month I was
#@# reminded by the mailing list software that the project once existed, so I asked
#@# it to be taken offline.
I started making designs (with some newly acquired UML knowledge) and sent them around. Nothing happened. I tried to get people involved, but collaboratively working on a design is very hard (besides, it is probably not the best way to create software in the first place). After a while I gave up and the project silently died, without ever producing a single line of code. Every month I was reminded by the mailing list software that the project once existed, so I asked it to be taken offline.

#@# I learned a very valuable, but somewhat painful, lesson: when you announce
#@# something and when you want people to get involved in your project, at least
#@# make sure there is some code available. It does not have to be all finished, it
#@# is OK if it is rough (in the beginning that is), but at least show that there is
#@# a basis for people to work with and improve upon. Otherwise your project will go
#@# where many many projects, including my own failed project, have gone: into
#@# oblivion.
I learned a very valuable, but somewhat painful, lesson: when you announce something and when you want people to get involved in your project, at least make sure there is some code available. It does not have to be all finished, it is OK if it is rough (in the beginning that is), but at least show that there is a basis for people to work with and improve upon. Otherwise your project will go where many many projects, including my own failed project, have gone: into oblivion.

#@# I eventually found my niche to help advance FLOSS, by making sure that the legal
#@# underpinnings of FLOSS are tight through the gpl-violations.org project. In
#@# retrospect I have never used, nor missed, the whirly effects in presentation
#@# programs and found them to be increasingly irritating and distracting too much
#@# from the content. I am happily using LaTeX beamer and occasionally (and less
#@# happily) OpenOffice.org/LibreOffice to make presentations.
I eventually found my niche to help advance FLOSS, by making sure that the legal underpinnings of FLOSS are tight through the gpl-violations.org project. In retrospect I have never used, nor missed, the whirly effects in presentation programs and found them to be increasingly irritating and distracting too much from the content. I am happily using LaTeX beamer and occasionally (and less happily) OpenOffice.org/LibreOffice to make presentations.
