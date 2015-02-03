#@# \chapterwithauthor{Felipe Ortega}{Prepare for the Future: Evolution of Teams in FLOSS}
= Prepare for the Future: Evolution of Teams in FLOSS

//flushright{
Felipe Ortega
//}

@<href>{https://github.com/Open-Advice/Open-Advice/blob/master/research/FelipeOrtega.tex, The original text} (licenced under CC-BY-SA)

#@# \authorbio{Felipe Ortega is a researcher and project manager at Libresoft, a research
#@# group at University Rey Juan Carlos (URJC), Spain. Felipe develops novel
#@# methodologies to analyze open collaborative communities (like free software
#@# projects, Wikipedia and social networks). He has done extensive research with
#@# the Wikipedia project and its community of authors. He actively participates in
#@# research, promotion and education/training on libre software, especially in the
#@# Master on Libre Software at URJC. He is a strong advocate of open educational
#@# resources, open access in scientific publishing and open data in science.}
//lead{
Felipe Ortegaは研究者であり、スペインのレイ・ファン・カルロス大学（URJC）の研究グループLibresoftのマネージャーである。
Felipeはオープンで協力的なコミュニティ（フリーソフトウェアプロジェクトやWikipedia、ソーシャルネットワークなど）を分析するための、今までにない新たな方法論を開拓する。
Wikipediaプロジェクトおよびその著者コミュニティについての、広範囲に及ぶ研究を終えた。
彼は、自由ソフトウェアに関する研究やプロモーション、教育／トレーニングに積極的に参加している。
彼は、オープンな教育リソースや科学出版におけるオープンアクセス、そして科学分野のオープンデータを強く支持している。
//}

#@# \noindent{}In his well-known essay \textit{The Cathedral and the
#@# Bazaar}\footnote{\url{
#@# http://www.catb.org/~esr/writings/cathedral-bazaar/cathedral-bazaar}}, Eric S.
#@# Raymond remarks one of the first important lessons that every programmer must
#@# learn: ``Every good work of software starts by scratching a developer's personal
#@# itch''. You never realize how certain is this statement unless you experience
#@# that situation by yourself. In fact, the majority of FLOSS programmers (if not
#@# all) certainly underwent this process as they got their hands dirty in a brand
#@# new project, or they join an existing one, eager to help making it better.
#@# However, many developers and other participants in FLOSS communities
#@# (documentation writers, translators, etc.) usually overlook another important
#@# lesson stressed by Raymond a bit later in his essay: ``When you lose interest in
#@# a program, your last duty to it is to hand it off to a competent successor''.
#@# This is the central topic I want to cover here. You should think about the
#@# future of your project, and the newcomers that one day will take over your work
#@# and continue to improve it.
かの有名な@<em>{伽藍とバザール}@<fn>{fn01}にて、Eric S. Raymondは全プログラマーが学ぶべき第一の教訓を示している。
「よいソフトはすべて、開発者の個人的な悩み解決から始まる」だ。
これが正しいのかどうかは、実際に経験してみるまではなかなか実感できないものだろう。
実際、FLOSSのプログラマーたち全員とは言わないまでも、多くの人たちが、これを経験しているはずだ。
新しいプロジェクトで泥臭い作業をしたり、既存のプロジェクトに合流してよりよくしていくために手助けしたりといったことである。
しかし、FLOSSコミュニティに参加する開発者（やドキュメンテーション作者、翻訳者など）の多くは、Raymondが同じエッセイで示すもうひとつの教訓を見落としている。
「あるソフトに興味をなくしたら、最後の仕事としてそれを有能な後継者に引き渡すこと」である。
ここでは、この教訓についてとりあげる。
自分のプロジェクトの行く末について考え、新しく参入してきた人たちがあなたの作業を引き継げるようにしていくべきだ。

//footnote[fn01][@<href>{http://www.catb.org/~esr/writings/cathedral-bazaar/cathedral-bazaar} / @<href>{http://cruel.org/freeware/cathedral.html}]

#@# \section*{Generational relay}
== 世代交代

#@# At some point in their lifetime, many FLOSS projects must face a generational
#@# relay. Former developers in charge of code maintenance and improvement
#@# eventually leave the project and its community, for a wide variety of reasons.
#@# These include personal issues, a new job that does not leave them enough free
#@# time, starting a new project, switching to a different project that seems more
#@# appealing, \dots\ The list can be pretty long.
FLOSSプロジェクトの多くは、どこかの時点で世代交代を迫られるものだ。
コードのメンテナンスや改良にかかわってきた人たちが、さまざまな理由でそのプロジェクトやコミュニティから去ることもある。
個人的な問題かもしれないし、転職してプロジェクトに割くことのできる時間がなくなったのかもしれない。
新しいプロジェクトを立ち上げることになったのかもしれないし、もっと魅力的な別のプロジェクトに移るのかもしれない。
それ以外にも、数多くの理由が考えられる。

#@# The study of generational relay (or developer turnover) in FLOSS projects is
#@# still an emerging area of study that needs further research to improve our
#@# understanding of these situations. In spite of this, some researchers have
#@# already collected objective evidence that sheds some light on these processes.
#@# In OSS 2006, my colleagues Jesus G. Barahona and Gregorio Robles presented a
#@# work entitled ``Contributor Turnover in Libre Software Projects''. In this work,
#@# they show a methodology to identify the most active developers (usually known as
#@# core contributors) in different time intervals, over the whole history of a
#@# given  project. Then, they apply this method to study 21 large projects, in
#@# particular GIMP, Mozilla (former instance of the well-known browser) and
#@# Evolution. In a nutshell, what they found is that we can identify three types of
#@# projects according to their rate of developer turnover:
FLOSSにおける世代交代（開発者の引き継ぎ）は、今もなお活発な研究分野であり、状況を理解するためにはさらなる調査を要する。
にもかかわらず、研究者の中にはすでに、これらのプロセスに光を落とす客観的証拠を集めた人もいる。
OSS 2006で、同僚のJesus G. BarahonaとGregorio Roblesは"Contributor Turnover in Libre Software Projects"と題する発表を行った。
彼らは、何かのプロジェクトについて、特定の期間内で最もアクティブな開発者（コアコントリビュータ）を特定する方法論を示したのだ。
そして、その方法論を21の大規模プロジェクトに適用した。GIMPやMozilla（大昔に有名だったブラウザ）そしてEvolutionなどがその一例だ。
結局、彼らが見つけたものは何だったのか。あらゆるプロジェクトは、開発者の引き継ぎの発生率によって、大きく三種類に分けられるということだ。

#@# \begin{itemize}
#@#  \item Code gods projects: These projects heavily rely on the work of their
#@# founders, and there is very little generational relay, or none at all. GIMP
#@# falls into this category.
#@#  \item Projects with multiple generations: Projects like Mozilla show a clear
#@# pattern of developer turnover, with new groups of active developers taking over
#@# the lead of code development and maintenance from the hands of the previous core
#@# contributors.
#@#  \item Composite projects: Evolution belongs to a third category of projects,
#@# showing some rate of turnover but not as evident as in the previous case,
#@# mitigated by retention of some core contributors over the project history.
#@# \end{itemize}
 * コードの神様がまとめるプロジェクト：
 プロジェクトが最初の作者に強く依存しており、世代交代がほとんど（あるいはまったく）進んでいない。
 GIMPがこのカテゴリに属する。
 * 複数世代にまたがるプロジェクト：
 Mozillaなどのプロジェクトでは、開発者が引退するときの作業を明示している。
 新たにアクティブな開発者となったグループが、かつてのコアコントリビュータから引き継ぎ、
 コードの開発やメンテナンスを率いている。
 * 複合型プロジェクト：
 第三のカテゴリに属するプロジェクトも出てきつつある。
 引退する人もいるけれども先ほどの第二カテゴリほど明白ではなく、
 一部のコアコントリビュータがプロジェクトにずっと残り続けることで、影響を和らげている。

#@# This classification leads us to an obvious question: so, what is the most common
#@# pattern found in real FLOSS projects out there? Well, results for the whole set
#@# of 21 projects analyzed in this work render a clear conclusion, which is that
#@# multiple generations and composite projects are the most common cases found in
#@# the FLOSS ecosystem. Only Gnumeric and Mono showed a distinctive pattern of strong retention of former developers, indicating that people contributing to these projects may have more appealing reasons to continue their work for a long time.
この分類を見ると、ひとつ疑問がわく。
「で、世間のFLOSSプロジェクトでいちばん多いパターンは、この中のどれなの？」
この研究で、21のプロジェクトを調べたところ、明確な答えが出た。
FLOSSのエコシステムで最も多いのは、複数の世代にまたがる複合型のプロジェクトだったのだ。
初代の開発者がずっと残り続けていたのはGnumericとMonoだけだった。
これらのプロジェクトに新しく参入していこうとすれば、他のプロジェクトよりも強い理由が必要になるということである。

#@# Nevertheless, this is not the normal picture. On the contrary, this study gives
#@# support for the advice we are considering here, that we should prepare to
#@# transfer, at some point in the future, our role and knowledge in the project to
#@# the future contributors joining our community.
にもかかわらず、これは一般的な考えとはことなる。
逆に、この研究は、私たちがここで考えているアドバイスをサポートしてくれる。
少なくとも今後いつかの時点で世代交代に備える必要があり、プロジェクトにおける役割やプロジェクトに関する知識を新しい参加者に引き継ぐ準備が必要であるということだ。

#@# \section*{The knowledge gap}
== 知識格差

#@# Any person experiencing a significant change in her life must deal with adaption
#@# to new conditions. For example, when you quit your job to get another one you
#@# prepare yourself for a certain period in which you have to fit in a new place,
#@# and integrate yourself in a different working group. Hopefully, after a while
#@# you have finally settled down in your new job. But, sometimes, you keep good
#@# friends from your old job, and you can meet them again after the move. Maybe
#@# then, talking with your former workmates, you can learn what happened with the
#@# person recruited to fill your previous position. This seldom occurs in FLOSS
#@# projects.
人生において何か大きな変化があった場合は、誰しも新しい状況への対応を迫られる。
たとえば転職した場合は、新しい場所になじんだり新しいチームとの作業に合流するために、ある程度の期間が必要になる。
たいていの場合は、ある程度の時間があれば、新たな職場に落ち着けるようになるだろう。
しかし時には、元の職場の同僚とも友人関係が続いて、転職後もしばしば会うかもしれない。
そんな場合は、元同僚との会話の中で、かつての自分の職が今どうなっているのか、どんな人が雇われたのかを知ることになるかもしれない。
FLOSSのプロジェクトにおいては、そんなことはめったに発生しない。

#@# The downside of generational relay in FLOSS projects may come in a very concrete
#@# form, namely a knowledge gap. When a former developer leaves the project, and
#@# especially if she had an extensive experience in that community, she leaves
#@# behind both her tangible and abstract knowledge that may or may not be passed
#@# on to subsequent newcomers.
FLOSSプロジェクトにおける世代交代のマイナス点は、とてもわかりやすい形式であらわれる。知識格差だ。
コミュニティ全般にわたる豊富な経験を持っていた開発者がプロジェクトを去るときには、さまざまな知識が残される。
きちんと目に見えるものもあれば、暗黙知として保たれてきたものもあるだろう。それらすべてが、後任にきちんと引き継がれるかどうかはわからない。

#@# A clear example is source code. Like any product of fine intellectual work
#@# (well, at least one should expect that, right?) developers leave a personal
#@# imprint whenever they produce new code. Sometimes, you feel eternally in debt to
#@# that awesome programmer who wrote neat, elegant code that virtually speaks by
#@# itself and is easily maintainable. Other times, the situation is the opposite
#@# and you struggle to understand very obscure, unclear code without any comments
#@# or hints that can help you.
わかりやすい例として、ソースコードを挙げよう。
あらゆる知的生産物（少なくとも、そうであるべきだと考えているよね？）と同じく、開発者が新しくコードを書くときには、そこに開発者の意図が刻み込まれる。
すばらしいプログラマーが書いたエレガントなコードを見ると、まるでコードが自ら語りかけてくるかのように思えて、メンテナンスも簡単になる。
しかし時には、正反対の状況にも直面する。あいまいかつ不明瞭で、コメントも書かれていないようなコードと格闘することもあるだろう。

#@# This is what we tried to measure in 2009, in a research work presented at HICSS
#@# 2009. The title is ``Using Software Archeology to Measure Knowledge Loss in
#@# Software Projects Due to Developer Turnover''. In case you were wondering, it has
#@# nothing to do with a whip, treasures, temples or thrilling adventures, though it
#@# was really entertaining. What we measured (among other things) was the
#@# percentage of orphaned code left behind by developers who quit FLOSS projects,
#@# and not taken by any of the current developers, yet. In this case, we choose
#@# four projects (Evolution, GIMP, Evince and Nautilus) to test our research
#@# method. And we found quite interesting results.
私たちは2009年の研究で、これを測定しようとした。そしてその結果をHICSS 2009で発表した。
タイトルは「ソフトウェア考古学を用いた、ソフトウェアプロジェクトにおける開発者の引退による知識の喪失の計測」だ。
ムチや宝箱や寺院などが出てくるスリリングな冒険などではなかったが、とてもおもしろい発表だった。
私たちは、すでにプロジェクトを去った開発者が残したコードの中で、現在の開発者がまだ誰も手を加えていない部分がどの程度あるかを調べたのだ。
その研究で対象としたのは、Evolution・GIMP・Evince・Nautilusの4プロジェクトである。
そして、とても興味深い結果が得られた。

#@# Evolution exhibited a somewhat worrying pattern, in the sense that the
#@# percentage of orphaned code was growing over time. By 2006, nearly 80\% of all
#@# source code lines had been abandoned by former developers and remained untouched
#@# by the rest of the team. On the contrary, GIMP showed a radically different
#@# pattern, with a clear and sustained effort of the development team to reduce the
#@# number of orphaned lines of code. By the way, remember that GIMP had already
#@# been characterized  as a code gods project, and thus benefits from a much more
#@# stable development team to undertake this daunting task.
Evolutionが、少し心配な兆候を示した。見捨てられたコードの割合が、上昇し続けていたのだ。
すでに引退した開発者たちが書いたコードで、現役の開発者が一切手をつけていないという部分は、
2006年の時点で全ソースコードのうち80%の行に達していた。
一方GIMPは、それとは対照的だった。手をつけられないコードを減らすように、開発チームが常々気をつけていたのだ。
ところで、先ほどお話したとおり、GIMPは「コードの神様」型のプロジェクトだった。
固定した開発チームがタスクを引き受けている。

#@# Does this mean that GIMP developers were having a much better experience than
#@# Evolution folks? To be honest, we do not know. Nevertheless, we can foresee a
#@# clear, predictable risk: the higher the percentage of orphaned code, the larger
#@# the effort to maintain the project. Whenever you need to fix a bug, develop a
#@# new feature or extend an existing one, you bump into code you had never seen
#@# before. Of course you may be a fantastic programmer, but no matter how wonderful
#@# you are, GIMP developers do have a clear advantage in this case, since they have
#@# someone in the team with precise knowledge about most of the code they need to
#@# maintain. In addition, they also work to further reduce the portion of unknown
#@# source code over time.
GIMPの開発者たちのほうが、Evolutionの人たちよりもよい経験を積んでいると言えるだろうか？
正直なところ、それはわからない。
しかし、明確なリスクを予測できる。見捨てられたコードの割合が増えれば増えるほど、プロジェクトを維持するための労力も増えていくということだ。
バグを修正しようとしたり、新機能の追加や既存の機能の拡張をしようとしたときにはいつも、今まで見たこともないようなコードとの格闘を迫られる。
もちろん、それを苦にしないような凄腕のプログラマーもいるかもしれない。
仮にそうだったとしても、GIMPの開発者たちのほうが明らかに有利だ。
彼らの場合、自分が触ろうとしているコードのほとんどについて、詳しく知っている人がチーム内に存在するからである。
さらに彼らは、未知のソースコードを少しでも減らそうと、日々作業を進めている。

#@# \section*{It feels like home}
== It feels like home

#@# Interestingly, some projects manage to retain users for much longer periods than
#@# one could expect. Again, we can find empirical evidence supporting this claim.
#@# In OSS 2005, Michlmayr, Robles and González-Barahona presented some relevant
#@# results pertaining this aspect. They studied the persistence of participation of
#@# software maintainers in Debian, calculating the so-called half-life ratio. This
#@# is the time needed for a certain population of maintainers to fall to half of
#@# its initial size. The result was that the estimated half-life of Debian
#@# maintainers was approximately 7.5 years. In other words, since the study
#@# was undertaken over a period of six and a half years (between July 1998 to
#@# December 2004), comprising from Debian 2.0 to Debian 3.1 (only stable releases),
#@# more than 50\% of maintainers of Debian 2.0 were still contributing to Debian
#@# 3.1.
興味深いことに、思っていたよりもずっと長くユーザーをひきつけているプロジェクトもある。
この件についても、実例をもって実証できる。
OSS 2005において、MichlmayrとRoblesそしてGonzález-Barahonaが、この件に関連する発表をした。
彼らは、Debianにおけるソフトウェアメンテナが、どれくらいの期間在籍し続けているかを調べて、「半減期」を計算した。
これは、メンテナ数が当初の半分になるまでに要した期間である。
Debianメンテナの半減期の見積もりは、約7年半だった。
この調査は1998年の7月から2004年の12月にかけての6年半で行われた。安定版でいうとDebian 2.0からDebian 3.1にかけての間である。
つまり、Debian 2.0当時のメンテナの半数以上は、Debian 3.1のときにも現役だったということになる。

#@# Debian has created quite a formal procedure to admit new software maintainers
#@# (also known as Debian developers) including the acceptance of the Debian Social
#@# Contract and showing good knowledge of Debian Policy. As a result, one would
#@# expect to have quite committed contributors. Actually this is the case, since
#@# these authors found that packages left behind by former maintainers were usually
#@# taken over by other developers staying in the community. Only in those cases in
#@# which the package was not useful anymore it was simply abandoned.
#@# I think we can learn some useful conclusions from these research works:
Debianには、新しいメンテナ（Debian Developer）を受け入れるための正式な手続きを定めている。
その手続きには、Debian社会契約を受け入れることや、Debianポリシーを熟知していると示すことなどが含まれている。
この手続きを経て参加することになるので、新たなメンバーはきわめて熱心な貢献者であることが期待できる。
実際そのとおりで、メンテナがいなくなったパッケージは、コミュニティ内の他の開発者に引き継がれることが多い。
もはやあまり有用ではなくなったパッケージについては、単に捨てられるだけのことだ。
これらの調査結果から、以下のようなことが学べるだろう。

#@# \begin{enumerate}
#@#  \item Spend some time to develop the main guidelines of your project. It may
#@# start as a single, short document, simply featuring some recommendations and
#@# good practices. This should evolve as the project grows, to serve as a learning
#@# pill for newcomers to quickly grasp the core values of your team, as well as the
#@# main traits of your working style.
#@#  \item Force yourself to follow well-known coding standards, good practices and
#@# elegant style. Document your code. Include comments to describe sections that
#@# might be especially hard to understand. Do not feel that you are wasting your
#@# time. In practice, you are being very pragmatic, investing time in the future of
#@# your project.
#@#  \item If possible, when the time comes for you to quit the project try to make
#@# others aware of your decision some time in advance. Make sure they understand
#@# which critical parts will need a new maintainer. Ideally, if you are a
#@# community, prepare at least a very simple procedure to automate this process and
#@# make sure that you do not forget any important point before that person leaves
#@# the project (especially if she was a key developer).
#@#  \item Keep an eye on the size of orphaned code. If it rises too rapidly, or it
#@# reaches a significant proportion of your project, it is a clear indication that
#@# you will be running into trouble very soon, especially if the number of bug
#@# reports grows or you plan to revamp your code with a serious refactoring.
#@#  \item Always ensure that you leave enough tips and hints for a newcomer to take
#@# over your work in the future.
#@# \end{enumerate}
 1. それなりに時間をかけて、プロジェクトのガイドラインを作ろう。
 まずは短めのドキュメントをひとつ用意して、推奨する方法やグッドプラクティスなどを記す。
 プロジェクトの成長とともに、このガイドラインも成長させるべきだ。
 これは、新たに参加した人たちがチームの価値観や作業スタイルをすばやくつかむための助けになる。
 1. Force yourself to follow well-known coding standards, good practices and elegant style. Document your code. Include comments to describe sections that might be especially hard to understand. Do not feel that you are wasting your time. In practice, you are being very pragmatic, investing time in the future of your project.
 1. If possible, when the time comes for you to quit the project try to make others aware of your decision some time in advance. Make sure they understand which critical parts will need a new maintainer. Ideally, if you are a community, prepare at least a very simple procedure to automate this process and make sure that you do not forget any important point before that person leaves the project (especially if she was a key developer).
 1. Keep an eye on the size of orphaned code. If it rises too rapidly, or it reaches a significant proportion of your project, it is a clear indication that you will be running into trouble very soon, especially if the number of bug reports grows or you plan to revamp your code with a serious refactoring.
 1. Always ensure that you leave enough tips and hints for a newcomer to take over your work in the future.

#@# \section*{I wish I had known you were coming (before I quit)}
== I wish I had known you were coming (before I quit)

#@# I admit it is not very easy to think about your successors while you are
#@# programming. Many times, you just do not realize that your code may end up being
#@# taken over by another project, reused by other people or you might eventually be
#@# replaced by another person, willing to continue your work thereafter.
#@# However, the most remarkable asset of FLOSS is precisely that one: the code will
#@# be reused, adapted, integrated or extended by someone else. Maintainability is a
#@# critical feature of software engineering. But it becomes paramount in FLOSS. It
#@# is not only about source code. It is about people, social relationships and
#@# digital etiquette. It is something beyond mere good taste. Quod severis metes
#@# (``as you sow, so shall you reap''). Remember that, next time, you may be the
#@# newcomer filling the knowledge gap left by a former developer.
I admit it is not very easy to think about your successors while you are programming. Many times, you just do not realize that your code may end up being taken over by another project, reused by other people or you might eventually be replaced by another person, willing to continue your work thereafter. However, the most remarkable asset of FLOSS is precisely that one: the code will be reused, adapted, integrated or extended by someone else. Maintainability is a critical feature of software engineering. But it becomes paramount in FLOSS. It is not only about source code. It is about people, social relationships and digital etiquette. It is something beyond mere good taste. Quod severis metes ("as you sow, so shall you reap"). Remember that, next time, you may be the newcomer filling the knowledge gap left by a former developer.
