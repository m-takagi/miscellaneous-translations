#@# -*- mode: review; coding: utf-8 -*-
#@# Datensparsamkeit
= Datensparsamkeit

#@# http://martinfowler.com/bliki/Datensparsamkeit.html

//lead{
Martin Fowler's blikiの"@<href>{http://martinfowler.com/bliki/Datensparsamkeit.html, Datensparsamkeit}"の翻訳。
//}

#@# 12 December 2013
2013/12/12

//flushright{
tags: @<href>{http://martinfowler.com/tags/database.html, database} @<href>{http://martinfowler.com/tags/web%20development.html, web development} @<href>{http://martinfowler.com/tags/internet%20culture.html, internet culture} @<href>{http://martinfowler.com/tags/legal.html, legal} @<href>{http://martinfowler.com/tags/data%20analytics.html, data analytics}
//}

#@# Datensparsamkeit is a German word that's difficult to translate
#@#   properly into English. It's an attitude to how we capture and store
#@#   data, saying that we should only handle data that we really
#@#   need.
ドイツ語にはDatensparsamkeitっていう言葉があるんだけど、それに該当する適切な英単語はない。
この言葉は、データを取得したり保存したりするときの心がけを表すもので、「実際に必要なデータだけを扱うべき」という意味だ。

//indepimage[sketch]

#@# These days there's a lot of hype around the idea of Big Data -
#@#   and with it the notion that we should capture and store every bit of
#@#   data we can get our hands on. We might not have an immediate use for
#@#   the contacts our users store in their address books, but we'll ask
#@#   for it anyway in case it comes in useful later. We'll record every
#@#   click on our website and squirrel it away in case we want to trawl
#@#   it later. We set up our smartphone app to ask for location information so
#@#   if we come up with some way to use that data later, we can. After
#@#   all, storage is cheap - so why not?
とにかく何でもかんでもビッグデータっていう時代だ。取得できるデータはとりあえず何でもかんでも取っておけという風潮になっている。
アドレス帳の連絡先情報を今すぐに使うことはないとしても、とりあえずは取得しておく。あとで役立つかもしれないからだ。
ウェブサイト上でのすべてのクリック操作も、とりあえずは記録しておく。後で何かを調べたくなるかもしれないからだ。
スマホアプリも、とりあえずは位置情報を取得できるようにしておく。そのうちいつか、何かに役立てられるかもしれないからだ。
最近はストレージがタダ同然になっているわけだし、取っておかない手はないよね。

#@# The problem with the "capture-it-all" approach is that it raises
#@#   serious questions of privacy. Even if we trust ourselves to not
#@#   abuse the data we collect, each data store represents a target for
#@#   criminals or government surveillance agencies. This issue is
#@#   particularly fraught in Germany which has seen successive regimes
#@#   where governments have carried out extensive surveillance of their
#@#   citizens in order to control them. Germany consequently has strong
#@#   data privacy laws.
この「全部取っとけ」作戦の問題は、深刻なプライバシー問題が発生することだ。
たとえ「集めたデータは決して悪用しない」と信頼されていたとしても、蓄えたデータは犯罪者たちにとって格好の標的になる。
政府機関による監視の対象にもなるだろう。
ドイツでは、この問題は特に深刻なもののなる。というのもドイツでは、政府のきちんとした監視のもとで国民をコントロールするという体制が続いているからだ。
そのためドイツでは、プライバシーに関するデータを扱う際の法律が定められている。

#@# Datensparsamkeit @<fn>{fn1} is a concept from these privacy laws that is an
#@#   opposite philosophy to "capture-all-the-things". A translation isn't
#@#   straightforward (which is why I've retained the German word) but
#@#   loosely you might translate it as something like "data austerity",
#@#   "data minimization", "data parsimony", or "data frugality". It means
#@#   that you should always ask yourself why you are capturing or storing
#@#   data, and look to handle only the minimum amount of data you need
#@#   for your purpose.
Datensparsamkeit@<fn>{fn1}はこういったプライバシー観に基づく考えかたで、「全部取っておけ」とは対極にあるものだ。
うまい訳語が見つからない（ので、このページのタイトルもドイツ語のままにした）が、意味合い的には
「データの簡素化」とか「データの最小化」「データの節約」といったあたりが近い。
つまり、データを取得したり保存したりするときには常に「なぜそれが必要なのか」を自問し、
目的を達成するために最低限必要なデータだけを扱うようにすべきという意味だ。

#@# An example of this is tracking users on your web site to
#@#   determine how many unique visitors you have. If the same person
#@#   accesses several pages within a few hours, you want to count that as
#@#   one visit. If they visit several times a month, you still only want
#@#   to count them as a single visitor. One way to do this is to log
#@#   IP addresses, you count each IP address as a single person @<fn>{fn2}. But an IP address is very revealing, and could be
#@#   used for much more than counting vistors. Datensparsamkeit suggests
#@#   that you shouldn't store the IP address directly, perhaps instead
#@#   you should hash it and only store the hash.
こんな例を考えてみよう。自分のウェブサイトを訪れるユーザーの動きを追跡し、ユニークユーザーの数を調べることになった。
同じ人が数時間以内に複数のページにアクセスした場合は、それらをまとめて一回の訪問と見なしたい。
同じユーザーが月に何度か訪れるという場合にも、それらは同一ユーザーの訪問と見なしたい。
ひとつのやりかたとして、IPアドレスを記録した上で同じIPアドレスからの訪問はすべて同一ユーザーと見なすという手がある@<fn>{fn2}。
しかしIPアドレスにはさまざまな情報が含まれており、訪問者数を数える以外にもいろんなことに使えてしまう。
このような場合にDatensparsamkeitでは、IPアドレスをそのまま保存するのはやめろという考えかたをする。
IPアドレスのハッシュを計算して、ハッシュ値だけを保存すれば事足りる。

#@# A similar example involving IP addresses is using them to infer
#@#   demographic information such as region and country. You can get most
#@#   of this information and practice datensparsamkeit by just logging the first
#@#   three octets of the IP address.
IPアドレスがらみでもう1つ、似た例がある。IPアドレスを使って、アクセス元の地域や国を推測することだ。
Datensparsamkeitの精神に則った場合、こういった情報を取得するためにIPアドレス全体を記録する必要はない。
最初の3オクテットだけ記録すれば十分だ。

#@# Datensparsamkeit isn't just about bad people stealing data, it's
#@#   also about your relationship with the primary company themselves.
#@#   The default attitude at the moment is that any data you generate is
#@#   not just freely usable by the capturer but furthermore becomes their
#@#   valuable commercial property.  Privacy advocates,
#@#   including me, think this assumption needs to be changed. Companies
#@#   should only capture what they need and the burden of demonstrating
#@#   need should fall on them. In addition, of course, they must be
#@#   completely transparant about what they capture, what they store, and
#@#   who they share their data with. Any breaches of data security must
#@#   be immediately publicized (instead of covered up, which is the
#@#   current default).
Datensparsamkeitは別に、データを盗み出すような悪人のことだけを考えているのではない。
私たちと主要な企業との関係にも関わってくることだ。
現状、私たちが作り出すあらゆるデータは、収集した側で使い放題だ。それどころか、収集した側にとっては貴重な商売材料にすらなっている。
プライバシーを気にする人たち（私もそのひとりだ）は、この前提は変わるべきだと考えている。
企業はほんとうに必要菜データだけを収集すべきだし、何のためにそのデータを収集するのかを説明する責任もある。
もちろん、何を取得したのかや何を保存したのか、そして誰がそのデータを見るのかといったことも明らかにしなければいけない。
また、データのセキュリティに関する何らかの違反があれば、すぐにそれを公表しなければいけない（現状は、公表せずに覆い隠してしまうのが一般的だ）。

#@# Even if you don't share my views on personal control of our own
#@#   data, the risks of security breaches mean that datensparsamkeit is a
#@#   wise course of action. If you hold data that you don't need, and
#@#   someone steals it and causes damage, shouldn't you be liable for
#@#   that damage? Even if there's no legal liability the publicity will
#@#   have serious consequences - and thus there is risk for anyone who
#@#   doesn't practice datensparsamkeit.
自分のデータを自己管理することについて、私とは違う考えを持つ人もいるだろう。
でも、セキュリティ違反があったときのリスクを考えれば、Datensparsamkeitというのは賢明な動きだ。
もし使う当てのないデータを抱えていたとして、誰かにそれを盗まれて被害を被ったとしよう。あなたはきっと、その損害に対する責任を問われることになるのではないだろうか。
仮に法的責任を免れたとしても、世間での表眼はがた落ちだ。Datensparsamkeitを実践しない人たちはみな、このリスクを抱えることになる。

#@# == Acknowledgements
== 謝辞

#@# <a href = 'http://erik.doernenburg.com/'>Erik D&#xF6;rnenburg</a>
#@#     introduced me to Datensparsamkeit. The meme "&#x2026; all the things"
#@#     seems to have been around forever (at least a decade) so I'm glad
#@#     Korny Sietsma taught me that <a href = 'http://hyperboleandahalf.blogspot.com/2010/06/this-is-why-ill-never-be-adult.html'>it started in 2010</a>.
この言葉を教えてくれたのは@<href>{http://erik.doernenburg.com/, Erik Dörnenburg}だった。
「すべてのものを…」というミームは、少なくともこの十年はずっと存在し続けてきたように思える。Korny Sietsmaに@<href>{http://hyperboleandahalf.blogspot.com/2010/06/this-is-why-ill-never-be-adult.html, それは2010年に始まったことだ}と教えてもらったことに感謝する。

//footnote[fn1][読み方は、@<href>{http://www.forvo.com/word/datensparsamkeit/, このように}なる。]
//footnote[fn2][NATとかを考慮すると話はややこしくなるけど、とりあえずの一例ということでシンプルに考えた。]



