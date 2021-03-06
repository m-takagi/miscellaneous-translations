#@# \chapterwithauthor{Thiago Macieira}{The Art of Problem Solving}
= The Art of Problem Solving

@<href>{https://github.com/Open-Advice/Open-Advice/blob/master/code/ThiagoMacieira.tex, The original text} (licenced under CC-BY-SA)

//flushright{
Thiago Macieira
//}

#@# \authorbio{Thiago Macieira holds a double degree in Engineering and an MBA, but his
#@# involvement in Open Source predates those, getting close to 15 years now. An
#@# active participant in the KDE, Qt and MeeGo communities, he's been a software
#@# engineer and product manager for Qt, giving presentations and listening to
#@# people. These days, Thiago lives in Oslo, Norway and when he's not working on
#@# Qt, he tries (with limited success) to improve his skills at StarCraft 2.}
//lead{
Thiago Macieiraは工学とMBAのふたつの学位を持つが、オープンソースにはそれ以前から関わっており、かれこれ15年のつきあいになる。
KDEやQtそしてMeeGoのコミュニティに参加する彼はQtのソフトウェアエンジニアかつプロダクトマネージャーであり、講演などもしている。
最近はノルウェーのオスロに住んでおり、Qtの作業をしていないときはStarCraft 2の腕を磨いている（が、なかなかうまくいかない）。
//}

#@# \noindent{}Problems are a routine we are faced with almost every day of our lives and
#@# solving them is so recurrent we often do not realize we are doing it. They may
#@# be situations as simple as figuring out the best path to get to a destination or
#@# how to set the items in the fridge so they fit. Only when we fail to solve them
#@# immediately do we take notice, since we have to stop and think about them. The
#@# professional life is no different and solving professional problems becomes part
#@# of the job description.
//noindent
私たちの日常生活は、問題で満ちあふれている。なのに、その問題を解決するためにどんなことをしているのかについては、あまり顧みられない。
考えるまでもなくあっという間に正解が見つかったり、適切な処理をしたりできるほどにシンプルな問題だからなのかもしれない。
解決に手間取るようになってはじめて、問題を意識する。いったん立ち止まって考える必要が出てくるからだ。
専門家の場合もそれは一緒だ。プロフェッショナルな問題を解決すれば、それは職歴になる。

#@# Problem solving was the topic of my inaugural class when I started my
#@# engineering degree. In that overcrowded amphitheatre last century, our professor
#@# explained to roughly 700 freshmen how engineers are problem solvers and our
#@# professional lives would be moving from one problem to be solved to another.
#@# Some problems would be small and we would solve them in no time; some others
#@# would be so big we would need to have a project setting and a team to crack them
#@# - but most would fall in-between. He then proceeded to give examples on how the
#@# mentality of ``problem solver'' helped him in his professional and personal
#@# life, including one unexpected live example when the projector failed on us.
問題解決は、工学部で学び始めたときの授業のトピックのひとつでもあった。
前世紀のこと。満員の講義室で700人ほとの新入生を前にして、
エンジニアがどのようにして問題を解決するのかや、プロのエンジニアは問題解決を繰り返す日々を送ることなどを教授が説明した。
中には、あっという間に解決できるような些細な問題もある。
また、プロジェクトを立ち上げてチームで対応せざるを得ないような大きな問題もある。
でも大半は、その両極端の間に位置する。
教授はその後、実例を挙げて、「問題解決者」としてのメンタリティが日々の生活にどのように役立ってきたかを説明した。
プロジェクターの表示がおかしくなるという、予期せぬ実例にもその場で対応していた。

#@# The ability to solve problems is a skill we can hone with practice and some
#@# ground work. Practice is something one must acquire only through experience, by
#@# trial and failure, therefore it is not something that a book could teach.
#@# Getting started in solving problems, however, is something one can learn. If
#@# experience is the toolbox we carry when facing new issues, the techniques of
#@# problem solving are the instructions on how to use the tools in the toolbox.
問題解決能力は、訓練で磨き上げることのできるスキルだ。
訓練とは、実際に経験し、試行錯誤をすることでしか得られないものだ。本を読んで覚えられるものではない。
しかし、問題解決については、学ぶこともできる。
新たな問題に直面したときの道具箱になるのがこれまでの経験だとしたら、
道具箱の道具をどう使えばいいのかを書いた説明書にあたるのが、問題解決のテクニックだ。

#@# \section*{Phrasing the question correctly}
== 問いを正しく言い表す

#@# The question we are trying to answer is the direction we are going to go when
#@# trying to solve the problem. Ask the wrong question and the answers may be
#@# irrelevant, invalid or just plainly wrong. Consequently, asking the correct
#@# question is paramount. Moreover, asking the correct question correctly is
#@# important, since it provides clues as to what we are seeking.
問題を解決するときの道しるべとなるのが、答えを出そうとしている問いだ。
もし問い自体が間違っていれば、返ってくる答えも無意味なものになるだろうし、単に間違っているかもしれない。
つまり、適切な問いかけが大切だということだ。
さらに、適切な問いかけをすることで、問題解決の手がかりが得られることもある。

#@# The most useless problem statement that one can face is ``it doesn’t work'', yet
#@# we seem to get it far too often. It is a true statement, as evidently something
#@# is off. Nevertheless, the phrasing does not provide any clue as to where to
#@# start looking for answers.
問題設定として一番無意味なのは「うまく動かない」というものだ。残念ながら、こういう問いをよく見かける。
確かに動かないのだろう。何かが足りないのだから。
しかし、こんな問いでは、まず何を調べればいいのかの手がかりがつかめない。

#@# Bug-tracking systems often request that the bug reporter describe the actions
#@# taken that led up to the problem being seen, the description of what happened
#@# (that is, the symptom) and a description of what was expected to happen. The
#@# comparison between the symptom and the expected behavior is a good source for
#@# the question to be asked: why did this happen, why did this other behavior not
#@# happen? While this is not the only way for creating the question, applying this
#@# technique to problems may certainly help.
バグ追跡システム上でバグを報告しようとすると、「そのバグを再現する手順」「いったいどんな現象が発生したのか（いわゆる症状）」、
そして「報告者が期待していた動き」を説明するよう求められる。
「実際どうなったのか」と「どうなってほしかったのか」を比較すれば、よい問いが導ける。
「なぜこうなったのか？」「なぜこうならなかったのか？」
これが質問を作るための唯一の方法だとは言わないが、このテクニックはとてもよい助けとなるだろう。

#@# Phrasing the problem and the question correctly, in all its details, is also a
#@# way to further describe the problem statement. First, we must realize that the problem very likely does not lie where we are expecting it to be -- if it did, we would have probably solved the problem by now. Explaining all the details of the problem at hand provides the help-givers with more information to work with. In addition, even if counter-intuitively, the act of describing the problem in its entirety often leads to finding the solution, so much so that many development groups require ``stuck'' developers to perform this task, either by discussing it with a colleague or talking to a ``naïve'' entity, like a rubber duck or Mr. Potato-Head.
問題をうまく表現して適切な問いを作るのは、問題設定をさらにきちんとするための手段でもある。
まず知っておくべきことは、その問題について、今自分たちはきちんと把握しきれていないということだ。
仮にきちんと把握できているのなら、おそらくその時点で問題を解決できていることだろう。
問題の詳細をきちんと説明できるようになれば、助けてくれる人たちに対してよりよい情報を提供できるあらだ。
さらに、直感には反するかもしれないが、問題について説明するという行為自体が、その答えの発見につながることも多い。
それもあって、開発者たちの中では、「困っている」人に自分で問題を説明させてみることが多い。
たとえば同僚に対して説明させたり、アヒルのおもちゃやミスター・ポテトヘッドに向かって話させたりといったことをする。

#@# In addition, one must return to the question every now and then, so as to not
#@# lose sight of what the goal is. While executing activities to solve the problem,
#@# care must be taken not to concentrate exclusively on a particular piece of the
#@# problem, forgetting the overall objective. For the same reason, it is necessary
#@# to re-examine the initial question when a possible solution is found, to ensure
#@# it does solve the entire problem. In turn, this also shows the necessity of
#@# asking the right question, stating the complete problem: without the full
#@# question, the solution may be equally incomplete.
さらに、ときどき質問に立ち戻り、目標を見失わないようにする必要がある。
問題を解決しようとしているときには、特定の部分だけに注目してしまわないよう、全体的な目で捕らえることを心がける。
同じ理由で、何かの解法が見つかったときは、最初の問いをもう一度見直す必要がある。ほんとうにその解法で問題全体が解決できるのかを確かめるためだ。
同じくこれは、適切な問いを発する必要性を示すものでもある。
問いが不完全なら、解決策も同じく不完全になってしまう。

#@# \section*{\textit{Divide et conquera}}
== @<i>{分割統治}

#@# Experience in helping others trying to solve their problems online has shown me
#@# that in general people treat their issues as monolithic, indivisible stumbling
#@# blocks that must be dealt with as a whole. As such, a large problem poses a very
#@# difficult question to be answered in its entirety.
他の人が問題を解決しようとしているのをオンラインで助けていると、
たいていの人が問題を一枚岩の大きな塊だととらえてしまっていることがわかる。
分割できず、全体を一気に片付けざるを得ないと思い込んでしまっているようだ。
そのため、大規模な問題から難しい問いが生まれ、完璧に答えるのが難しくなってしまう。

#@# In truth, the vast majority of those issues can be further broken down into
#@# smaller problems, each of which are easier to deal with and determine if they
#@# are the root cause of the problem, not to mention the possibility of there being
#@# multiple sources for the symptom experienced. Repeating this operation just a
#@# couple of times will yield much smaller problems to tackle and, therefore,
#@# quicker solutions. However, the more divisions we are forced to make, the more
#@# we are required to know about the operating internals of the system at hand. In
#@# reality, the problem solver will only break down as far as his knowledge of the
#@# subject will permit and then work on the issue from there.
実際、この手の問題の大半は、さらに小さな問題に分割できる。
そうしたほうが個々の問題を扱いやすくなるし、根本的な原因がどれなのかも判断しやすくなる。
また、言うまでもなく、過去に経験したのと同じ症状に出くわす可能性も高くなる。
問題の分割を何度か繰り返せば、より取り組みやすい問題を用意することができ、すばやい解決につながる。
しかし、問題を分割しようとすればするほど、システムの内部の動きを熟知しておく必要に迫られる。
実際、問題解決者は、自分が知っている範囲までしか問題を分割できず、自分が分割できる範囲まで分割した時点で問題に対応していく。

#@# For software development, the subsystems being used are often good hints at
#@# where to break up the problem. For example, if the problem involves a TCP/IP
#@# transmission of data, two possible divisions are the sender and the receiver: it
#@# is of no use to look for the problem on the receiver’s end if the sender is not
#@# transmitting the data properly. Similarly, a graphical application that is not
#@# showing the data that it is fetching from a database has a clear division: it
#@# would be a good idea to verify that the database access works before
#@# investigating why it is not displayed properly. Alternatively, one could feed
#@# dummy data to the display functions and then verify that said data does get
#@# displayed properly.
ソフトウェア開発の場合、利用しているサブシステムを手がかりにして、問題をかみ砕いていくことが多い。
たとえばTCP/IPの送信にからむ問題なら、送信側の問題と受信側の問題に分けて考えられる。
送信側が適切にデータを送信できていない場合は、受信側をいくら調べたところで問題は解決しない。
同様に、グラフィックアプリケーションでデータベースから取得したデータを正しく表示できないという問題も、
切り分けは明確だ。まずはデータベースへのアクセスがきちんとできていることを確認してから、
なぜ適切に表示されないのかを調べればいい。
あるいは、適当なダミーデータを与えて表示機能を調べ、与えたデータがきちんと表示されることを先に確かめてもいい。

#@# Even when the groupings are not clear, dividing the problem can still help shed
#@# light on the issue. In fact, almost every division is helpful, as it reduces the
#@# amount of code to be inspected, and with it the complexity to be dealt with. At
#@# an extreme, simply dividing the code in two and searching for the problem in one
#@# half may be of use. This technique, called bisecting, is recommended if the
#@# divisions created from the subsystems and interfaces have not yet revealed a
#@# solution.
どこで切り分けたらいいのかが明確でないときでも、問題を分割してみれば、課題をあぶり出すヒントになる。
分割が害になることはほとんどない。というのも、調査対象のコードは減るし、それに伴って複雑性も減少するからだ。
極論を言えば、何も考えずにコードを二分割して、一方だけで問題を探してみるというのでも役立つ。
いわゆる二分探索というやつだが、これは、サブシステム単位やインターフェイス単位で分けてもうまく解決できなかった場合にも使える。

#@# The end-product of a sequence of proper divisions is a small, self-contained
#@# example showing the problem. At this stage, one of three options is usually
#@# right: the problem can be identified and located; the code is actually correct
#@# and the expectations were wrong; or a bug was found on the lower layer of code.
#@# An advantage of the process is that it also produces a test-case to be sent in a
#@# bug report, should a bug turn out to be the cause.
適切に分割していけば、最終的には、問題そのものを示す小さなサンプルに行き着く。
ここまできたら、次の三つのいずれかになるだろう。
問題が特定できて、その場所がわかる。あるいはコード自体は正しくて、私たちが間違った思い込みをしている。
または、コードそのものよりも低いレイヤーでのバグが見つかる。
こういう流れを経る利点は、バグレポートを送る際に使えるテストケースができて、
バグの原因をはっきりさせられるということだ。

#@# \section*{Boundary conditions}
== 境界条件

#@# An issue similar to dividing the problem is that of the boundary conditions. In
#@# mathematics and physics, boundary conditions are the set of values for the
#@# variables that determine the region of validity of the equations being solved.
#@# For software, boundary conditions are the set of conditions that must be met for
#@# the code to perform properly. Usually, the boundary conditions are far from
#@# simple: unlike mathematics and physics, the variables in software systems are
#@# far too many, which means that the boundary conditions for them are equally
#@# manyfold.
問題の分割に似た課題がもうひとつある。境界条件だ。
数学や物理学における境界条件とは、方程式を解くときの妥当な値域を定義するものだ。
ソフトウェアにおける境界条件は、コードが適切に動作するための条件群のことを指す。
通常、境界条件は、シンプルとはほど遠いものになる。
数学や物理学の場合と異なり、ソフトウェアシステムには大量の変動要素がある。つまり、境界条件の数もそれと同様に多くなるということだ。

#@# In software systems, the boundary conditions are often referred to as
#@# ``preconditions'', which are conditions that must be met before a certain action
#@# is allowed. Verifying that the preconditions have been met is a good exercise in
#@# the searching for an answer, for a violation of the preconditions is definitely
#@# a problem that needs solving -- even if it is not the root cause of the original
#@# problem. Examples of preconditions can be as simple as the fact that a pointer
#@# must be valid before it can be dereferenced or that an object must not have been
#@# disposed of before it can be used. Complex preconditions are very likely to be
#@# documented for the software being used.
ソフトウェアシステムにおける境界条件は「事前条件」と呼ばれることが多い。これは、何らかのアクションを許可するための前提として満たす必要がある条件という意味だ。
事前条件を満たしているかどうかを確かめるというのは、答えを見つけるためのよい方法だ。
事前条件に違反しているのなら、それは解決すべき問題に間違いないだろう。たとえそれが、問題の根本原因でないにしてもだ。
シンプルな事前条件の例としては、「ポインタをデリファレンスする際にはそのポインタが有効でなければならない」
や「オブジェクトを実際に利用する前に、破棄してはいけない」などがある。
複雑な事前条件は、おそらくそのソフトウェアのドキュメントに書かれていることだろう。

#@# Another interesting group of boundary conditions is characterized,
#@# interestingly, by what is not permitted: the undefined behavior. This type of
#@# boundary conditions is very common when dealing with specifications, which try
#@# to be very explicit in how software should behave. A good example of this are
#@# the compilers and language definitions. Strictly speaking, dereferencing a null
#@# pointer is an undefined behavior: the most common consequence is a processor
#@# exception being trapped and the program terminating, but other behaviors are
#@# permitted too, including working perfectly.
もうひとつ、境界条件としておもしろいものがある。許可されざるもの、すなわち未定義の挙動だ。
この種の境界条件は、仕様を扱う際に頻出する。仕様というものは、そもそもソフトウェアの振る舞いを明確に定めようとするものだ。
よい例としては、コンパイラの仕様や言語仕様などがある。
厳密に言うと、nullポインタのデリファレンスがどのような挙動になるかは未定義だ。
プロセッサが例外を捕捉してプログラムが終了するというのが一般的だが、それ以外の挙動も許されており、ふつうに動き続けても問題ない。

#@# \section*{The right tool for the right job}
== 適切な道具で適切な仕事を

#@# If engineers are problem-solvers, the engineer’s motto is ``use the right tool
#@# for the right job''. It may seem obvious, as no one is expected to use a hammer
#@# to solve an electronic problem. Nonetheless, cases of using the wrong tool are
#@# quite common, often due to ignorance of the existence of a better tool.
エンジニアの仕事が問題解決だとしたら、そのモットーは「適切な道具を使って適切な仕事を」だ。
「何を当たり前のことを言ってるんだ」と思うかもしれない。電子機器の障害にハンマーで立ち向かおうなんて人はいないだろうからね。
でもみんな、道具の使いかたを間違えていることがあまりにも多い。もっと適切な道具があることに、気づけていないんだ。

#@# Some of these tools are the bread-and-butter of software development, like the
#@# compiler and the debugger. Inability to use these tools is unforgivable: the
#@# professional who finds himself in an environment with new or unknown tools, such
#@# as when switching positions or jobs, must dedicate some time to learning them,
#@# becoming familiar with their functionalities and limitations. For example, if a
#@# program crashes, being able to determine the location of the crash as well as
#@# variables being accessed in that section of the code may help determine the root
#@# cause and thus point to the solution.
コンパイラやデバッガのように、ソフトウェア開発において不可欠な道具もある。
これらの道具が使いづらければ、とてもやっていけない。
転職などで新しい道具や未知の道具を使うことになったら、プロとしては、
ある程度の時間をとってその使いかたを学ぶ必要がある。どんな機能があってどんな制約があるのかを知り、慣れていくのだ。
プログラムがクラッシュしたときにその場所を特定したり、クラッシュした部分からアクセスしている変数を調べたりできれば、
根本原因を調べて解決に導くための助けになる。

#@# Some other tools are more advanced, belong to a niche, are not very widely
#@# known, or are available only under cost or conditions which cannot be met by the
#@# engineer. Yet they can be incredibly useful in helping elucidate problems. Such
#@# tools may be static code checker tools, thread checkers, memory debuggers,
#@# hardware event loggers, etc. For instance, development hardware often contains a
#@# way to control it via a special interface like JTAG or dump all instructions
#@# executed and processor state, but this requires having special hardware and
#@# tools, which are not readily available and usually cost more than volume,
#@# consumer devices. A different example is the valgrind suite of tools, which
#@# include thread checkers and memory debuggers and is readily available for free,
#@# but are part of the advanced, niche tools and are not taught at schools.
ニッチな用途向けであまり知られてはいないが、もっと高度な道具もある。
あるいは、コストや利用条件の関係で、エンジニアたちにはあまり縁のないような道具もある。
しかしそれらだって、問題を解明するためにはとても便利なものだ。
静的コードチェックツールやスレッドチェッカー、メモリデバッガ、ハードウェアイベントロガーなどが、その種の道具の一例だ。
たとえば、開発用のハードウェアには、制御用の特殊なインターフェイス（JTAGなど）が用意されていることが多い。
また、実行したすべての命令とプロセッサの状態をダンプできるものもある。
しかし、これらを使うには、特別なハードウェアや道具が必要で、一般的なコンシューマ向け機器よりも値が張る。
それ以外には、valgrindのツール群もある。ここにはスレッドチェッカーやメモリデバッガが含まれていて、フリーに使える。
しかし、この手の道具の使い方は、学校では教わらない。

#@# Knowing the contents of one’s toolbox is a powerful knowledge. Using a
#@# specialized tool to search for a problem will likely yield a result quicker, be
#@# it positive, confirming the problem, or negative, which in turn leads the search
#@# elsewhere. Moreover, it is important to know how to use these tools, which
#@# justifies spending time reading the documentation, in training or simply
#@# experimenting with them with known problems to understand how to proceed.
自分の道具箱の中身を知っておけば、強力な知識が得られる。
問題に特化した道具を使って対応すれば、結果が手早く得られるだろう。
問題を解決できる結果かも知れないし、その方法ではうまく行かないので別の方法を探すことになるかもしれない。
そしてさらに大切なのは、道具の使いかたを知っておくことだ。
ドキュメントを読んだり研修を受けたり、既に解決済みの問題に対してその道具を試してみたりといったことに時間を割こう。

#@# \section*{Conclusion}
== 結論

#@# Solving problems is an art available to all. Like other arts, some people may
#@# have such a skill that it may seem that they were born with the ability. But in
#@# reality, with enough experience and practice, solving problems becomes an
#@# unconscious activity.
問題解決は、誰にでもできる技術だ。
その他多くの技術と同様、中にはその能力に秀でた人もいる。まるで、生まれつきそのスキルを兼ね備えているようにも見える。
でも実際のところ、十分な訓練と経験を積めば、問題解決は無意識に行えるようになるものだ。

#@# When faced with a problem that is not easy to solve, one should sit back and
#@# take a clear look at the entirety of the problem. What is the problem we have?
#@# Can we phrase the question that we need an answer for? Once we know what we are
#@# looking for, we can start searching for where it may be located. Can we break it
#@# down into smaller, more manageable pieces? What are the best tools to be used
#@# for each piece? Have we verified that we are using the functionalities and
#@# services correctly?
簡単には解決できそうもない問題に出会ったら、落ち着いて問題全体を見直してみる必要がある。
いったい何が問題なのか？
解決すべき問題を、言葉で表せるだろうか？
捜し物が何なのかがわかりさえすれば、その場所を探し始めることができる。
問題をもっと細かく分割し、扱いやすいようにはできないだろうか？
それぞれの問題に対応するための、最適の道具は何だろうか？
その機能やサービスを、適切に使いこなしているかどうかを確かめただろうか？

#@# After solving many problems, we start to see patterns. It will become easier to
#@# detect subtle hints from the symptoms and direct the searching towards the
#@# actual problem. An experienced problem-solver may not even realize this action
#@# is taking place. That is an indication that the experience and behavior has set
#@# in so well that no conscious effort is required to access those skills.
数多くの問題を解決していると、そこにパターンが見えてくる。
そうなれば、症状を見たときにちょっとしたヒントを見つけやすくなり、実際の問題に直接立ち向かえるようになる。
経験豊富な人たちの中には、それを自覚していない人もいるかもしれない。
それはつまり、これまでの経験や振る舞いが完全に身に染みついていて、
無意識のうちにそういったスキルを使いこなせているということだ。

#@# Yet there are always some problems in life that will be hard to solve, ranging
#@# from professional to existential, philosophical or even those which are caused
#@# by pure curiosity. Then again, it is the challenge that drives us, the need to
#@# understand more. Life would be pretty tedious otherwise.
人生にはさまざまな問題があって、中には解決しづらいものもあるだろう。
問題は技術的なものから経験的なものや思想的なものまで幅広く、中には純粋な好奇心からくる問題もある。
しかし、それらに挑戦することが成長につながる。もっとよく知ることが必要だ。
そうじゃないと、ほんとにつまらない人生になってしまうだろう。
