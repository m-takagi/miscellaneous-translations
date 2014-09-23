#@# \chapterwithauthor{Vincent Untz}{Where Upstream and Downstream Meet}
= Where Upstream and Downstream Meet

@<href>{https://github.com/Open-Advice/Open-Advice/blob/master/packaging/VincentUntz.tex, The original text} (licenced under CC-BY-SA)

//flushright{
Vincent Untz
//}

#@# \authorbio{Vincent Untz is an active Free Software enthusiast, GNOME lover and
#@# advocate, as well as an openSUSE booster. He held the position of GNOME Release
#@# Manager between 2008 and 2011, until GNOME 3.0 went out, was an active GNOME
#@# Foundation director (2006-2010) and is leading the GNOME team in openSUSE.
#@# However, he finds it simpler to declare he is a ``touche-\`{a}-tout'', working on
#@# various (some say random) areas of the desktop and helping openSUSE stay
#@# amazing. Vincent is still pushing French as the official language for GNOME, and
#@# hopes to succeed really soon now. And he loves ice cream.}
//lead{
Vincent Untzは、活発に活動をしているフリーソフトウェアファンで、GNOMEを愛しており、openSUSEも支援している。
彼は2008年から2011年にかけて、GNOME 3.0が公開されるまでの間、GNOMEのリリースマネージャーだった。
また、2006年から2010年の間はGNOME Foundationの理事を務め、今はopenSUSEのGNOMEチームを率いている。
彼は、端的に言うと「火付け役」である。
デスクトップ関連のさまざまな分野で作業を進め、openSUSEが魅力を保ち続けるようにしている。
Vincentは今でも、GNOMEの公式言語としてフランス語を推している。そのうちに成功させたいものだ。
アイスクリーム好き。
//}

#@# \section*{A long time ago, in a room at night\ldots}
== むかしむかしのある夜、ある部屋で……

#@# \noindent{}I took a last look at the list of bugs to see if I had not forgotten a patch
#@# that should be merged. I made sure to write what I thought was a descriptive
#@# \texttt{NEWS} entry about the new version. I typed \texttt{make distcheck} to
#@# start the release process and looked at the terminal displaying hundreds of lines.
#@# A tarball got created, and I double-checked that the tarball was building fine.
#@# Again and again -- I was anxious and somehow did not fully trust the
#@# \texttt{make distcheck} command. After checking everything several times, I
#@# uploaded the tarball to the server and sent a mail announcement.
//noindent
バグリストを見て、パッチのマージ漏れがないかどうかを確認した。
新バージョンに関する説明は、すべて@<code>{NEWS}に書き加えたことも確認した。
@<code>{make distcheck}とタイプしてリリースプロセスを開始して、ターミナルの出力を眺めていた。
tarballができあがった。もちろん、きちんとできあがっていることを再確認した。
何度も、何度も。
心配性だったので、@<code>{make distcheck}コマンドの結果を見ただけでは安心できなかった。
全体を何度も見直してから、サーバーにtarballをアップロードして、アナウンスメールを送信した。

#@# I had managed to do it: I had released my first tarball of a software of which
#@# I had recently become co-maintainer. And I was certainly thinking: ``now users
#@# can enjoy some goodness!'' But mere seconds after my tarball got uploaded, a few
#@# people downloaded it and made my release really accessible to users.
なんとかそれをやりとげた。あるソフトウェアの共同メンテナになって、はじめてのtarballのリリースだった。
「さあ、ユーザーのみなさん。楽しんでくれ！」って感じだった。
アップロードが完了して1分もたたないうちに、何人かの人たちがそれをダウンロードしていた。
私が作ったリリースが、ユーザーの手に行き渡った瞬間だった。

#@# This is something I took for granted, as I thought it was mostly a trivial
#@# task. I thought wrong.
私はそんなにたいしたことをした感覚はなく、ほんの些細な作業だと思っていた。でもそれは間違いだった。

#@# \section*{Upstream Versus Downstream}
== アップストリーム対ダウンストリーム

#@# As users, we do not necessarily understand the different steps required to ship
#@# software to us. It is here, and we can simply enjoy it.
ユーザーの立場としては、ソフトウェアを公開するときのいろいろなステップなど知る必要もない。
単にそこにあるものを使っていれば、それでいい。

#@# Many people contribute to this process of shipping software, and the effort is
#@# usually split between two groups of people, which are central in how Free
#@# Software works today:
ソフトウェアを公開するまでには、さまざまな人たちがかかわっている。
そしてその作業は、大きく二つにわけることができる。いまどきのフリーソフトウェアは、この二つのグループが中心になっているのだ。

#@# \begin{itemize}
#@# \item \textbf{upstream}: This is the group creating the software. It obviously
#@# includes coders, but depending on the project, other categories of contributors
#@# also are key participants: designers, translators, documenters, testers, bug
#@# triagers, etc. Upstream generally only ships the source code in a compressed
#@# archive, a tarball.
#@# \item \textbf{downstream}: This is the group responsible for distributing the
#@# software to the users. In the very same way as for upstream, contributors have
#@# a wide range of profiles, as they work on translations, documentation, testing,
#@# bug triage and more. There is however a profile that is, as of now, unique to
#@# downstream: the packagers, who prepare the software to make it available in a
#@# format suitable for easier use than just source code, a package.
#@# \end{itemize}
 * @<b>{アップストリーム}：
 ソフトウェアを作るグループ。
 コードを書く人はもちろん、プロジェクトの種類によっては、それ以外のメンバーもこちら側に属することがある。
 デザイナー・翻訳者・ドキュメント執筆者・テスター・バグの仕分け担当などだ。
 アップストリームは一般に、ソースコードを圧縮してまとめたtarball形式でリリースするだけだ。
 * @<b>{ダウンストリーム}：
 ソフトウェアをユーザー向けに配布する役割を受け持つグループ。
 アップストリームと同様、さまざまな役割のメンバーが属する。
 翻訳・ドキュメンテーション・テスト・バグの仕分け担当などだ。
 しかし、ダウンストリームに特有の役割も存在する。それがパッケージャーで、
 ソフトウェアを、単なるソースコードではなくもっと使いやすい形式にとりまとめる役割を持つ。これがパッケージだ。

#@# Interestingly, this is a rather intuitive split for users too, although we are
#@# unaware of it: we often assume that the software developers are unreachable,
#@# and we send feedback and ask for help to the distributors instead.
意識しては以内だろうが、これは、ユーザーにとっても直感的な分類だ。
ユーザーにとって、ソフトウェア開発者は手の届かない存在に見える。
そこで、フィードバックや問い合わせは、配布担当の人たちに向けて送ることになる。

#@# A concrete analogy to clarify this upstream--downstream split could be the
#@# usual model for physical goods, with retail stores ($\approx$ downstream)
#@# distributing products of manufacturers ($\approx$ upstream), and playing an
#@# important role for customers ($\approx$ users).
アップストリームとダウンストリームの区切りをわかりやすくするために、通常の物品に置き換えて考えてみよう。
小売店（ダウンストリーム）は、メーカー（アップストリーム）の作った製品を販売する。
顧客（ユーザー）にとって重要な役割を果たすのが、小売店だ。

#@# \section*{A Closer Look at Downstream}
== ダウンストリームについて

#@# If I had to summarize in one sentence the role of downstream, this is how I
#@# would describe it:
ダウンストリームの役割を一言でまとめろと言われたら、私ならこう言う。

#@# \begin{quote}
#@# Downstream is the bridge between users and upstream.
#@# \end{quote}
//quote{
ダウンストリームの役割は、ユーザーとアップストリームとの橋渡しだ。
//}

#@# When I released my first upstream tarball, I was assuming that for downstream,
#@# the work would mostly be compiling the source and building a package out of it,
#@# and nothing else. Building a package is indeed the first step, but this is only
#@# the beginning of the journey for downstream: then come several different tasks,
#@# some of which are purely technical while others are social. I will only very
#@# briefly describe this journey here, in a non-exhaustive way, as this could be a
#@# whole part of this book\footnote{It is worth mentioning that I do not believe
#@# that downstream should significantly modify the software released by upstream;
#@# some downstreams do that, however, and this adds to their workload.}.
初めてアップストリームでtarballをリリースしたときの私は、
「ダウンストリームの作業って、要するにソースをコンパイルしてパッケージを作るだけのことでしょ」と考えていた。
確かにパッケージを作るのが第一の作業ではあるが、それは、ダウンストリームの長い旅の第一歩に過ぎない。
それ以外にもいくつかのタスクがあって、技術的なものもあれば社会的なものもある。
ここでは、それらを簡単に紹介しよう。すべてを網羅しようと思えばこの本をまるごと使ってしまうだろうし、ここではかいつまんだ紹介にとどめる@<fn>{fn01}。

//footnote[fn01][私は、アップストリームがリリースしたソフトウェアに対してダウンストリームで大幅に手を加えるのはよくないと考えている。しかし中にはそうしているところもあるし、それもまた彼らの作業のひとつになっている。]

#@# The building of the package itself can be less trivial than expected: it is not
#@# uncommon that the packager hits some issues that were unknown to upstream, like
#@# when a new version of the compiler is used (with new errors), or a specific
#@# library needs to be updated first (because the tarball is using some new API),
#@# or the build system of the tarball is tailored for a specific way of working
#@# (which does not follow the guidelines of the targetted distribution). What is
#@# even more ignored by many is that all those issues can also occur after the
#@# tarball has already been packaged, like when migrating the whole distribution
#@# to a new compiler or toolchain. None of those technical issues are extremely
#@# difficult to handle per se, and upstream is often happy to help solve them; but
#@# without downstream, those issues could go unnoticed by upstream for a while.
パッケージのビルドは、思っているほど些細なことではない。
アップストリームが見つけられなかった問題をパッケージャーが発見することは珍しくない。
たとえば、新しいバージョンのコンパイラを使って新たなエラーに遭遇したりすることがある。
あるいは、事前に別のライブラリを更新しておく必要があるなどという場合もある（そのtarballが、何らかの新たなAPIを使っている場合など）
また、tarballのビルドシステムが強いる作業手順が、パッケージング対象のディストリビューションのガイドラインに沿っていないこともある。
より見落とされがちなのが、こういった問題は、tarballをパッケージにした後にも発生しうるということだ。
たとえば、ディストリビューション全体で、新しいコンパイラやツール群への移行が決まったときなどが、その一例だ。
これらの技術的な課題は、決していかんともしがたい難問だというわけではない。
アップストリーム側で解決してしまえることも多い。
しかし、ダウンストリームからの指摘がなければ、そういった課題がアップストリームに認知されるまでには時間がかかる。

#@# What is more important to me than those technical challenges is that downstream
#@# is generally in direct contact with more users than upstream. This results in
#@# bug reports, support requests, requests to change configuration defaults, and
#@# more. This is where the downstream crowd really shines: instead of simply
#@# forwarding all of this upstream, downstream will work on this feedback from
#@# users to only relay summarized bits that upstream will be able to use. Often,
#@# bug reports come without enough information on the issue (in which case
#@# downstream will ask for more details); often, the support requests stem from a
#@# misunderstanding on the user side (which downstream can then, sometimes,
#@# translate to a suggestion to change the software to avoid such
#@# misunderstanding); often, new configuration defaults are suggested without a
#@# good-enough rationale (and downstream will work with the users to see if there
#@# is a valid rationale). Of this huge amount of data, downstream will produce a
#@# smaller set of information that upstream will be able to easily consume, which
#@# will lead to improvements in the software.
個人的に、こういった技術的な課題よりもずっと大切だと感じていることがある。
それは、ダウンストリームのほうが、アップストリームよりも、直接ユーザーとかかわることが多いということだ。
つまり、バグ報告やサポート依頼、デフォルト値の変更の要望などを、直接ユーザーから受けることになる。
これこそがダウンストリームの見せ場だ。
それらを単にアップストリームに投げるのではなく、
ユーザーからのフィードバックをきちんととりまとめて、アップストリームで活用しやすいようにまとめてから、アップストリームに依頼する。
ほとんど情報がないバグ報告が来ることも多い（そんな場合は、ダウンストリームがユーザーに詳細を確認する）。
ユーザーの誤解にもとづくサポート依頼が来ることも多い（そんな場合は、その誤解を解消するように、うまい返事を返すこともある）。
十分な説明のないまま、設定のデフォルト値が変わってしまうことも多い（そんな場合は、ダウンストリームがユーザーに、その意図を説明することになる）。
こういった数々のフィードバックの中から、アップストリーム側で役立てられるであろうものだけをピックアップして送る。
これが、そのソフトウェアの改善につながる。

#@# There are generally two rewards for downstream contributors: the indirect and
#@# direct contributions to the upstream project thanks to the efforts done
#@# downstream are enough for many, but on top of that, the direct contact with
#@# more users leads to being exposed to the satisfaction of those users. And such
#@# exposure easily makes a day for many people.
There are generally two rewards for downstream contributors: the indirect and direct contributions to the upstream project thanks to the efforts done downstream are enough for many, but on top of that, the direct contact with more users leads to being exposed to the satisfaction of those users. And such exposure easily makes a day for many people.

#@# As a sidenote, when considering the amount of work involved downstream, I would
#@# not be surprised if, at the end of the day, many upstream contributors are glad
#@# to have downstream people act as a buffer to them: this significantly lowers
#@# the amount of feedback, while at the same time improving the quality of the
#@# feedback (by avoiding duplicated comments, undetailed issues, etc.). This
#@# enables upstream to stay focused on the development itself, instead of forcing
#@# upstream to either triage feedback or ignore it.
As a sidenote, when considering the amount of work involved downstream, I would not be surprised if, at the end of the day, many upstream contributors are glad to have downstream people act as a buffer to them: this significantly lowers the amount of feedback, while at the same time improving the quality of the feedback (by avoiding duplicated comments, undetailed issues, etc.). This enables upstream to stay focused on the development itself, instead of forcing upstream to either triage feedback or ignore it.

#@# Just looking at my own upstream experience, I cannot count the number of
#@# patches I received from downstream to fix build issues. I also remember
#@# countless discussions about the bugs that were affecting users the most, that
#@# helped me organize my priorities. And since I joined the downstream ranks, I
#@# started sending similar build-related patches to upstream, and chatting with my
#@# downstream hat to relay feedback from users. Such upstream--downstream
#@# collaboration contributes to improving the overall quality of our Free Software
#@# ecosystem, and I would consider it essential to our good health.
Just looking at my own upstream experience, I cannot count the number of patches I received from downstream to fix build issues. I also remember countless discussions about the bugs that were affecting users the most, that helped me organize my priorities. And since I joined the downstream ranks, I started sending similar build-related patches to upstream, and chatting with my downstream hat to relay feedback from users. Such upstream--downstream collaboration contributes to improving the overall quality of our Free Software ecosystem, and I would consider it essential to our good health.

#@# \section*{Pushing Downstream Upstream!}
== Pushing Downstream Upstream!

#@# I am firmly believing that there must be a strong upstream--downstream
#@# collaboration for a project to succeed. I doubt there is much disagreement on
#@# this by anyone; however, by ``downstream'', people usually think of the work
#@# being done in distributions. But, especially, for applications, it is becoming
#@# more and more viable to push that downstream work out of distributions and to
#@# get benefits from such a move upstream.
I am firmly believing that there must be a strong upstream--downstream collaboration for a project to succeed. I doubt there is much disagreement on this by anyone; however, by ``downstream'', people usually think of the work being done in distributions. But, especially, for applications, it is becoming more and more viable to push that downstream work out of distributions and to get benefits from such a move upstream.

#@# Tools like the Open Build Service make it easy to have people build and
#@# distribute packages of an application for several distributions. This has
#@# benefits for both the users (who can more easily and more quickly enjoy updates
#@# of their favorite applications) and for upstream (who can help build a stronger
#@# relationship with its user base). The only challenge with such a move is that
#@# there still needs to be someone doing the packaging work, but also to manage
#@# the larger feedback from users. That is, there still needs to be someone doing
#@# the downstream work; except that it would be done as part of upstream.
Tools like the Open Build Service make it easy to have people build and distribute packages of an application for several distributions. This has benefits for both the users (who can more easily and more quickly enjoy updates of their favorite applications) and for upstream (who can help build a stronger relationship with its user base). The only challenge with such a move is that there still needs to be someone doing the packaging work, but also to manage the larger feedback from users. That is, there still needs to be someone doing the downstream work; except that it would be done as part of upstream.

#@# To me, this sounds like an exciting perspective, and I would even go as far as
#@# suggesting that we, the Free Software community, should slowly migrate the
#@# downstream work being done in distributions to be based on downstream work
#@# being done directly upstream whenever possible -- and at least for
#@# applications, this is often possible. This obviously requires a mind shift, but
#@# it would allow more sharing of the efforts that are most of the time being
#@# duplicated in all the different downstreams as of today.
To me, this sounds like an exciting perspective, and I would even go as far as suggesting that we, the Free Software community, should slowly migrate the downstream work being done in distributions to be based on downstream work being done directly upstream whenever possible -- and at least for applications, this is often possible. This obviously requires a mind shift, but it would allow more sharing of the efforts that are most of the time being duplicated in all the different downstreams as of today.

#@# For people willing to start contributing nowadays to applications they like,
#@# this packaging work upstream is a whole new approach that could be really
#@# successful!
For people willing to start contributing nowadays to applications they like, this packaging work upstream is a whole new approach that could be really successful!

#@# \section*{I tried it and I stayed, will you?}
== I tried it and I stayed, will you?

#@# Downstream has always been essential to my life as a Free Software user --
#@# after all, only a few people are manually building their whole system from
#@# scratch and I am not one of them. But it also became an asset to me as an
#@# upstream developer, as I started taking more time to discuss with downstream
#@# people to get more feedback on bugs, features, general quality and even future
#@# directions of the software I was working on.
Downstream has always been essential to my life as a Free Software user -- after all, only a few people are manually building their whole system from scratch and I am not one of them. But it also became an asset to me as an upstream developer, as I started taking more time to discuss with downstream people to get more feedback on bugs, features, general quality and even future directions of the software I was working on.

#@# This is only when I started being a downstream myself that I understood that
#@# this position is indeed a privileged one to help advise upstream, because of
#@# the direct contact to users and because of the different perspective we get
#@# from this different position.
This is only when I started being a downstream myself that I understood that this position is indeed a privileged one to help advise upstream, because of the direct contact to users and because of the different perspective we get from this different position.

#@# Without downstream, we would not be where we are today. If you want to make a
#@# difference, be sure that by joining a downstream effort and talking to
#@# upstream, you will succeed.
Without downstream, we would not be where we are today. If you want to make a difference, be sure that by joining a downstream effort and talking to upstream, you will succeed.

#@# And you will have fun.
And you will have fun.
