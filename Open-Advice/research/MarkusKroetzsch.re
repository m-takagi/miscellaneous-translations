#@# \chapterwithauthor[Out of the Lab, into the Wild]{Markus Kr\"otzsch}{Out of the Lab, into the Wild: Growing Open Source Communities around Academic Projects}
= ラボを離れ、町へ出よう：アカデミックプロジェクトにまつわるオープンソースコミュニティの育て方

//flushright{
Markus Kr@<uchar>{00f6}tzsch
//}

@<href>{https://github.com/Open-Advice/Open-Advice/blob/master/research/MarkusKroetzsch.tex, The original text} (licenced under CC-BY-SA)

#@# \authorbio{Markus Kr\"otzsch is a post-doctoral researcher at the Department of
#@# Computer Science of the University of Oxford. He obtained his Ph.D. from the
#@# Institute of Applied Informatics and Formal Description Methods (AIFB) of the
#@# Karlsruhe Institute of Technology (KIT) in 2010. His research interest is the
#@# intelligent automatic processing of information, ranging from the foundations of
#@# formal knowledge representation to application areas like the Semantic Web. He
#@# is the lead developer of the successful Semantic Web application platform
#@# Semantic MediaWiki, co-editor of the W3C OWL 2 specification, chief maintainer
#@# of the semanticweb.org community portal, and co-author of the textbook
#@# Foundations of Semantic Web Technologies.}
//lead{
Markus Kr@<uchar>{00f6}tzschは、オックスフォード大学のコンピュータサイエンス学科で、博士課程修了後の研究を続けている。
カールスルーエ工科大学（KIT）のInstitute of Applied Informatics and Formal Description Methods（AIFB）で、
2010年にPh.D.を取得した。
彼の研究の対象はインテリジェントな自動情報処理で、
形式的な知識の表現方法といった基盤部分から、セマンティックWebのような応用分野まで幅広く扱っている。
彼は、セマンティックWebアプリケーションプラットフォームSemantic MediaWikiのリード開発者であり、
W3C OWL 2の仕様の共著者でもある。また、コミュニティポータルsemanticweb.orgのメンテナでもあり、
『Foundations of Semantic Web Technologies』の共著者でもある。
//}

#@# \noindent{}Academic researchers develop large amounts of software, be it for validating a
#@# hypothesis, for illustrating a new approach, or merely as a tool to aid some
#@# study. In most cases, a small focused prototype does the job, and it is
#@# disposed quickly after the focus of research moves on. However, once in a while,
#@# a novel approach or upcoming technology bears the potential to really change the
#@# way in which a problem is solved. Doing so promises professional reputation,
#@# commercial success, and the personal gratification of realizing the full
#@# potential of a new idea. The researcher who made this discovery then is tempted
#@# to go beyond a prototype towards a \emph{product} that is actually used -- and
#@# is faced by a completely new set of practical problems.
学術研究者たちは、さまざまなソフトウェアを開発する。
その目的は、仮説を検証することであったり、新しいアプローチを説明するためだったり、
単に何らかの調査を支援するための道具として使うためだったりする。
たいていの場合は、ただ一点に注力したちょっとしたプロトタイプで十分であり、
役目を終えればすぐに捨ててしまって、研究をさらに進めていく。
しかし時には、今までにないアプローチや新たなテクノロジーなどのおかげで、
問題解決の方法を根本的に変えてしまうこともありえる。
いざそうなれば、プロとしての名声や商業的な成功は約束されたようなもので、
新たなアイデアを実現させられるという満足感も得られる。
そんな発見をした研究者は、プロトタイプをさらに推し進めた@<em>{プロダクト}を作って、実際に使われるようにしたくなる。
そして、そこでまた新たな問題に直面することになる。

#@# \section*{The Fear of the User}
== ユーザーこわい

#@# Frederick P.\ Brooks, Jr., in one of his famous essays on software engineering,
#@# gives a good picture of the efforts related to maintaining real software, and
#@# warns us of the user:
#@# %
Frederick P. Brooks, Jr.は、ソフトウェアエンジニアリングに関する有名なエッセイの中で、
ソフトウェアのメンテナンスに関してうまくまとめている。また、ユーザーに気をつけるようにも述べている。

#@# \begin{quote}
#@# ``The total cost of maintaining a widely used program is typically 40 percent or
#@# more of the cost of developing it. Surprisingly, this cost is strongly affected
#@# by the number of users. More users find more bugs.''\footnote{Frederick P.
#@# Brooks, Jr.: The Mythical Man-Month. Essays on Software Engineering. Anniversary
#@# Edition. Addison-Wesley, 1995.}
#@# \end{quote}
//quote{
広く使用されているプログラムをメンテナンスするためのトータルコストは、開発コストの四十パーセント以上と考えてまず間違いない。
驚くべきことに、そのコストは利用者数の影響を大きく受ける。利用者が多ければ、見つかるバグも多くなるからだ。@<fn>{fn01}
//}

//footnote[fn01][Frederick P. Brooks, Jr.: The Mythical Man-Month. Essays on Software Engineering. Anniversary Edition. Addison-Wesley, 1995.]

#@# %
#@# While this figure might well be different in today's environment, the basic
#@# observation is still true, and may even have been aggravated by the use of
#@# instantaneous global communication. Even worse, more users not only find more
#@# actual bugs, but also articulate more wishes in general. Be it a genuine error,
#@# a feature request, or merely a fundamental misunderstanding of the software's
#@# operation, the typical user request is far from being a technically precise bug
#@# report. And each request demands the attention of the developers, consuming
#@# precious time that is not available to actually write code.
今どきの環境ならこの数字も変わってくるかもしれないが、この所感自体は、基本的には今でも成り立つ。
いつでもグローバルなコミュニケーションができるようになった今では、さらに悪化しているかもしれない。
さらに悪いことに、ユーザーが教えてくれるのは実際のバグだけではない。単なる希望を伝えてくるだけのこともある。
ほんとうのエラーであるにせよ機能追加の要望であるにせよ、単なる誤解にすぎないものであるにせよ、
一般的なユーザーからのリクエストというものは、技術的に正確なバグレポートとはほど遠いものだ。
そしてそれらの要求はどれも、開発者に気づいてもらいたがっている。
そのせいで、実際にコードを書くための貴重な時間を削ることになってしまう。

#@# The analytical mind of the researcher foresees this issue, and, in its natural
#@# struggle to prevent a gloomy future in customer care, may develop an outright
#@# \emph{fear of the user}. In the worst case, this may lead to a decision against
#@# the whole project, in a weaker form it may still lead researchers to practically
#@# hide brilliant software products from potential users. More than once have I
#@# heard researchers saying: ``We don't need more visibility, we are getting enough
#@# emails already!''  And indeed, there are cases where the communication effort
#@# related to a software tool exceeds the effort that a researcher can invest
#@# without abandoning her main job.
研究者の分析的な心がこの状況を予期し、顧客のケアに気を煩わせるのを避けようとする結果、@<em>{ユーザーを恐れる}ようになってしまう。
最悪の場合、これがプロジェクト全体の方針に反する決断につながることもある。
そこまで行かなくても、すばらしいソフトウェア製品を潜在ユーザーに公開するのを拒むことになるかもしれない。
「今でもメールに悩まされているのに、これ以上広めてしまったら大変じゃないか！」そんな声を、研究者たちから何度も聞いた。
そして実際、ソフトウェアツールに関するコミュニケーションが増えすぎて、研究者としての本業に使える時間がなくなってしまうという例もある。

#@# Often, however, this tragic outcome could easily have been prevented. Brooks
#@# could hardly foresee this. When he wrote his essays, users were indeed
#@# customers, and software maintenance was part of the product they purchased. A
#@# balance had to be found between development effort, market demand, and pricing.
#@# This is still the case for many commercial software products today, but has
#@# little to do with the reality of small-scale Open Source development. Typical
#@# OSS users do not pay for the service they receive. Their attitude accordingly is
#@# not that of a demanding customer, but more often that of a grateful and
#@# enthusiastic supporter. No small part of the art of successful OSS maintenance
#@# is turning this enthusiasm into much needed support, balancing the increase in
#@# user interest with an increase in user contribution.
しかし、この悲劇的な結末は、簡単に回避できることが多い。
Brooksには、そのことが予測できなかった。
彼がエッセイを書いていたころには、ユーザーは単なるお客様に過ぎなかった。そのメンテナンスも含めて、ソフトウェアを購入していたのだ。
開発に要する労力と市場の需要のバランスをうまくとって、価格付けをする必要があった。
商用ソフトウェアの多くは今でもそのような状況だが、小規模なオープンソース開発の世界では、それはもはや関係のない話だ。
一般的なOSSのユーザーは、彼らが受け取るサービスの対価として支払うわけではない。
彼らは注文ばかりするお客様ではなく、情熱的なすばらしいサポーターとなってくれることが多い。
成功したOSSの保守は少なからず、この情熱を必要なサポートに転換している。
ユーザーからの注目が増せば増すほど、ユーザーからの貢献も増えるようになっているのだ。

#@# Recognizing that Open Source users are not just ``customers who don't pay'' is
#@# an important insight. But it must not lead us to overestimate their potential.
#@# The optimistic counterpart of the irrational fear of the user is the belief that
#@# active and supportive Open Source communities grow naturally, based merely on
#@# the license that was chosen for publishing code. This grave error of judgement
#@# is still surprisingly common, and has sealed the doom of many attempts of
#@# creating open communities.
オープンソースのユーザーが、単なる「カネを出さないお客さん」ではないという本質を知ることは大切だ。
とは言え、彼らの力を過大評価してはいけない。
理不尽にユーザーを怖がってしまうのと、コードをオープンソースで公開しさえすれば活発なコミュニティに支えてもらえると思い込むのは、同じようなものだ。
そんな判断をする人が、未だに多い。その結果、オープンなコミュニティを作ろうという試みの多くが失敗してきた。

#@# \section*{Sowing and Reaping}
== 種まきと収穫

#@# The plural of ``user'' is not ``community.'' While the former may grow in
#@# numbers, the latter does not grow by itself, or grows wildly without yielding
#@# the hoped-for support for the project. The task of the project maintainer who
#@# seeks to benefit from the users' raw energy therefore resembles that of a
#@# gardener who needs to prepare a fertile ground, plant and water the seedlings,
#@# and possibly prune undesired shoots before being able to reap the fruits.
#@# Compared to the rewards the overall effort is little, but it is vital to do the
#@# right things, at the right time.
「ユーザー」の複数形が「コミュニティ」というわけではない。
ユーザーは自然に増えていくかもしれないが、コミュニティが勝手に成長していくことはない。
単純に数だけが増えても、プロジェクトが望んでいるようなサポートを得られることはない。
プロジェクトのメンテナは、ユーザーたちからエネルギーを得ようと思っているのなら、
庭師と同じような作業をしなければいけない。
すなわち、肥沃な大地を準備して、苗を植えて水をやり、必要に応じて間引きをして、果物の収穫に備えるという作業だ。
得られる利益に比べればこれらの作業は微々たるものだが、適切なタイミングで適切なことを行う必要がある。

#@# \paragraph*{Preparing the Technical Ground}
#@# Building a community starts even before the first user appears. Already the
#@# choice of the programming language determines how many people will be able to
#@# deploy and debug our code. Objective Caml might be a beautiful language, but
#@# using Java instead will increase the amount of potential users and contributors
#@# by orders of magnitude. Developers thus must compromise, since the most
#@# widespread technology is rarely most efficient or elegant. This can be a
#@# particularly hard step for researchers who often prefer superiority of language
#@# design. When working on Semantic MediaWiki, I have often been asked why in the
#@# world we would use PHP when server-side Java would be so much cleaner and more
#@# efficient. Comparing the community size of Semantic MediaWiki with similar
#@# Java-based efforts may answer this question. This example also illustrates that
#@# the target audience determines the best choice of base technology. The developer
#@# herself should have the necessary insight to make a most opportunistic decision.
=== 技術的な土台づくり

コミュニティづくりは、ユーザーがひとりもいない段階から始まっている。
使うプログラミング言語を選んだ時点で既に、どれくらいの人がそのコードをデプロイしたりデバッグしたりできるのかが決まってしまう。
OCamlは確かに美しい言語ではあるが、それよりはJavaを選んだほうが、
使ってくれる（そして、協力してくれる）可能性のある人は、それこそ桁違いに増えるだろう。
開発者たるもの、妥協することも必要だ。最高に効率的でエレガントなテクノロジーが、世間一般に広まることはほとんどない。
これは、研究者にとってはつらいことかもしれない。研究者は、言語設計の優劣を気にすることが多いからだ。
Semantic MediaWikiにかかわっていたころに、よく
「いったいなぜPHPなんかを使っているのですか？Javaで書いたほうがずっとすっきりするし、効率的でしょう？」
と聞かれたものだ。
Semantic MediaWikiのコミュニティの規模と、それと同等なJava製のプロジェクトのコミュニティの規模を比べてほしい。
それが答えだ。
この例がもうひとつ示すことがある。
どんな層を対象にしているのかが、ベースとして使うテクノロジーを決めるためのポイントになるということだ。
開発者は、周りを最大限に活用できるような判断をすべきである。

#@# \paragraph*{Thoroughly Working the Ground}
#@# A related issue is the creation of readable and well documented code from the
#@# very start. In an academic environment, some software projects are touched by
#@# many temporary contributors. Changing staff and student projects may deteriorate
#@# code quality. I remember a small software project at TU Dresden that had been
#@# maintained quite well by a student assistant. After he had left it was found
#@# that his code was thoroughly documented -- in Turkish. A researcher can only be
#@# a part-time programmer, so special discipline is needed to enforce the extra
#@# work needed for accessible code. The reward will be a much greater chance of
#@# informed bug reports, useful patches, or even external developers later on.
=== 土台の上での作業

先の話題とも関連する課題としてあるのが、よみやすくてきちんとドキュメント化されたコードを最初期から用意するということだ。
学術環境では、いろんな人が少しずつ手を加えていくようなソフトウェアプロジェクトもある。
スタッフや学生が入れ替わると、コードのクオリティが下がるかもしれない。
ドレスデン工科大学の小規模なソフトウェアプロジェクトのことを思い出す。
そのプロジェクトは、ある一人の学生アシスタントの手によって、すばらしいクオリティを維持していた。
その彼がプロジェクトを離れた後にわかったことがあった。
彼のコードは完璧にドキュメント化されていた。……トルコ語で。
研究者はあくまでも研究者であり、専任のプログラマーではない。
皆が利用しやすいコードを維持するには、きちんとルールを定めてそれに従ってもらう必要がある。
そうしておけば、バグレポートやパッチをより多く受け取れるようになるだろうし、
外部の開発者を呼び込めるかもしれない。

#@# \paragraph*{Spreading the Seeds of Communities}
#@# Inexperienced Open Source developers often think it as a big step to publish
#@# their code openly. In reality nobody else will notice. To attract users and
#@# contributors alike one has to spread the word. The public communication of a
#@# real project should at least involve announcements for every new release.
#@# Mailing lists are probably the best channels for this. Some social skill is
#@# needed to find the balance between annoying spam and shy understatement.
#@# Projects that are motivated by the honest conviction that they will help users
#@# to solve real problems should be easy to advertise respectably. Users will
#@# quickly notice the difference between shameless advertising and useful
#@# information. Obviously, active announcements should wait until the project is
#@# ready. This does not only include its actual code but also its homepage and
#@# basic usage documentation.
=== コミュニティの種まき

あまり経験のないオープンソース開発者は、自分のコードをオープンにすること自体がものすごいことだと考えがちだ。
実際のところ、ただコードを公開しただけでは、誰にも気づいてもらえない。
ユーザーや協力者たちをひきつけるには、宣伝しなければいけない。
実際のプロジェクトでは、少なくとも新しいリリースが出るたびに、一般向けに何らかのアナウンスをすべきだ。
それに最も適した場所は、メーリングリストだろう。
目障りなスパムにならず、かつ控えめになり過ぎないように、うまくバランスをとるには、それなりのスキルが必要になる。
ユーザーの問題解決を手助けしようという信念にもとづいたプロジェクトなら、きちんとした宣伝は受け入れられやすい。
ユーザーはすぐに、恥知らずな宣伝と有益な情報を見分けてしまう。
もちろん、プロジェクトの準備が整うまでは、頻繁なアナウンスは控えるべきだろう。
ここでいう「準備」とは、コードだけではなく、ホームページやユーザー向けドキュメントなども含んでいる。

#@# Throughout its lifetime, the project should be mentioned in all
#@# \emph{appropriate} places, including web sites (start with your homepage!),
#@# presentations, scientific papers, online discussions. One cannot appreciate
#@# enough the power of the single link that leads a later main contributor to his
#@# first visit of the project's homepage. Researchers should not forget to also
#@# publicize their software outside of their immediate academic community. Other
#@# researchers are rarely the best basis for an active community.
プロジェクトが立ち上がってから終了するまでの間、あらゆる@<em>{適切な}場所で言及しなければいけない。
たとえばWebサイト（まずは自分のホームページから！）やプレゼン、論文、オンラインのディスカッションなどだ。
単にリンクを示すだけでは、後の主要メンバーになるかもしれない人たちをプロジェクトのホームページに呼び込むには力不足だ。
また、身近な学術コミュニティ以外への宣伝も、忘れてはいけない。
身内だけに閉じていては、活発なコミュニティへの道は遠い。

#@# \paragraph*{Providing Spaces to Grow}
#@# Trivially easy, yet often neglected is the duty of project maintainers to
#@# provide for the communication spaces that communities can grow in. If a project
#@# has no dedicated mailing list, then all support requests will be sent privately
#@# to the maintainer. If there is no public bug tracker, bug reports will be fewer
#@# and less helpful. Without a world-editable wiki for user documentation, the
#@# developer is left with extending and refining the documentation continuously. If
#@# the development trunk of the source code is not accessible, then users will not
#@# be able to check the latest version before complaining about bugs. If the code
#@# repository is inherently closed, then it is impossible to admit external
#@# contributors. All of this infrastructure is offered for free by a number of
#@# service providers. Not all forms of interaction might be desired, e.g.\ there
#@# are reasons to keep the group of developers closed. But it would be foolish to
#@# expect support from a community without even preparing the basic spaces for
#@# this.
=== 育てるための場所の提供

きわめて簡単なのに、忘れられていることが多いのが、プロジェクトのメンテナがコミュニケーションの場を提供してコミュニティの成長を支えるということだ。
もしそのプロジェクト専用のメーリングリストがなければ、いろいろなリクエストがメンテナへの個人メールで届くだろう。
もしバグ追跡システムが公開されていなかったら、バグ報告は少なくなるだろうし、あまり有用なものではなくなる。
もし誰でも編集できるようなWikiでユーザーマニュアルを公開していなければ、開発者たちが日々ドキュメントを手入れしなければいけなくなる。
もし開発版のソースコードにアクセスできなければ、ユーザーは、最新版を試してみることもせずにバグ報告を投げつけることになる。
もしリポジトリが公開されていなければ、外部からの貢献など得られようはずがない。
こういったインフラは、今や多くのサービスプロバイダーが無償で提供している。
これらすべてが必須だというわけではない（たとえば開発者内での議論はクローズドにしておきたいかもしれない）。
しかし、こういった基本的な環境さえ用意せずに、コミュニティに助けてもらおうなどというのは虫の良すぎる話だ。

#@# \paragraph*{Encouraging and Controlling Growth}
#@# Inexperienced developers often are concerned that opening up mailing lists,
#@# forums, and wikis for users will require a lot of additional maintenance. It
#@# rarely does, but some basic activities are of course necessary. It starts with
#@# \emph{rigorously enforcing} the use of public communication. Users need to be
#@# educated to ask questions publicly, to look up the documentation before asking,
#@# and to report bugs in the tracker instead of via email. I tend to reject all
#@# private support requests, or to forward the answers to public lists. This also
#@# ensures that solutions are available on the web for future users to find. In any
#@# case, users should be thanked explicitly for all forms of contribution -- many
#@# enthusiastic and well-meaning people are needed for building a healthy
#@# community.
=== 成長の手助けとコントロール

経験の浅い開発者に限って、「ユーザー向けのメーリングリストやフォーラムやWikiを作ったら、そのメンテナンスが大変だ」などと考えがちだ。
そんなに心配するほどでもない。ただ、まったくのほったらかしでいいというわけでもない。
最初にすべきことは、公開の場でのやりとりをするように@<em>{きつく強制する}ことだ。
質問は公開の場で行うこと。質問する前にドキュメントを読むこと。バグレポートは、メールではなくバグ追跡システムを使うこと。
こういったことをユーザーに伝えていく必要がある。
私は、個人メールアドレス宛のサポート依頼は一切無視するか、あるいは公開メーリングリストに返信するようにしている。
そうすることで、将来のユーザーが、質問に対する答えをWeb上で見つけられるようにもなる。
いずれにせよ、どんな形式であっても、ユーザーからの貢献には感謝すべきだ。情熱を持って、手助けをしたがっている人たちはたくさんいる。

#@# When a certain density of users is reached, support starts to happen from user
#@# to user. This is always a magical moment for a project, and a sure sign that it
#@# is on a good path. Ideally, the core maintainers should still provide support
#@# for tricky questions, but at some point certain users will take the lead in
#@# discussions, and it is important to thank them (personally) and to involve them
#@# further in the project. Conversely, unhealthy developments must be stopped where
#@# possible, and in particular aggressive behavior can be a real danger to
#@# community development. Likewise, not all well-meant enthusiasm is productive,
#@# and it is often necessary to say no, friendly but clearly, to prevent feature
#@# creep.
ユーザー数がある程度に達すると、ユーザーどうしでのサポートの動きが出てくる。
プロジェクトにとって、それは魔法のような瞬間だ。そしてそれは、そのプロジェクトがうまく進んでいる証となる。
難しい質問に関しては、コアメンテナのサポートも必要だろう。
しかし、ある段階に達すると、ユーザーが議論を引っ張りはじめるようになる。
そういうユーザーには感謝の意を（個人的に）表明して、今後もプロジェクトにかかわってもらえるようにすることが大切だ。
逆に、不健全な開発は可能な限りやめるべきだ。攻撃的な振る舞いは、コミュニティの育成の害になってしまう。
プロジェクトに対する熱意がすべて前向きなものであるとは限らない。
時にはノーというべき場面もある。フレンドリーに、かつ明確にノーと言って、将来困らないようにしよう。

#@# \section*{The Future is Open}
== 未来は開けている

#@# Building an initial community around a project is an important part of
#@# transforming a research prototype into a grown Open Source software. If it
#@# succeeds, there are many options for further developing the project, depending
#@# on the goals of the project maintainer and community. Some general directions
#@# include:
#@# %
プロジェクトをとりまく最初のコミュニティの立ち上げは、研究用のプロトタイプをオープンソースソフトウェアとして育てていくためには重要なことだ。
これがうまくいけば、その後のプロジェクトの開発にはさまざまな選択肢が出てくる。プロジェクトのメンテナやコミュニティのゴールにあわせて、その中から選べばいい。
一般的な方向性としては、以下のようなものがある。

#@# \begin{itemize}
#@# \item Continuing to grow and develop the project and its OSS community,
#@# enlarging the core team of developers and maintainers, and eventually making it
#@# independent of its academic origin. This may involve further community
#@# activities (e.g.\ dedicated events) and maybe establishing organizational
#@# support.
#@# %
#@# \item Founding a company for commercially exploiting the project based on, e.g.,
#@# a dual-license or consulting business model. Established tools and vibrant
#@# communities are a major asset for a start-up company, and can be beneficial to
#@# several business strategies without abandoning the original OSS product.
#@# %
#@# \item Withdrawing from the project. There are many reasons why one may no longer
#@# be able to maintain the close affiliation to the project. Having established a
#@# healthy open community maximizes the chances that the project can continue
#@# independently. In any case, it is much more respectable to make a clear cut than
#@# to abandon the project silently, killing it by inactivity until its reach is
#@# diminished to the point where no future maintainer can be found.
#@# \end{itemize}
 * Continuing to grow and develop the project and its OSS community, enlarging the core team of developers and maintainers, and eventually making it independent of its academic origin. This may involve further community activities (e.g.\ dedicated events) and maybe establishing organizational support.
 * Founding a company for commercially exploiting the project based on, e.g., a dual-license or consulting business model. Established tools and vibrant communities are a major asset for a start-up company, and can be beneficial to several business strategies without abandoning the original OSS product.
 * Withdrawing from the project. There are many reasons why one may no longer be able to maintain the close affiliation to the project. Having established a healthy open community maximizes the chances that the project can continue independently. In any case, it is much more respectable to make a clear cut than to abandon the project silently, killing it by inactivity until its reach is diminished to the point where no future maintainer can be found.

#@# %
#@# The shape of the community will be different when working toward one of these
#@# principal options. But in each case, the role of the researcher changes in the
#@# cause of the project. The initial scientist and coder may turn into a manager or
#@# technical director. In this sense, the main difference between an influential
#@# OSS project and a perpetual research prototype is not so much the amount of work
#@# but the type of work that is required to succeed. Understanding this is part of
#@# the success -- the only other thing that is needed is an awesome piece of
#@# software.
The shape of the community will be different when working toward one of these principal options. But in each case, the role of the researcher changes in the cause of the project. The initial scientist and coder may turn into a manager or technical director. In this sense, the main difference between an influential OSS project and a perpetual research prototype is not so much the amount of work but the type of work that is required to succeed. Understanding this is part of the success -- the only other thing that is needed is an awesome piece of software.
