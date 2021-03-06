#@# \chapterwithauthor{Ara Pulido}{Given Enough Eyeballs, Not All Bugs are Shallow}
= Given Enough Eyeballs, Not All Bugs are Shallow

//flushright{
Ara Pulido
//}

@<href>{https://github.com/Open-Advice/Open-Advice/blob/master/qualityassurance/AraPulido.tex, The original text} (licenced under CC-BY-SA)

#@# \authorbio{Ara Pulido is a testing engineer working for Canonical, first as part of
#@# the Ubuntu QA team, and now as part of the Hardware Certification team. Although
#@# she started her career as a developer, she quickly found out that what she
#@# really liked was testing the software. She is very interested in new testing
#@# techniques and tries to apply her knowledge to make Ubuntu better.}
//lead{
Ara PulidoはCanonicalで働くテスティングエンジニアである。最初はUbuntu QAチームに属していたが、今はHardware Certificationチームにいる。
元は開発者だったが、程なく、自分はソフトウェアのテストが好きなのだということを知った。
新しいテスティング技術に興味があり、自分の知識を活かしてUbuntuをよりよいものにしようと試みている。
//}

#@# \section*{Dogfooding Is Not Enough}
== ドッグフーディングだけではダメ

#@# I have been involved with Free Software since my early days at university in
#@# Granada. There, with some friends, we founded the local Linux User
#@# Group and organized several activities to
#@# promote Free Software. But, since I left university, and until I started working
#@# at Canonical, my professional career had been in the proprietary software
#@# industry, first as a developer and after that as a tester.
フリーソフトウェアの世界に関わり始めたのは、グラナダの大学に通っていたころだった。
友達らとローカルのLinuxユーザーグループを作って、フリーソフトウェアを広めるためのイベントを開催したりもした。
大学を卒業してからしばらく、Canonicalに入社するまでの間は、プロプライエタリなソフトウェア業界に属していた。
最初は開発者として、そして後にはテスターとして。

#@# When working in a proprietary software project, testing resources are very
#@# limited. A small testing team continues the work that developers started with
#@# unit testing, using their expertise to find as many bugs as possible, to release
#@# the product in good shape for end user consumption. In the Free Software world,
#@# however, everything changes.
プロプライエタリなソフトウェアのプロジェクトで働いていたときには、テスティングに割かれるリソースは限られていた。
開発者が単体テストをした後を小さなテスティングチームが引き継ぎ、その専門知識をもってできるだけ多くのバグを発見し、よりよいプロダクトに仕上げて、それをエンドユーザーに使ってもらうといった具合だ。
でも、フリーソフトウェアの世界では、何もかもが違っていた。

#@# When I was hired at Canonical, apart from fulfilling the dream of having a paid
#@# job in a Free Software project, I was amazed by the possibilities that testing a
#@# Free Software project brought. The development of the product happens in the
#@# open, and users can access the software in the early stages, test it and file
#@# bugs as they encounter them. For a person passionate about testing, this is a new
#@# world with lots of new possibilities. I wanted to make the most of it.
Canonicalに雇われたときには、フリーソフトウェアプロジェクトで食べていくという夢がかなっただけでなく、
フリーソフトウェアプロジェクトのテスティングにおける可能性にも驚かされた。
プロダクトの開発はオープンに進められ、ユーザーは初期の段階からそれを使うことができる。そしてバグを発見したら、それを登録してくれるのだ。
テストに熱意を注ぐ人にとって、これはまったくの別世界だった。
まさに夢のような世界だった。

#@# As many people do, I thought that dogfooding, or using the software that you are
#@# aiming to release, was the most important testing activity that we could do in
#@# Free Software. But, if ``given enough eyeballs all the bugs are shallow'', (one of
#@# the key lessons of Raymond's ``The Cathedral \& The Bazaar''), and Ubuntu had
#@# millions of users, why were very important bugs still slipping into the release?
多くの人たちと同様に私も、フリーソフトウェアにおけるテスティングで一番大事なのはドッグフーディング（リリース予定のソフトウェアを自分で使ってみること）だと思っていた。
でも、「目玉の数さえ十分あれば、どんなバグも深刻ではない」（Raymondの「伽藍とバザール」より引用）と言われているのに、
なぜ何百万ものユーザーがいるUbuntuのリリースに深刻なバグが紛れ込んでしまうのだろう？

#@# First thing that I found when I started working at Canonical was that the
#@# organized testing activities were very few or nonexistent. The only testing
#@# activities that were somehow organized were in the form of emails sent to a
#@# particular mailing list calling for testing a package in the development version
#@# of Ubuntu. I do not believe that this can be considered a proper testing
#@# activity, but just another form of dogfooding. This kind of testing generates a
#@# lot of duplicated bugs, as a really easy to spot bug will be filed by hundreds
#@# of people. Unfortunately, the really hard to spot but potentially critical bug,
#@# if someone files it, is likely to remain unnoticed, due to the noise created by
#@# the other hundreds of bugs.
Canonicalで働くようになって最初に気づいたのは、体系的なテスティングがほとんど（まったくといっていいほど）行われていないということだった。
かろうじて体系的になっているものがあるとすれば、
Ubuntuの開発版に向けてのパッケージのテストを依頼するメールがメーリングリストに流れるくらいだった。
私には、これがまともなテスティングだとは思えなかった。ドッグフーディングと何が違うというのだろう。
こんな状態だと、バグ報告の重複など日常茶飯事だ。簡単に再現できるバグなら、何百人ものユーザーから報告を受けることになってしまう。
残念なことに、こんな状態では、見つけづらいけれども重大であろうと思われるバグが見落とされてしまう。
仮に誰かがそんなバグを登録したとしても、おそらくそのまま放置されてしまうだろう。
その他大勢が登録する大量のノイズに埋もれてしまうからだ。

#@# \section*{Looking better}
== Looking better

#@# Is this situation improving? Are we getting better at testing in Free Software projects?
#@# Yes, I really believe so.
そんな状況は改善されただろうか？
フリーソフトウェアのプロジェクトにおけるテスティング環境は、よりよくなっているだろうか？
イエス。確かに前よりはよくなっているはずだ。

#@# During the latest Ubuntu development cycles we have started several organized
#@# testing activities. The range of topics for these activities is wide, including
#@# areas like new desktop features, regression testing, X.org drivers testing or
#@# laptop hardware testing. The results of these activities are always tracked, and
#@# they prove to be really useful for developers, as they are able to know if the
#@# new features are working correctly, instead of guessing that they work correctly
#@# because of the absence of bugs.
最新のUbuntu開発サイクルにおいて、体系的なテスティングを行いはじめた。
扱う範囲は幅広い。デスクトップの新機能のテストや回帰テスト、X.orgのドライバのテストやラップトップのハードウェアのテストなども含む。
そして、それらの結果は常に記録されており、開発者にとっても役立つものであることが証明されている。
「バグが見つかっていないから、おそらくうまく動いているのだろう」ではなく、
新しい機能がきちんと動いているかどうかをきちんと確認できるからである。

#@# Regarding tools that help testing, many improvements have been made:
テストを支援するツールに関しては、さまざまな改善が見られる。

#@# \begin{itemize}
#@#  \item Apport\footnote{\url{http://wiki.ubuntu.com/Apport}} has contributed to
#@# increase the level of detail of the bugs reported against Ubuntu: crashers
#@# include all the debugging information and their duplicates are found and marked
#@# as such; people can report bugs based on symptoms, etc.
#@#  \item Launchpad\footnote{\url{http://launchpad.net}}, with its upstream
#@# connections, has allowed having a full view of the bugs, knowing that bugs
#@# happening in Ubuntu are usually bugs in the upstream projects, and allowing
#@# developers to know if the bugs are being solved there.
#@#  \item Firefox, with its Test Pilot extension and program, drives the testing
#@# without having to leave the
#@# browser\footnote{\url{http://testpilot.mozillalabs.com}}. This is, I believe, a
#@# much better way to reach testers than a mailing list or an IRC channel.
#@#  \item The Ubuntu QA team is testing the desktop in an automated fashion and
#@# reporting results every
#@# week\footnote{\url{http://reports.qa.ubuntu.com/reports/desktop-testing/natty}},
#@# allowing developers to have a very quick way to check that there have not been
#@# any major regressions during the development.
#@# \end{itemize}
 * Apport@<fn>{apport}は、Ubuntuに関するバグ報告をより詳細なレベルに持ち込む助けとなった。
 クラッシャーにはあらゆるデバッグ情報が含まれており、重複があれば検出してくれる。
 また、あやしい兆候にもとづいたバグ報告もできる。
 * Launchpad@<fn>{launchpad}はアップストリームともつながっており、バグの全貌を知ることができる。
 Ubuntuで発生したバグがアップストリームのプロジェクトに起因するものであればそれがわかり、
 そのバグがアップストリームで解決すべきものであると開発者が判断できるようになる。
 * FirefoxとTest Pilot拡張は、ブラウザから離れることなくテストを実行できる@<fn>{testpilot}。
 メーリングリストやIRCに頼るよりは、ずっと多くのテスターを集められる方法だと思う。
 * Ubuntu QAチームはデスクトップのテストを自動化しており、その結果は毎週報告される@<fn>{ubuntu}。
 開発者はこれをチェックすれば、大きな手戻りが発生したとしてもすぐに気づける。

//footnote[apport][@<href>{http://wiki.ubuntu.com/Apport}]
//footnote[launchpad][@<href>{http://launchpad.net}]
//footnote[testpilot][@<href>{http://testpilot.mozillalabs.com}]
//footnote[ubuntu][@<href>{http://reports.qa.ubuntu.com/reports/desktop-testing/natty}]

#@# Although testing in Free Software projects is getting better, there is still a lot to be
#@# done.
このように、フリーソフトウェアのプロジェクトにおけるテスト環境はよくなりつつあるが、まだまだやるべきことは多い。

#@# \section*{Looking ahead}
== Looking ahead

#@# Testing is a skilled activity that requires lots of expertise, but in the Free Software
#@# community is still seen as an activity that does not require much effort. One of
#@# the reasons could be that the way we do testing is still very old-fashioned and
#@# does not reflect the increase of complexity in the Free Software world in the
#@# last decade. How can it be possible that with the amount of innovation that we
#@# are generating in Free Software communities, testing is still done like it was in
#@# the 80s? Let's face it, fixed testcases are boring and get easily outdated. How
#@# are we going to grow a testing community, who is supposed to find meaningful
#@# bugs if their main required activity is updating testcases?
テスティングは特殊な技能を要する作業で、専門知識も必要とするものだ。なのに、フリーソフトウェアのコミュニティにおけるテスティングには、それほど労力が割かれていない。
その理由のひとつは、いまだに昔ながらのやりかたでテストを進めていて、最近のフリーソフトウェア界の複雑性を反映できていないという点だろう。
フリーソフトウェアのコミュニティは、これまでに多くのイノベーションを引き起こしてきた。なのに、テストだけが未だに80年代のやりかたを引きずっているなんて、あり得ないのではないだろうか？
振り返ってみよう。テストケースを用意するのは面倒だし、用意したテストケースもすぐに古くなって使えなくなってしまう。
テストケースを日々更新し続けるだけのお仕事だと知ったら、テストのコミュニティはとても成長しないだろうし、誰も有用なバグを見つけてくれなくなる。

#@# But, how do we improve testing? Of course, we cannot completely get rid of
#@# testcases, but we need to change the way we create and maintain them. Our
#@# testers and users are intelligent, so, why create step-by-step scripts? Those
#@# could easily get replaced by an automated testing tool. Instead of that, let's
#@# just have a list of activities you perform with the application and some
#@# properties it should have, for example, ``Shortcuts in the launcher can be
#@# rearranged'' or ``Starting up LibreOffice is fast''. Testers will figure out how
#@# to do it, and will create their testcases as they test.
そんな状況を改善するには、いったいどうすればいいのだろう？
今あるテストケースを一掃してしまうなんてことは、もちろんできない。
でも、テストケースを新しく作ったり、既存のテストケースに手を加えたりする方法は、変える必要がある。
テスターもユーザーもバカじゃない。ひとつひとつ進めていくようなスクリプトなんか、いらないだろう。
そんなスクリプトは、テスト自動化ツールを使って簡単に置き換えられる。
そんなスクリプトを作るのではなく、アプリケーションやその特徴に関して行う作業の一覧を作ろう。たとえば
「ランチャー内のショートカットを並べ替えることができる」や「LibreOfficeをすばやく起動できる」といったものだ。
どのようにテストするかはテスターが考えて、テスター自身がテストケースを用意する。

#@# But this is not enough, we need better tools to help testers know what to test,
#@# when and how.  What about having an API to allow developers to send messages to
#@# testers about updates or new features that need testing? What about an
#@# application that tell us what part of our system needs testing based on testing
#@# activity? In the case of Ubuntu we have the data in Launchpad (we would need
#@# testing data as well, but at least we have bug data). If I want to start a
#@# testing session against a particular component I would love to have the areas
#@# that have not been tested yet and a list of the five bugs with more duplicates
#@# for that particular version, so I avoid filing those again. I would love to have
#@# all this information without leaving the same desktop that I am testing. This is
#@# something that Firefox has started with Test Pilot, although they are currently
#@# mainly gathering browser activity.
でも、それだけでは不十分だ。いつ、何を、どうやってテストするのかをテスターが知ることができるような、もっとすぐれたツールが必要だ。
開発者からテスターに向けて、テストすべき変更点や新機能を伝えられるようなAPIを用意するというのはどうだろう？
これまでのテスト作業を元に、システムの一部にテストが必要となったときにアプリケーションが通知してくれるというのはどうだろう？
Ubuntuなら、データはLaunchpadに詰まっている（テスト作業のデータも必要だが、少なくともバグのデータは既に持っている）。
何かのコンポーネントのテストセッションを始めようとしたときに、
まだテストしていない範囲がわかったり、特定のバージョンで多く報告されているバグの上位5件がわかったりしたら、どんなに助かることだろう。
そうすれば、誰かが報告済みのバグを改めて報告してしまわずに済ませられる。
そういった情報を、テスト中のデスクトップから離れずに入手できるようにしたい。
FirefoxがTest Pilotで始めたのはまさにそういったことだが、今のところそれはブラウザの動きを収集することに特化している。

#@# Communication between downstream and upstream and vice-versa also needs to get
#@# better. During the development of a distribution, many of the upstream versions
#@# are also under development, and they already have a list of known bugs. If I am
#@# a tester of Firefox through Ubuntu, I would love to have a list of known bugs as
#@# soon as the new package gets to the archive. This could be done by having an
#@# acknowledged syntax for release notes, that could then get easily parsed and
#@# bugs automatically filed and connected to the upstream bugs. Again, all of this
#@# information should be easily available to the tester, without leaving the
#@# desktop.
アップストリームとのコミュニケーションも、よりよくする必要がある。
ディストリビューションの開発中にも、アップストリームの多くは開発が進んでいる。アップストリーム側でも、既知のバグの一覧を持っているだろう。
仮に私がUbuntu用にFirefoxのテストをしているとしたら、新しいパッケージがアーカイブに入ったらすぐに、既知のバグの一覧も欲しいものだ。
これは、リリースノートの書式を活用すれば実現できる。リリースノートをパースしてバグを自動的に登録し、それをアップストリームのバグと関連付けるのは容易なことだ。
もちろん、そういった情報はテスターが作業中のデスクトップからも簡単にアクセスできる必要がある。

#@# Testing, if done this way, would allow the tester to concentrate on the things
#@# that really matter and that make testing a skilled activity; concentrate on the
#@# hidden bugs that have not been found yet, on the special configurations and
#@# environments, on generating new ways to break the software. And, ultimately, on
#@# having fun while testing.
これが実現できれば、テスターは注目すべきものに集中できるようになり、熟練者の腕の見せ所になる。
まだ見つかっていない、特別な環境や設定で発生するようなバグを見つけたり、ソフトウェアに不具合を起こさせる新たな方法を見つけたりできるだろう。
そして、テスト作業そのものが楽しいものになる。

#@# \section*{Wrapping up}
== まとめ

#@# From what I have seen in the latest three years, testing has improved a lot in
#@# Ubuntu and the rest of Free Software projects that I am somehow involved with, but this
#@# is not enough. If we really want to increase the quality Free Software
#@# we need to start investing in testing and innovating the ways we do it, the same
#@# way we invest in development. We cannot test 21st century software with 20th
#@# century testing techniques. We need to react. Free Software is good because it is
#@# open source is not enough anymore. Free Software will be good because it is open
#@# source and has the best quality that we can offer.
この三年を振り返ってみると、Ubuntuやその他私がかかわってきたフリーソフトウェアプロジェクトにおけるテスティング環境はかなり改善されてきた。
しかし、まだまだ足りない。
本当にフリーソフトウェアの品質を向上させたいのなら、テスティングに対してもっと投資する必要がある。開発に対して投資するのと同じことだ。
21世紀のソフトウェアを、前世紀のテスト方法でテストするなんてあり得ない。
なんとかすべきだ。
フリーソフトウェアが優れているのは、単にそれがオープンソースであるからというだけではない。
フリーソフトウェアが優れているのは、オープンソースであり、かつ高い品質を保っているからである。
