#@# \chapterwithauthor{Jeff Mitchell}{Love the Unknown}
= Love the Unknown

@<href>{https://github.com/Open-Advice/Open-Advice/blob/master/infrastructure/JeffMitchell.tex, The original text} (licenced under CC-BY-SA)

//flushright{
Jeff Mitchell
//}

#@# \authorbio{Jeff Mitchell spends his working days dabbling in all sorts of computer
#@# and networking technologies, his off-time dabbling in all sorts of FOSS projects
#@# and most enjoys a confluence of both. After serving as a system administrator in a
#@# professional capacity between 1999-2005, he has since kept his skills sharp by
#@# performing volunteer work for various workplace and FOSS projects. These days,
#@# most of his FOSS time is spent as a sysadmin for KDE and a core developer of
#@# Tomahawk Player. Jeff currently lives in Boston, USA.}
//lead{
Jeff Mitchellはふだん、コンピューターやネットワーク技術に関するありとあらゆる作業をしている。
業務以外でもさまざまなFOSSプロジェクトに関わっており、そのどちらも楽しんでいる。
1999年から2005年にかけてシステム管理者として働いた彼は、その後さまざまな職場やFOSSプロジェクトで自分の腕を磨いていった。
最近は、FOSSがらみでは、KDEのシステム管理者やTomahawk Playerのコア開発者としての作業が主になっている。
Jeffはボストン在住だ。
//}

#@# \noindent{}Recently I was part of a group interviewing a potential new sysadmin at
#@# work. We had gone through a few dozen resumes and had finally brought our first
#@# candidate in for an interview. The candidate -- let’s call him John -- had
#@# experience with smaller, lab-style computer clusters as well as larger data
#@# center operations. At first, things were proceeding apace, except that he had an
#@# odd answer to a few of our questions: ``I’m a sysadmin.''
#@# The meaning of that statement was not immediately clear to us, until the
#@# following exchange occurred:
//noindent
最近、職場で新しいシステム管理者を雇うためのグループ面接にかかわった。
数十名の経歴書を見た上で、まず1人めの候補者を面接した。
その候補者（仮にJohnとしよう）は、小規模なコンピュータークラスターの経験もあれば大規模なデータセンターの運用経験もあるという人だった。
最初のうちは特に問題なく進んでいたけれど、いくつかの質問に対しては「私はシステム管理者です」と奇妙な答えを返すだけだった。
何が言いたいのかよくわからなかったけど、以下のようなやりとりを経て、ようやくその意味を理解した。

#@# \begin{quote}
#@# \textbf{Me}: So you’ve said that you don’t have Cisco IOS experience, but what about
#@# networking in general?\newline
#@# \textbf{John}: Well, I’m a sysadmin.\newline
#@# \textbf{Me}: Right, but -- how about networking concepts? Routing protocols like BGP or
#@# OSPF, VLANs, bridges \dots \newline
#@# \textbf{John, exasperated}: I’m a \emph{sysadmin}.
#@# \end{quote}
//quote{
@<b>{私}: さっきCiscoのIOSは経験がないって言ってたけど、一般的なネットワーク構築に関してはどうなの？

@<b>{John}: えーと、私はシステム管理者です。

@<b>{私}: うん。だけど、ネットワーク構築の概念はわかるよね？BGPやOSPFみたいなルーティングプロトコルとか、VLANとか、ブリッジとか…。

@<b>{若干いらついたJohn}: だから、私は@<em>{システム管理者}だって言ってるでしょ！
//}

#@# That was when we understood what he was saying. John had not been telling us that he knew
#@# of the various things we were asking about because he was a sysadmin; he was
#@# telling us that because he was a sysadmin he did \emph{not} know about those things.
#@# John was a \emph{systems} administrator; claiming such was his hand-waving way of
#@# indicating that those tasks belonged to network administrators.
#@# Probably unsurprisingly, John did not get the job.
ようやく、彼が何を言っているのかを理解した。
彼が言いたかったのは、「私はシステム管理者だから、あなたがたが言っているようなこともみんな知っている」と伝えたかったわけではなかったのだ。
要するに「私はシステム管理者だから、あなたがたが言っているようなことは@<em>{知らない}」と伝えようとしていたのだ。
Johnはあくまでも@<em>{システム}の管理者であり、私たちが言っているようなことはネットワーク管理者のタスクだろうと言いたかったようだ。
お察しのとおり、Johnは不採用となった。

#@# \paragraph*{}For many open source projects, specialization is a curse, not a blessing.
#@# Whether a project falls into one category or the other often depends on the size
#@# of the development team; specialization to the degree of single points of
#@# failure can mean serious disruption to a project in the event of a developer
#@# leaving, whether on good, bad or unfortunate terms. It is no different for open
#@# source project sysadmins, although the general scarcity of these seems to allow
#@# projects to adopt sometimes dangerous tolerances.
多くのオープンソースプロジェクトにとって、何かに特化してしまうのは忌むべきことである。決して喜ばしいことではない。
プロジェクトがどのカテゴリーに収まるのかは、開発チームの規模で決まることが多い。
あまりに特化してしまってそこが単一障害点になると、その開発者が何らかの理由でプロジェクトを去ったときに、大混乱を引き起こしてしまう。
オープンソースプロジェクトのシステム管理者だって同じことだ。しかし、そんな人材はあまり多くないので、危険な人物をやむを得ず受け入れてしまうプロジェクトもある。

#@# The most egregious example I have seen involved one particular project whose
#@# documentation site (including all of their installation and configuration
#@# documentation) was down for over a month. The reason: the server had crashed,
#@# and the only person with access to that server was sailing around on a ``pirate
#@# ship'' with members of Sweden’s Pirate Party. That really happened.
これまでで最悪の経験は、とあるプロジェクトのドキュメンテーションサイト（インストールとか設定に関するドキュメントも含む）が1か月以上ダウンしたことだった。
その理由が何だったかというと、サーバーがクラッシュしたときに、そのサーバーにアクセスできる唯一の人物がスウェーデンの海賊パーティに参加中だったからだ。
まさに「海賊船」で航海中だったんだ。
これ、本当にあった話。

#@# However, not all single points of failure are due to absentee system
#@# administrators; some are artificial. One large project’s system administration
#@# access rights decisions were handled by a single lead administrator, who not
#@# only reserved some access rights solely for himself (you guessed it: yes, he did disappear for a
#@# while and yes, that did cause problems) but made decisions about how access
#@# rights should be given out based on whether he himself trusted the candidate.
#@# ``Trust'' in this case was based on one thing; it was not based on how many
#@# community members vouched for that person, how long that person had been an
#@# active and trusted contributor to that project, or even how long he had known
#@# that individual as a part of that project. Rather, it was based on how well he
#@# personally knew someone, by which he meant how well he knew that individual \emph{in
#@# person}. Imagine how well that scales to a distributed global team of system
#@# administrators.
しかし、すべての単一障害点の原因がシステム管理者の不在だというわけではない。人為的な原因であることもある。
ある大規模プロジェクトでは、システムの管理者権限の付与に関わるのはたった一人のリード管理者だけだった。
彼だけにしか権限のないところもいくつかあった（そう、お察しのとおり、彼がいないときに問題になることもあった）
し、誰にどんな権限を与えるかの基準になるのは、リード管理者自身がその人を信頼しているかどうかだけだった。
ここで言う「信頼」の基準はたったひとつ。コミュニティのメンバーのうち何人がその人を保証しているかだとか、
その人がどれだけの期間プロジェクトに貢献してきたかだとか、そのプロジェクトの中でとの程度認知されているだとか、そんなことは関係なかった。
唯一の基準は、リード開発者がその人のことを個人的に知っているかどうか。つまり、@<em>{直接}会ったことがあるかどうかということだった。
世界中に広がるチームになったときに、そんなことでうまくいくだろうか。

#@# Of course, this example only goes to show that it is very difficult for open
#@# source sysadmins to walk the line between security and capability. Large
#@# corporations can afford redundant staff, even when those staff are segmented
#@# into different responsibilities or security domains. Redundancy is important,
#@# but what if the only current option for redundant system administration is
#@# taking the first guy that randomly pops into your IRC channel and volunteers to
#@# help? How can you reasonably trust that person, their skills, or their motives?
#@# Unfortunately, only the project’s contributors, or some subset of them, can
#@# determine when the right person has come along, using the same Web of Trust model
#@# that underpins much of the rest of the open source world. The universe of open source
#@# projects, their needs, and those willing to contribute to any particular project
#@# is blissfully diverse; as a result, human dynamics, trust, intuition and how to
#@# apply these concepts to any particular open source project are broad topics that are far
#@# out of scope of this short essay.
もちろん、この例が示しているのは単に、オープンソースプロジェクトのシステム管理者がセキュリティと能力との間を行き来するのが難しいということに過ぎない。
大企業なら、さまざまな責務やセキュリティ領域に分かれる場合であっても、余分にスタッフを雇って冗長化できるだろう。
冗長化は確かに大切だ。でも、システム管理者を冗長化するための方法が、IRCチャネルにいる誰かをピックアップしてお手伝いをお願いすることだけだったとしたらどうだろう。
その人が信頼できるかどうか、技術の有無、やる気があるかどうかなどを、どうやって判断するのだろう。
残念ながら、プロジェクトへの貢献者として適切かどうかを判断するには、オープンソースの世界を固めている「Web of Trust」モデルに頼るしかない。
オープンソースプロジェクトの世界はさまざまで、そのニーズや特定のプロジェクトに貢献したいという気持ちもさまざまだ。
なので、人間工学や信頼、直感そしてそれらをオープンソースプロジェクトにあてはめるといった内容は、この短い文章ではとても語りつくせない。

#@# \paragraph*{}One key thing has made walking that security/capability line far easier,
#@# however: the rise of distributed version control systems, or DVCSes.
#@# In the past, access control was paramount because the heart of any open source
#@# project -- its source code -- was centralized. I realize that many out there
#@# will now be thinking ``Jeff, you should know better than that; the heart of a
#@# project is its community, not its code!'' My response is simple: community
#@# members come and go, but if someone accidentally runs ``rm -rf'' on the entire
#@# centralized VCS tree of your project and you lack backups, how many of those community members are
#@# going to be willing to stick around and help recreate everything from scratch?
#@# (This is actually based on a real example, where a drunk community member angry at some code he was debugging
#@# ran an ``rm -rf'' on his entire checkout, \emph{intending} to destroy all code
#@# in the project. Fortunately, he was not a sysadmin with access to the central repository, and too drunk
#@# to remember his copy was simply a checkout.)
しかし、セキュリティと能力との間を行き来するのをとても簡単にするできごとがあった。分散型バージョン管理システム（DVCS）の登場だ。
かつては、アクセス権限の管理が最重要だった。あらゆるオープンソースプロジェクトの肝であるそのソースコードは、中央管理されていたからだ。
「Jeff、君はいったい何を言っているんだ。プロジェクトの肝はコミュニティであって、コードなんかじゃないよ！」
きっとそう思った人も多いだろう。
でも、考えてみて欲しい。コミュニティのメンバーは常に入れ替わるものだ。
でも、中央管理型のVCSを使っていたとして、もし誰かが間違ってプロジェクトのVCSツリーで「rm -rf」を実行してしまったらどうなるだろう。もしバックアップがなかったとしたら？
そのとき、もういちどゼロから何もかも作り直していこうと思えるメンバーが、コミュニティの中にどれくらいいるだろうか
（これは非現実的な話ではなく、実話に基づく例だ。酔っ払ったメンバーが、デバッグ中のコードに腹を立てて、チェックアウトしたツリー全体を「rm -rf」してしまった。
プロジェクトの全コードを@<em>{意図的に}消し去ろうとしたんだ。
幸いなことに、彼には中央レポジトリへのアクセス権限がなかった。
そして、泥酔していたせいで、自分が消そうとしているのが単なるローカルコピーだということにも気づかなかった）。

#@# A project’s code is its heart; its community members are its lifeblood. Without
#@# either, you are going to have a hard time keeping a project alive. With a centralized VCS,
#@# if you did not have the foresight to set up regular backups, maybe you could get lucky and be
#@# able to cobble together the entire source tree from checkouts
#@# that different people had of different parts of the tree, but for most projects the history
#@# of the code is as important as the current code itself, and you will still have
#@# lost all of it.
プロジェクトの心臓がコードだとしたら、血液にあたるのがコミュニティのメンバーだ。
どちらか一方でも欠けると、プロジェクトの存続は難しい。
中央管理型のVCSを使っていて、定期的なバックアップをするだけの先見の明がなかった場合のことを考えよう。
各メンバーがチェックアウトしたツリーをかき集めれば、ソースツリー全体を復元できることだろう。
しかし、たいていのプロジェクトにとっては、現状のコードだけでなくそこに至るまでの履歴も同じくらい重要だ。
現状のツリーが復元できたところで、過去の履歴は失われたままだ。

#@# That is no longer the case. When every local clone has all of the history for a
#@# project and nightly backups can be performed by having a cron job run something as simple
#@# as ``git pull'', the centralized repository is now just a coordination tool. This takes
#@# its status down a few notches. It still has to be protected against threats both
#@# internal and external: unpatched systems are still vulnerable to known exploits,
#@# a malicious sysadmin can still wreak havoc, an ineffective authentication system
#@# can allow malicious code into your codebase, and an accidental ``rm -rf'' of the
#@# centralized repository can still cause loss of developer time. But these
#@# challenges can be overcome, and in the day and age of cheap VPS and data center
#@# hosting, absentee sysadmins can be overcome too. (Better make sure you have
#@# redundant access to DNS, though! Oh, and, put your websites in a DVCS repository
#@# too, and make branches for local modifications. You will thank me later.)
#@# So, DVCSes give your project redundant hearts nearly for free, which is a great
#@# way to help open source sysadmins sleep at night and makes us all feel a little
#@# bit more like Time Lords. It also means if you are not on a DVCS, stop reading
#@# this very moment and go switch to one. It is not just about workflows and tools. If
#@# you care about the safety of your code and your project, you will switch.
今やそんな心配はない。
ローカルのクローンにもプロジェクトの歴史がすべて含まれるようになり、日時のバックアップも単純に"git pull"をcronで実行するだけでよくなった。
中央リポジトリは、今や単なる共同作業の場でしかなくなったのだ。
内外の脅威に対する防御が必要だという点は変わらない。パッチを当てていないシステムは既知の攻撃に対して脆弱だし、
悪意のあるシステム管理者が破壊行為をするかもしれない。認証システムが不十分だと悪意のあるコードが取り込まれてしまうかもしれないし、
中央リポジトリで"rm -rf"されてしまうと開発者に時間を取らせてしまうことには変わりがない。
でも、こういった問題は対応可能だし、安価なVPSやデータセンターホスティングが使える今では、システム管理者が不在でもなんとかできるだろう
（ああ、DNSへの冗長アクセスも忘れないようにね！あと、ウェブサイトのソースもDVCSのリポジトリに入れておくこと。そしてローカルでの変更用のブランチを作るんだ）。
つまり、DVCSを使えば、自分たちのプロジェクトの心臓をほぼ無料で冗長化できるということだ。
システム管理者は安心して眠れるようになるだろうし、まるで自分たちが『ドクター・フー』のタイム・ロードになったかのように思えることだろう。
もしまだDVCSを使っていないというのなら、これを読むのをいったん中断して、今切り替えよう。
単なるワークフローだとかツールだとかの問題ではない。
自分たちのコードやプロジェクトの安全を考えれば、切り替えたほうがいい。

#@# \paragraph*{}Source code redundancy is a must, and in general the greater amount of
#@# redundancy you can manage, the more robust your systems. It may also seem
#@# obvious that you want sysadmin redundancy; what you may not find obvious is that
#@# redundant sysadmins are not as important as redundant skillsets. John, the
#@# systems administrator, worked in data centers and companies with redundant
#@# sysadmins but rigid, defined skillsets. While that worked for large companies
#@# that could pay to acquire new sysadmins with particular skillsets on-demand,
#@# most open source projects do not have that luxury. You have to make do with what
#@# you can get. This of course means that an alternative (and sometimes the only
#@# alternative) to finding redundant system administrators is spreading the load,
#@# having other project members each pick up a skill or two until redundancy is
#@# achieved.
ソースコードの冗長化は必須だ。一般論として、冗長化をすればするほどシステムは堅牢になる。
また、これも明らかなことだが、システム管理者も冗長化しておきたいところだ。ただ実は、システム管理者の冗長化よりもスキルセットの冗長化のほうが大切だ。
例のシステム管理者Johnが働いていたデータセンターや企業では、確固たるスキルセットを備えたシステム管理者を冗長化していた。
必要なスキルセットを持つシステム管理者を必要に応じて雇えるような大企業ならそれでもいいが、たいていのオープンソースプロジェクトにはそんな余裕がない。
いま手に入るものでなんとかする必要がある。
システム管理者の冗長化ができない場合の代替策（もしかしたら唯一の代替策かも）は、負荷分散をすることだ。
必要菜スキルセットの一部を満たしている他プロジェクトのメンバーを選び、一部を任せるなどして冗長化を達成すればいい。

#@# It is really no different from the developer or artwork side of a project; if half of
#@# your application is written in C++ and half is written in Python, and only one
#@# developer knows Python, a departure from the project by that developer will
#@# cause massive short-term problems and could cause serious long-term problems as
#@# well. Encouraging developers to branch out and become familiar with more
#@# languages, paradigms, libraries, and so on means that each of your developers
#@# becomes more valuable, which should not come as a shock; acquiring new skillsets
#@# is a byproduct of further education, and more educated personnel are more
#@# valuable. (This also makes their CV more valuable, which should provide a good driving force.)
プロジェクトの開発者やデザイナーの立場であっても、同じことだ。
たとえばC++とPythonで書かれているアプリケーションがあったとしよう。プロジェクト内にPythonがわかる開発者が1人しかいなかったときに、
もしその開発者がプロジェクトを離れてしまったら、短期的には大問題になる。そして、そのままにしておけば長期的な問題の原因にもなるだろう。
他の分野にも手を広げ、いろんな言語やパラダイムそしてライブラリにもなじんでおくよう開発者に促しておけば、
それぞれの開発者の価値がより高まる。当たり前のことだ。新たな知識は新たなスキルセットの獲得につながるので、知識がある人ほど価値も高まる
（そうすれば各自の経歴書もより価値が高まる。これはよいきっかけになるだろう）。

#@# Most open source developers that I know find it a challenge and a pleasure to
#@# keep testing new waters, as that is the behavior that led them to open source
#@# development in the first place. Similarly, open source system administrators are
#@# in scarce supply, and can not afford to get stuck in a rut. New technologies
#@# relevant to the sysadmin are always emerging, and there are often ways to use
#@# existing or older technologies in novel ways to enhance infrastructure or
#@# improve efficiency.
私の知るオープンソース開発者の多くは、新しいことにチャレンジし続けることに喜びを見いだしている。
そういう気持ちがあったからこそ、オープンソースの開発の世界に入ってきたのだろう。
オープンソースのシステム管理者は数少ないのだし、既存の慣習に凝り固まっている余裕はない。
システム管理に関する新たなテクノロジーも常に出続けているし、既存の古いテクノロジーの新たな活用法が出てくることもある。
それらを使ってインフラを強化したり、効率を上げたりできるだろう。

#@# John was not a good candidate because he brought little value; he brought little
#@# value because he had never pushed outside of his defined role. Open source
#@# sysadmins falling into that trap do not just hurt the project they are currently
#@# involved with, they reduce their value to other projects using different
#@# infrastructure technologies that could desperately use a hand; this decreases
#@# the overall capability of the open source community. To the successful open
#@# source administrator, there is no such thing as a comfort zone.
John was not a good candidate because he brought little value; he brought little value because he had never pushed outside of his defined role. Open source sysadmins falling into that trap do not just hurt the project they are currently involved with, they reduce their value to other projects using different infrastructure technologies that could desperately use a hand; this decreases the overall capability of the open source community. To the successful open source administrator, there is no such thing as a comfort zone.
