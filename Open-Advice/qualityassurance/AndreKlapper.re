#@# \chapterwithauthor{Andre Klapper}{Kick, Push}
= Kick, Push

//flushright{
Andre Klapper
//}

@<href>{https://github.com/Open-Advice/Open-Advice/blob/master/qualityassurance/AndreKlapper.tex, The original text} (licenced under CC-BY-SA)

#@# \authorbio{In real life, Andre Klapper is a bugmaster. During lunch break or
#@# while sleeping he works on random things in GNOME (bugsquad, release team,
#@# translation, documentation, etc) or Maemo, or studies, or eats ice cream.}
//lead{
現実世界でのAndre Klapperは、バグマスターだ。
昼休み中や寝ているときは、GNOME（バグスクアッド、リリースチーム、翻訳、ドキュメンテーションなど）
やMaemoに関するあれこれの作業をしたり、勉強したり、アイスクリームを食べたりしている。
//}

#@# \noindent{}At the very beginning I only had one question: How can I print a part of the
#@# email which I received in Gnome's email client Evolution? I asked on the
#@# corresponding mailing list.
そもそものはじまりは「GnomeのメールクライアントであるEvolutionで、
受信メールの一部を印刷するにはどうしたらいいのだろう？」というたったひとつの疑問だった。
私はそれを、メーリングリストで質問した。

#@# I had switched to Linux exactly one year ago, out of frustration that I
#@# could not make my modem work after reinstalling a proprietary operating system
#@# that was popular around that time.
私がLinuxを使い始めたのはちょうどその一年前。当時人気だったとあるプロプライエタリなOSを再インストールしたときに、モデムがうまく動かないことに嫌気がさしたのがきっかけだった。

#@# The answer to my question was ``not possible''. Cool kids would have checked out
#@# the code, compiled it, hacked it to make it act as wanted, and submitted a patch
#@# attached to a bug report by then. Well, as you can guess I was not a cool kid.
#@# My programming skills are rather limited, so I stuck to a cumbersome printing
#@# workaround for the time being. The answer I received on the mailing list also
#@# mentioned that the feature was in planning, and that a bug report had been filed
#@# on my behalf (without mentioning where, but I did not care about that -- I was
#@# happy that there were plans to fix my issue soon).
MLでの質問に対して返ってきた答えは「できない」だった。
デキるやつだったら、コードをチェックアウトしてコンパイルして、望みどおりの動きになるようハックして、
パッチつきのバグレポートを送ったところだろう。
でも残念ながら、私はデキるやつじゃなかった。
プログラミングもそんなに上手じゃなかったので、とりあえずそのときは、面倒くさいやりかたでなんとかしのいだ。
MLでの回答には「その機能は今後実装する予定だから、バグレポートに登録しておいたよ」とも書かれていた
（具体的にどこに登録したのかは教えてもらえなかったけど、そんなことはどうでもよかった。
この問題が近々修正される予定だとわかっただけでも十分だった）。

#@# It may just have been my laziness to have stayed subscribed to the mailing list.
#@# Some folks mentioned the bug tracker from time to time, often as a direct
#@# response to feature requests, so I took a look at it eventually. But bug
#@# trackers, especially Bugzilla, are strange tools with lots of complex options.
#@# An area you normally prefer to avoid unless you are a masochist. They contain
#@# many tickets describing bugs or feature requests by users and developers. It
#@# looked as if those reports were partially also used for planning priorities.
#@# (Calling this ``Project Management'' would be an euphemism - less than one
#@# fourth of the issues that were planned to get fixed or implemented for a
#@# specific release actually got fixed in the end.)
しばらくの間は、MLだけにとどまり続けていた。
しかし、バグトラッカーについての言及が目に付くことが多くなり、
機能追加の要望に対しての返答にもそれが含まれることが多くなったので、結局はバグトラッカーも見てみることにした。
バグトラッカー（Bugzilla）は、複雑なオプションだらけの奇妙なツールだった。
できればかかわりたくない代物だった。
ユーザーや開発者から挙げられたバグや機能追加要望を表すチケットが、大量に登録されていた。
そして、それらの報告が、計画の優先順位を決める材料になっているかのようだった
（これを「プロジェクト管理」と呼ぶのは少しお人よし過ぎるだろう。
特定のリリースまでの修正予定あるいは実装予定とされた課題のうち、
実際に達成されるのはその四分の一以下だった）。

#@# What I found beside an interesting look at the issues of the software and the
#@# popularity of certain requests were inconsistencies and some noise, like lots of
#@# duplicates or bug reports missing enough information to get processed properly.
#@# I felt like cleaning up a bit by ``triaging'' the available bug reports. I do
#@# not know what this tells you about my mindset though -- add wrong buzzwords for
#@# random characteristics here, like organized, persistent or knowledgeable. Also
#@# nice irony considering that my father always used to complain about my messy
#@# room.
そこでは、そのソフトウェアに関する課題の一覧や、どの要求に人気があるのかが確認できた。
ただ、矛盾やノイズも散見された。同じようなバグ報告が重複していたり、
適切に処理するための情報が不足していたりするようなものだ。
私はそれを何とかすべく、バグレポートを「トリアージ」することにした。
この言葉でうまく意図が伝わるだろうか……。
整理整頓したり、持続させたり、情報を捕足したりといったさまざまなことがらを、不適切なバズワードでまとめてしまっているかもしれない。
散らかっている私の部屋を見た父が、よくこの言葉を使っていた。皮肉なものだ。

#@# So back in those dial-up modem times I usually collected my questions and went
#@# online to enter IRC once a day in order to shoot my questions at Evolution's
#@# bugmaster who was always welcoming, patient and willing to share his experience.
#@# If there was a triaging guide available at that time covering basic bug
#@# management knowledge and explaining good practices and common pitfalls, I had
#@# not heard about it.
当時はまだ、モデムでのダイヤルアップの時代だった。聞きたいことを事前にまとめてから、一日に一回だけオンラインになってIRCに接続する。
そして、Evolutionのバグマスターに質問を投げかけた。彼はいつでも歓迎してくれて、自身の経験を伝えてくれた。
もしかしたら、その当時にも、トリアージのための指針がどこかにあったのかもしれない。
基本的なバグ管理の知識、おすすめの手法、陥りがちな罠などをまとめたものだ。
ただ、当時の私には見つけられなかった。

#@# The amount of open reports decreased by 20\% within a few months though that was
#@# of course not just because of one person starting to triage some tickets.
#@# Obviously there was some work waiting to get picked up by somebody -- like
#@# decreasing the amount of open tickets for the developers so that they could
#@# better focus, discussing and setting some priorities with them, and responding
#@# to some users' comments that had remained unanswered at that time. Open Source
#@# is always welcoming to contributions once you have found your hook to
#@# participate.
オープンなままのバグ報告の数は、数か月のうちに2割減となった。とはいっても、それがすべて、たったひとりがチケットをトリアージしたおかげだというわけではない。
同じようなことを考えている人たちは他にもいて、誰かがそれに手を付けるのを待っていたのだ。
オープンなチケットの数を減らして、開発者がより注目しやすく（そして優先順位付けをしやすく）したり、
未回答のままになっているコメントに返事をしたりといったこともあった。
もしあなたが何かやれそうなことを見つけたのなら、オープンソースの世界は常にそれを歓迎している。

#@# Way later I realized that there is some documentation around to dive into. Luis
#@# Villa - who might have been the first bugmaster ever -- wrote an essay called
#@# ``Why Everyone Needs A Bugmaster''\footnote{\url{
#@# http://tieguy.org/talks-files/LCA-2005-paper-html/index.html}}, and most
#@# Bugsquad teams in Open Source projects were publishing triaging guides in the
#@# meantime that helped newbies get involved in the community. Many Open Source
#@# developers started their great Open Source careers by triaging bugs and gained
#@# initial experience in software project management.
後に、この件に関して読むべきドキュメントがあることを知った。
おそらく史上初のバグマスターであろうLuis Villaが、「Why Everyone Needs A Bugmaster」@<fn>{fn01}というエッセイを書いていたのだ。
そして、オープンソースプロジェクトのバグ対応チームの多くは、トリアージ用のガイドを公開していた。コミュニティに新たに参入する人たちの助けとなるものだ。
オープンソースの開発者の多くは、まずバグのトリアージからはじめて、ソフトウェアプロジェクト管理の経験を積んでいくのだ。

//footnote[fn01][@<href>{http://tieguy.org/talks-files/LCA-2005-paper-html/index.html}]

#@# Nowadays there are also tools which can save you a lot of time when it comes to
#@# the repetitive grunt work part of triaging. On the server side GNOME's ``stock
#@# answers'' extension provides common and frequently used comments to add to
#@# tickets via one click, and on the client side you can run your own Greasemonkey
#@# scripts or Matěj Cepl's Jetpack extension called
#@# ``bugzilla-triage-scripts''\footnote{\url{
#@# https://fedorahosted.org/bugzilla-triage-scripts}}.
最近は、トリアージにまつわる面倒な繰り返し作業の時間を節約してくれるツールもできている。
サーバーサイドでは、GNOMEの「stock answers」エクステンションを使えば、
頻出パターンのコメントをワンクリックでチケットに追加できる。
クライアントサイドでは、Greasemonkeyスクリプトを走らせたり、Mat@<uchar>{011B}j CeplのJetpackエクステンション「bugzilla-triage-scripts」@<fn>{fn02}
を使うこともできる。

//footnote[fn02][@<href>{https://fedorahosted.org/bugzilla-triage-scripts}]

#@# If you are an average or poor musician but still love music more than anything
#@# else, you can stick around in the business as a journalist. Software development also has such niches apart from the default idea of writing code that can make you happy. You have to spend some time to find them but it is worth the efforts, experience and contacts, and with some luck and skills it might even earn you a living in your personal field of interest and keep you from ending up as a code monkey.
If you are an average or poor musician but still love music more than anything else, you can stick around in the business as a journalist. Software development also has such niches apart from the default idea of writing code that can make you happy. You have to spend some time to find them but it is worth the efforts, experience and contacts, and with some luck and skills it might even earn you a living in your personal field of interest and keep you from ending up as a code monkey.
