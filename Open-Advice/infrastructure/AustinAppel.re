#@# \chapterwithauthor{Austin Appel}{Backups to Maintain Sanity}
== Backups to Maintain Sanity

@<href>{https://github.com/Open-Advice/Open-Advice/blob/master/infrastructure/AustinAppel.tex, The original text} (licenced under CC-BY-SA)

//flushright{
Austin Appel
//}

#@# \authorbio{Austin ``scorche'' Appel is an information security professional who spends
#@# his time breaking into things previously thought secure (with permission, of
#@# course). He is often seen around security/hacker conferences teaching people how
#@# to pick locks. In the open source world, he does a host of things for the Rockbox
#@# project and previously volunteered for the One Laptop Per Child project.}
//lead{
Austin "scorche" Appelは情報セキュリティのプロで、これまで安全だと見なされていたものを（許可を得た上で）崩していくことに時間を割いている。
セキュリティに関するカンファレンスなどでは、鍵のピッキングの方法を教えている姿をよく見かける。
オープンソースの世界ではRockboxプロジェクトを運営しており、かつてはOne Laptop Per Childプロジェクトにも協力していた。
//}

#@# \noindent{}Backups are good. Backups are great. A competent admin always keeps current
#@# backups.  This much can be gathered from any manual on server administration.
#@# The problem is that backups are only really used when absolutely necessary.
#@# If something drastic happens to the server or its data and one is forced to fall
#@# back on something, the backups will come to the rescue in the moment of most
#@# dire need. However, this should never happen, right? At any other time, what does
#@# having backups do for you and your server environment?
//noindent
「バックアップが大事」
「バックアップこそがすべて」
「デキる管理者は、いつだって最新のバックアップを持っている」
サーバー管理のマニュアルには、たいていこんなことが書いてある。
問題は、バックアップを実際に使うのは、本当に必要に迫られたときだけだということである。
一大事が起こって、サーバーやデータの復旧を迫られたとしよう。バックアップがあれば助けになるだろう。
しかし、そんな一大事が起こることは、まずない。
それ以外の平穏無事なときにもバックアップを取っておくというのは、いったい何の意味があるのだろうか？

#@# Before going further, it is important to note that the advice espoused is for
#@# the smaller open source project server administrators out there -- the silent
#@# majority. If you maintain services that would cause a large amount of
#@# frustration, and even perhaps harm if they experienced any downtime, please take
#@# this with a very small grain of salt.
話を進める前にひとこと断っておくと、今回のアドバイスは小規模なオープンソースプロジェクトのサーバー管理者向けのもの、
つまり、サイレントマジョリティ向けのものだ。
いざダウンしてしまうと大勢の人をイライラさせてしまったり、それだけではなく傷つけてしまったりするようなサービスを管理しているという人は、
話を割り引いて聞いて欲しい。

#@# For the rest of us who work with countless smaller projects with limited
#@# resources, we rarely have a separate test and production server. In fact, with
#@# all of the many services that an open source project typically needs to maintain
#@# (version control, web services, mailing lists, forums, build bots, databases,
#@# bug/feature trackers, etc.), separate testing environments are often the stuff
#@# we can only dream about. Unfortunately, the typical approach to system
#@# administration is to tread lightly and only upgrade the systems when absolutely
#@# necessary, to avoid risking dependency issues, broken code, or any of the other
#@# million things that could go wrong. The reason you are nervous is not because
#@# you may be inexperienced. It is important to know that you are not alone in
#@# this. Whether or not we admit it to others, many of us have been (and likely
#@# still are) in this position. The sad fact is that this inaction -- stemming from
#@# the fear of breaking a ``working'' system -- often leads to running services which
#@# are often several versions behind the curve, and come with a host of potentially
#@# serious security vulnerabilities. Rest assured that this is not the only way to play
#@# the game though.
それ以外の多くの人たち、つまり、数え切れないほどの小規模プロジェクトで限られたリソースの中で管理者を務めている人たちにとって、
本番環境とは別にテスト環境を用意できるなどということはめったにない。
オープンソースプロジェクトで管理すべきサービスはいろいろある（バージョン管理システムやウェブページ、
メーリングリスト、フォーラム、自動ビルド、データベース、バグ追跡など）が、それぞれにテスト環境を用意することなど夢のまた夢であることが多い。
残念なことに、そんなシステムの管理といえば、必要に迫られるまではできるだけ手を付けずそっとしておくということが多い。
依存関係を壊してしまったりコードを壊してしまったり、その他何かを間違えてしまうリスクが多すぎるからだ。
そんなふうに神経質になってしまうのは、決してあなたの経験が浅いからではない。
同じような仲間が他にもいることを知っておこう。
認めると認めざるとに関わらず、私たちの多くはそんな経験をしてきた（そして今もそうであるという人も多い）。
ただ、こんな風に何もしないでいる（「動いている」システムが壊れるのを怖がっている）と、深刻なセキュリティ問題を抱えたままでサービスを動かすことになってしまう。
でも、それ以外にもやり方はある。

#@# People tend to play a game differently when they have infinite lives as compared
#@# to needing to start over from the start as soon as one mistake is made. Why
#@# should server administration be any different? Approaching the concept of
#@# backups with an offensive mindset can change your whole view of administrating
#@# systems. Instead of living in fear from a complete dist-upgrade (or equivalent
#@# command for yum, pacman, etc.), when armed with backups, one is free to update
#@# the packages on a server secure in the knowledge that the changes can always be
#@# rolled back if things turn sour. The key to getting over this is all about a
#@# state-of-mind. There is no reason to fear as long as you have your safety net of
#@# backed-up files beneath you as you jump. After all, system administration is
#@# constantly a learning experience.
何か間違いを犯したとき、すぐに最初からやり直す必要があるほど切羽詰まっていなければ、人は別の方法を試したがる傾向がある。
サーバー管理者だって、同じことだ。
バックアップの概念に対して攻撃的な視点で迫れば、システム管理に対する見方が完全に変わるかもしれない。
dist-upgrade（あるいは、yumやpacmanなどのそれ的なコマンド）を怖がることをやめよう。
バックアップをきちんととっておけば、サーバーのパッケージを安心してアップデートできる。もし何かまずいことが起これば、いつでも元に戻せるのだから。
これを乗り越える鍵は、結局のところ心の状態だ。
バックアップファイルというセーフティネットがあるのだから、ジャンプすることを怖がる理由は何もない。
結局のところ、システム管理とは常に学び続けることだ。

#@# Of course, if you do not validate your backups, relying on backups in this way
#@# becomes a very dangerous game.  Fortunately, experienced system administrators
#@# know that the commandment ``keep current backups'' is always followed by ``validate
#@# your backups.'' Again, this is another mantra that people like to recite.  What
#@# does not fit as elegantly into a catchy mantra is how quickly and easily
#@# validating backups can be accomplished. The best way to tell that a backup works
#@# is, of course, to restore it (preferably on an identical system not currently
#@# active). But again, in the absence of such luxuries, a bit more creativity is
#@# required. This is where (at least for files) checksums can help you determine
#@# the integrity of your backed-up files. In rsync, for example, the default method
#@# it uses to determine which files have been modified is to check the time of last
#@# modification and size of the file.  However, by using the “-c” option, rsync
#@# will use a 128-bit MD4 checksum to determine whether files have changed or not.
#@# While this may not always be the best idea to do every time in all situations
#@# due to likely taking much longer than a normal rsync and increased io usage,
#@# this ensures that the files are intact.
もちろん、きちんとバックアップできているのかを確かめもせず、バックアップに頼り切っているというのは危険だ。
経験豊富なシステム管理者なら「最新のバックアップをとっておく」というのが、「正しくバックアップできているかを検証する」
とセットであることをよく知っている。「バックアップするだけじゃなくて、検証も忘れずに」。覚えておこう。
ここで問題になるのが、いかに手早くかつお手軽にバックアップを検証できるか、ということだ。
バックアップがうまくいったを確かめる方法として一番いいのは、もちろん実際にリストアしてみることだ（同じ構成の、今は使っていないシステムにリストアするのが望ましい）。
でも、そんな贅沢な環境がない場合もある。そんな場合は一工夫が必要だ。
少なくともファイルレベルでは、チェックサムを使えばバックアップの整合性を確かめられる。
たとえばrsyncの場合、ファイルが更新されたかどうかを確かめるデフォルトの方法は、最終更新時刻とサイズをチェックすることだ。
しかし、rsyncの"-c"オプションを使えば、128ビットのMD4チェックサムを使ってファイルの更新を確かめるようになる。
毎回そうするのが正解だとは限らない（通常のrsyncよりも時間がかかるようになるしシステムへの負荷も高くなる）が、
これを使えば、ファイルに損傷がないことを保証できる。

#@# The role of system administrator can be a stressful one at times.  However,
#@# there is no need to make it more so than it needs to be.  With the proper frame
#@# of mind, some ostensibly single-purpose defense-seeming tasks can be used as
#@# valuable tools to allow you to nimbly move forward with your sanity intact with
#@# the speed appreciated by all open source projects.
The role of system administrator can be a stressful one at times.  However, there is no need to make it more so than it needs to be.  With the proper frame of mind, some ostensibly single-purpose defense-seeming tasks can be used as valuable tools to allow you to nimbly move forward with your sanity intact with the speed appreciated by all open source projects.
