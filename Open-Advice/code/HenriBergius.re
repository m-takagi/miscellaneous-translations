#@# \chapterwithauthor{Henri Bergius}{Cross-Project Collaboration}
= Cross-Project Collaboration

@<href>{https://github.com/Open-Advice/Open-Advice/blob/master/code/HenriBergius.tex, The original text} (licenced under CC-BY-SA)

//flushright{
Henri Bergius
//}

#@# \authorbio{Henri Bergius is the founder of Midgard, a free software content
#@# repository. He has also been involved for a long time in making Linux desktops
#@# location-aware, and in the Maemo and MeeGo communities. He runs a small
#@# consultancy called Nemein, hacks in CoffeeScript and PHP, and spends much of his
#@# free time motorcycling through remote parts of the Eurasian continent. He lives
#@# in the cold Nordic city of Helsinki, Finland.}
//lead{
Henri Bergiusは、フリーソフトウェアコンテンツのリポジトリであるMidgardの創設者だ。
彼はまた、Linuxデスクトップのロケーション対応や、MaemoとMeeGoのコミュニティにも長きにわたって関わっている。
Nemeinという小規模なコンサルト会社を経営し、CoffeeScriptやPHPをハックして、ユーラシア大陸の隅々までバイクで巡る。
彼は現在、フィンランドのヘルシンキに住む。
//}

#@# \begin{quote}
#@# There may be a whole new system where you're defined more and more by who you
#@# are and not by what you own, by what you've created and shared, and what other
#@# people have then built on” -- Former Xerox PARC director John Seely Brown in An
#@# Optimist's Tour of the Future (Mark Stevenson, 2010)
#@# \end{quote}
//quote{
きっと新しいシステムがあるのだろう。そこでは単に、あなたが何者かと言うことだけが判断の基準になる。何を持っているだとか何を作ったり共有したりしただとか、それを使って周りの人たちが何を作ったかだとかは気にしない。--元Xerox PARCの所長であるJohn Seely Brown、Optimist's Tour of the Futureにて（Mark Stevenson, 2010）
//}

#@# \section*{On projects and communities}
== プロジェクトとコミュニティ

#@# Much of the free software world is split into tribes gathered around something
#@# called projects. There are major projects like GNOME, KDE or Drupal, and lots of
#@# smaller projects revolving around a single application or a library.
フリーソフトウェアの世界の大半は、何らかの「プロジェクト」に関わる人たちで構成されている。
GNOMEやKDE、あるいはDrupalといた有名どころのプロジェクトもあるが、ちょっとしたアプリケーションやライブラリを扱う小さめなプロジェクトも大量に存在する。

#@# Actually, calling them projects is kind of silly.
でも実際のところ、こういったものを「プロジェクト」と呼ぶのはちょっとおかしい。

#@# In my mind, a project is a plan of effort towards an achievable aim, with a
#@# schedule that has start and end dates. So, for example GNOME 3.1 would be a
#@# project, but GNOME as whole is not. It is a community of individuals maintaining
#@# and creating a body of software through various smaller efforts, or projects.
そもそもプロジェクトとは、何らかの目標を達成するための実行計画のことであり、開始日と終了予定日が定まっているものだ。
たとえば「GNOME 3.1プロジェクト」というのはアリだろうが、全体としてのGNOMEを「プロジェクト」と呼ぶのはちょっと違う。
これは個人のあつまるコミュニティで、ソフトウェアを作ったり保守したりといったことを、さまざまな小規模の作業やプロジェクトを通して行うものだ。

#@# Enough with pedantry. The problem with the concept of projects is that they end
#@# up keeping people apart, creating insular communities that often are reluctant
#@# or unable to collaborate with ``the competition''. But in the end, all of these
#@# communities consist of individuals who write free software, and it is their
#@# choice whether this software can be used in different environments or not.
もったいぶった言いかたはここまでにして。
プロジェクトっていう概念の何が問題かというと、それが最終的に、人を区分けしてそれぞれ別の島にまとめてしまうってことだ。
お互い協力しあうこともしづらいし、できないこともある。
これらのコミュニティは、結局のところはフリーソフトウェアを書く個人の集まりだ。
そのソフトウェアをさまざまな環境で使えるかそうでないかも、彼ら自身が決めることになる。

#@# In the end we all want the software we created to be used by others. And even
#@# better, we want others to join in our efforts and build cool stuff on what we
#@# have created. That is, after all, what is in the heart of free software.
結局のところ、私たちは自分の作ったソフトウェアを他人に使ってもらいたいものだ。
あわよくば、他の人たちも自分たちのプロジェクトに巻き込んで、よりよいものを一緒に作っていきたい。
それこそが、フリーソフトウェアの肝だ。

#@# So why do we enact these walls around ourselves? Keeping an insulated community
#@# just fosters an us-versus-them mentality. The incompatibilities of different
#@# programming languages already do so much to keep us apart, why add to that?
なのになぜ、私たちは、自分たちの周りを壁で覆ってしまうのだろう？
そんなふうにコミュニティを隔離し続けると、「私たちvsそれ以外の人たち」という考えかたが生まれてしまう。
各種プログラミング言語の間の非互換性のせいで私たちは既に分断されているというのに、なぜさらに分断しようとするのだろう？

#@# \section*{The Midgard lesson}
== Midgardで学んだこと

#@# What I wish I had known when I started, in those optimistic dot-com days of the late
#@# 90s, is that in reality software efforts do not need to be isolated. With a bit
#@# of care we can share our software and ideas across communities, making both the
#@# communities and our software stronger and better.
私がこの世界に入ったばかりのあのころ、ドットコム全盛の90年代後半に知っておきたかったことがある。
実際のところ、ソフトウェア開発は自分たちだけでやる必要がないってことだ。
ちょっとした注意さえ払えば、自分たちのソフトウェアやアイデアを他のコミュニティとも共有できるし、
お互いのコミュニティやソフトウェアも、そのほうがずっと強力でよいものになる。

#@# When I started my free software career, it was a time of big projects. Netscape
#@# was open-sourced, the Apache Software Foundation was getting a form, and
#@# venture-funded efforts were going on everywhere. It felt like a norm to try and
#@# build your own community. This was the sure path to fame, fortune and building
#@# cool stuff.
私がフリーソフトウェアの世界に入ったころは、巨大プロジェクトの時代だった。
Netscapeがオープンソースになったり、Apache Software Foundationが設立されたりなど、
ベンチャーによる出資がそこここで行われていた。
とにかくやってみようよ、そして自分たちのコミュニティを作ろうよという空気があった。
それこそが、名を挙げてちやほやされるための道だった。

#@# So what we did was build our own web framework. Back then there were not that
#@# many of them, especially for the fledgling PHP language. PHP was not even the
#@# first choice for us, only picked after a long debate about using Scheme which
#@# our lead developer preferred. But PHP was gaining popularity, becoming
#@# the programming language of the web. And web was what we wanted to build.
で、何をしたかというと、自分たちでWebフレームワークを作ったんだ。
当時はまだそれほどWebフレームワークはなかった。特に、生まれたばかりのPHP言語を使っているものなどは、ほぼなかった。
最初からPHPを使おうと考えていたわけではない。開発チームのリーダーがScheme好きだったのでそれを使おうとしていたのだが、
長い議論の末、PHPを使うことになった。
後にPHPの評判は高まり、Web上でのプログラミングといえばPHPだというくらいの存在になった。
Webこそが、私たちが作りたかったものだった。

#@# At first, things looked very promising. Lots of developers flocked into our
#@# community and started contributing. There were even companies founded around
#@# Midgard. And the framework became more featureful, and more tighly coupled.
最初のうちは、何も問題はなかった。
多くの開発者たちがコミュニティに群がって、どんどん貢献してくれた。
Midgardに出資してやろうという企業さえ現れるくらいだった。
フレームワークはどんどん多機能になり、密結合になっていった。

#@# In hindsight, this was the mistake we made. We positioned Midgard to be
#@# something apart from PHP itself. Something that you would install separately,
#@# and build whole websites on top of. It was either our way or the highway.
今から思えば、それが間違いだった。
私たちはMidgardを、PHP自体とは別のものとして扱った。
個別にインストールして、その上でウェブサイトを構築するというものだ。
私たちの流儀に従うか、あるいはハイウェイに乗るかだった。

#@# With Midgard you would have to use our content repository interfaces for
#@# everything, as well as our user management and permissions model. You would have
#@# to use our templating system, and store much of your code into the repository
#@# instead of a file system.
Midgardを使う場合は、何をするときにもそのコンテンツリポジトリインターフェイスを使う必要があった。
また、ユーザー管理や権限についても、その流儀に従わなければいけなかった。
テンプレートシステムを使うことも強要されたし、コードの大半は、ファイルシステム上ではなくリポジトリに入れる必要があった。

#@# This obviously did not sit too well with the wider PHP community. Our ideas were
#@# strange to them, and Midgard at the time was even distributed as a huge patch to
#@# the codebase, as PHP3 did not have loadable modules.
どう見てもこれは、PHPコミュニティにうまく広まるようなものではなかった。
私たちの考えかたは彼らにとっては奇妙なものだったし、当時のMidgardはPHP本体へのパッチという形式で配布されていた。
というのも、PHP3にはモジュールを読み込む機能がなかったからだ。

#@# Many years have passed, and PHP’s popularity has waxed and waned. At the same
#@# time the Midgard community has been quite constant -- a small, tightly knit
#@# group making progress in the long run, but apart from the wider PHP
#@# world.
あれから何年もたった。その間PHP自体の人気は一進一退を繰り返している。
一方、Midgardコミュニティはずっと一貫している。
小規模で密接にまとまったグループが長期的な視点で歩みを進めるが、PHPそのものの広がりとは一線を画するというものだ。

#@# We always wondered why we found it so hard to interact with the PHP world. Even
#@# some communities doing something completely different, like the GNOME desktop,
#@# seemed easier to approach. Only recently, after years of isolation, we realized
#@# the problem. In a nutshell: frameworks keep us apart, while libraries allow us to
#@# share our code and experiences.
PHPの世界とうまくやっていくのが、なぜこんなにも難しいものなのかと、常々悩んでいた。
たとえばGNOMEデスクトップコミュニティのように、ずっととっつきやすいようなコミュニティもあったのだ。
ずっと孤立しっぱなしだったが、最近ようやく問題がわかった。
簡単に言うと、フレームワークは別々のもの、一方ライブラリはコードや経験を共有するものだということだ。

#@# \section*{On libraries and frameworks}
== ライブラリとフレームワーク

#@# In the end, software is about automation, about building tools that people can
#@# use for solving problems or connecting with each other. With software, these
#@# tools have many layers in them. There are low-level services like an operating
#@# system, then there are libraries, frameworks and toolkits, and then there are
#@# actual applications.
要するにソフトウェアとは自動化のことであり、問題を解決したり問題と問題を連携させたりするためのツールを作ることである。
ソフトウェアの世界では、この手のツールはたくさんの階層にわかれている。
OSのような低水準のサービスもあれば、その上で動くライブラリやフレームワークそしてツールキットなどもあり、
さらにその上にはアプリケーションがある。

#@# Applications are always written for some particular usecase, and so between
#@# them there are very few opportunities for sharing code.
アプリケーションは常に、何らかのユースケースに沿って書かれる。そのため、
アプリケーション間でコードを共有するチャンスはめったにない。

#@# The much more appealing opportunity is on the libraries and frameworks level. A
#@# framework, if generic enough, can usually be utilized for building different
#@# sorts of software. And a library can be used to bring a particular piece of
#@# logic or connectivity anywhere. In my view, this is the layer where most
#@# programming should happen, with specific applications being just something that
#@# connects various libraries into a framework that then runs the actual app.
The much more appealing opportunity is on the libraries and frameworks level. A framework, if generic enough, can usually be utilized for building different sorts of software. And a library can be used to bring a particular piece of logic or connectivity anywhere. In my view, this is the layer where most programming should happen, with specific applications being just something that connects various libraries into a framework that then runs the actual app.

#@# What is a library and what is a framework? People often use these terms
#@# interchangeably, but there is a useful rule of thumb to know which is which: a
#@# library is something that your code calls, while a framework is something that
#@# calls your code.
What is a library and what is a framework? People often use these terms interchangeably, but there is a useful rule of thumb to know which is which: a library is something that your code calls, while a framework is something that calls your code.

#@# If you want your code to be used and improved upon, the best way to go about it
#@# is to maximize the number of potential users and contributors. With free
#@# software, this works by ensuring your code can be adapted to multiple different
#@# situations and environments.
If you want your code to be used and improved upon, the best way to go about it is to maximize the number of potential users and contributors. With free software, this works by ensuring your code can be adapted to multiple different situations and environments.

#@# In the end, what you want to do is to build a library. Libraries are cool.
In the end, what you want to do is to build a library. Libraries are cool.

#@# \section*{How to make collaboration work}
== How to make collaboration work

#@# The hardest part is to get over the barrier of them-versus-us. The developers of
#@# the other community are hackers building free software, just like you. So just
#@# get over the question and start talking with them.
The hardest part is to get over the barrier of them-versus-us. The developers of the other community are hackers building free software, just like you. So just get over the question and start talking with them.

#@# After you have the discussion going, here are some points that I have found
#@# important when actually implementing common ideas or libraries across project
#@# boundaries:
After you have the discussion going, here are some points that I have found important when actually implementing common ideas or libraries across project boundaries:

#@# \begin{itemize}
#@# \item Use permissive licensing and try to avoid copyright assignments or other
#@# requirements potential users would find onerous.
#@# \item Host the project on neutral ground. For web projects, Apache is quite a
#@# good home. For desktop projects, Freedesktop is probably the best option.
#@# \item Use technologies that do not impose too many constraints. Libraries should
#@# be quite low-level, or provide D-Bus APIs that can be used with any system.
#@# \item Avoid framework-specific dependencies. For example, KDE has found GeoClue
#@# hard to adopt because it uses GNOME-specific settings interfaces.
#@# \item Meet the other guys. If you are from the GNOME project, go to aKademy and
#@# give a talk, and if you are a KDE developer, go and talk at GUADEC. After you
#@# have shared a beer or two collaboration over IRC happens much more naturally.
#@# \item Finally, accept that not everybody will use your implementation. But if
#@# they at least implement the same ideas, then collaboration is still possible.
#@# \end{itemize}
 * Use permissive licensing and try to avoid copyright assignments or other requirements potential users would find onerous.
 * Host the project on neutral ground. For web projects, Apache is quite a good home. For desktop projects, Freedesktop is probably the best option.
 * Use technologies that do not impose too many constraints. Libraries should be quite low-level, or provide D-Bus APIs that can be used with any system.
 * Avoid framework-specific dependencies. For example, KDE has found GeoClue hard to adopt because it uses GNOME-specific settings interfaces.
 * Meet the other guys. If you are from the GNOME project, go to aKademy and give a talk, and if you are a KDE developer, go and talk at GUADEC. After you have shared a beer or two collaboration over IRC happens much more naturally.
 * Finally, accept that not everybody will use your implementation. But if they at least implement the same ideas, then collaboration is still possible.


#@# Good luck with breaking down the project boundaries! In most cases it works if
#@# your ideas are good and presented with an open mind.  But even if you do not
#@# find a common ground, as long as your implementation solves the use case for you
#@# it has not been in vain. After all, delivering software, and delivering great
#@# user experience is what counts.
Good luck with breaking down the project boundaries! In most cases it works if your ideas are good and presented with an open mind.  But even if you do not find a common ground, as long as your implementation solves the use case for you it has not been in vain. After all, delivering software, and delivering great user experience is what counts.
