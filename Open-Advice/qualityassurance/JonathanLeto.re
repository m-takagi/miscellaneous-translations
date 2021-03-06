#@# \chapterwithauthor{Jonathan ``Duke'' Leto}{Test-Driven Enlightenment}
= テスト駆動啓発

//flushright{
Jonathan "Duke" Leto
//}

#@# \authorbio{Jonathan ``Duke'' Leto is a software developer, published mathematician,
#@# Git ninja and avid bicyclist living in Portland, Oregon. He is a core
#@# developer of Parrot Virtual Machine and founder of Leto Labs LLC.}
//lead{
Jonathan "Duke" Letoはソフトウェア開発者であり、数学者としても活躍している。
Git使いで自転車を愛する彼は、オレゴン州ポートランドで暮らしている。
彼はParrot Virtual Machineのコア開発者であり、Leto Labs LLCの創業者でもある。
//}

#@# \noindent{}When I first got involved in Free and Open Source Software, I had no clue what
#@# tests were or why they were important. I had worked on some personal programming
#@# projects before, but the first time I actually worked on a project with others,
#@# i.e., got a commit bit, was Yacas, Yet Another Computer Algebra System, a computer algebra system similar to Mathematica.
フリー／オープンソースソフトウェアにかかわりはじめたころは、テストとは何なのか、なぜそんなにも重要なのかが理解できなかった。
それまではずっと、個人的なプログラミングだけを行っていたが、初めて他の人と共同で作業をするプロジェクトにかかわりはじめてコミット権を得たのは、
Yacas（Yet Another Computer Algebra System）だった。これは、コンピュータによる代数システムで、Mathematicaに似たものだった。

#@# At this stage in my journey, tests were an afterthought. My general
#@# meta-algorithm was to hack on code $\rightarrow$ see if it works $\rightarrow$
#@# write a simple test to show it works (optional). If a test was challenging to
#@# write, it most likely never got written.
当時の私は、テストとは後から書くものだという認識だった。
「コードをハックする→ちゃんと動くかどうかを確かめる→（気が向いたら、）動いていることを証明するためのちょっとしたテストを書く」
こんな感じだったのだ。
テストを書くのが難しそうだなと思ったら、さっさとあきらめた。

#@# This is the first step in the path to Test-Driven Enlightenment. You know tests
#@# are probably a good idea, but you have not seen the benefit of them clearly, so
#@# you only write tests occasionally.
これが、テスト駆動啓発への第一歩だ。
おそらく、テストはよいものだということは気づいているだろう。でも、目に見えるメリットが得られないがゆえに、たまにしかテストを書かないということになってしまう。

#@# If I could open up a wormhole and tell my younger self one piece of wisdom about
#@# testing, it would be:
#@# \begin{quote}``Some tests, in the long-run, are more important than the code
#@# they test.''\end{quote}
ワームホールを抜けて若かりし頃の自分にアドバイスできるとしたら、きっとこう言うだろう。

//quote{
テストって、長い目で見れば、時にはテストされる側のコードよりも大切なこともあるんだよ。
//}

#@# A few people right about now may be thinking that I put on my tinfoil testing
#@# hat when I sit down to code. How can tests be \emph{more} important than the
#@# code they test? Tests are the proof that your code \emph{actually} works, and
#@# they guide you to writing correct code as well as providing the flexibility to
#@# change code and know that features still work. The larger your codebase becomes,
#@# the more valuable your tests are, because they allow you to change one part of
#@# your code and still be sure that the rest of it works.
「この人、頭がおかしくなったんじゃないの？」と思った人もいるだろう。
実際のコードよりも@<em>{テストのほうが重要だ}なんて、ありえないんじゃないの？
テストというのは、あなたのコードが@<em>{実際に}動くことを証明するものだ。
そして、テストがあれば、正しいコードを書く指針になるだけではなく、その機能を保ったままでコードを柔軟に変更できる助けにもなる。
コードベースが巨大になればなるほど、テストの価値は上がる。
コードの一部を変更したときにも、残りの部分がきちんと動いていることを確かめられるからだ。

#@# Another vital reason to write tests is because it indicates that something is
#@# explicitly desirable, rather than an unintended side-effect or oversight. If you
#@# have a specification, you can use tests to verify that you meet it, which is
#@# very valuable, and in some industries, necessary. A test is just like telling a
#@# story, where the story is how you think code should work.
テストを書くべき重要な理由が、もうひとつある。
テストがあれば、それが期待どおりに動いている（予期せぬ副作用や、見落としていたできごとが発生していない）ことを明確にできるのだ。
テストを使えば、仕様を満たしているかどうかを検証できる。これは非常に有用だし、業界によっては必須になっているところもある。
テストとは、「このコードはこう動くべき」という考えを書き記した物語のようなものだ。

#@# Code either changes and evolves or bitrots\footnote{The term ``bitrot'' is coder
#@# slang for the almost universal fact that if a piece of code does not change but
#@# everything it relies on does, it ``rots'' and usually has very little chance of
#@# working unless modifications are made to accommodate newer software and
#@# hardware.}.
コードというものは、変更されて成長していくか、さもなければbitrot@<fn>{fn01}になってしまうかのいずれかだ。

//footnote[fn01][「bitrot（ビットの腐敗）」というのはプログラマーのスラングだ。あるコード片には変更がないけれどもそれが依存する他のコードがすべて変更された場合、そのコード片は「腐敗」してしまい、たいていは、新しいソフトウェアやハードウェアに対応するための修正が必要になるという事実を指すものである。]

#@# Very often, you will write tests once, but then totally refactor your
#@# implementation or even rewrite it from scratch. Tests often outlive the code
#@# they originally tested, i.e., one set of tests can be used no matter how many
#@# times your code is refactored. Tests are actually the litmus test that allows you to throw away an old implementation and say ``this newer implementation has a much better design and passes our test suite.'' I have seen this happen many
#@# times in the Perl and Parrot communities, where you can often find me.
テストを書いた後で、テスト対象の実装をリファクタリングしたり、ゼロから書き直したりすることもよくある。
テスト対象のコードよりも、テストの寿命のほうが長い。つまり、コードを何度リファクタリングしようが、同じテスト群を使えるというわけだ。
テストとは、リトマス試験のようなものだ。古い実装を投げ捨てても
「この新しい実装のほうがずっときれいな設計だし、すべてのテストにパスしている」
と言うことができる。
PerlやParrotのコミュニティでは、そんなことがしょっちゅうある。
そしてそこには常に私がいることを、知る人もいることだろう。

#@# Tests allow you to change things quickly and know if something is broken. They
#@# are like jet packs for developers.
テストがあればコードをすばやく変更できるし、どこかを壊してしまったとしてもすぐに気づける。
開発者にとってのジェットパックのようなものだ。

#@# Carpenters have a bit of sage wisdom that goes like this:
#@# \begin{quote}``Measure twice, cut once.''\end{quote}
大工さんたちの間では、こんな格言が知られている。

//quote{
二回測って、一回で切れ。
//}

#@# Coding is like cutting and tests are like measuring.
コーディングが切る作業だとすれば、テストとは測ることだといえる。

#@# Test-Driven Enlightenment saves an enormous amount of time, because instead of
#@# flailing around, fiddling with code, not having a direction, tests hone your
#@# focus.
テスト駆動啓発（Test-Driven Enlightenment）は、時間をかなり節約してくれる。
方針もないままにコードを引っ掻き回すのではなく、テストのおかげで集中すべきところが明確になるからだ。

#@# Tests also are very good positive feedback. Every time you make a new test pass,
#@# you know that your code is better and it has one more feature or one less bug.
テストは、前向きなフィードバックとしてもすぐれている。
新しいテストがパスするたびに、自分のコードがよりよくなっていることがわかるし、新しい機能が追加されたりバグが解決されたりしたこともわかる。

#@# It is easy to think ``I want to add 50 features'' and spend all day fiddling
#@# with code, constantly switching between working on different things. Most of the
#@# time, very little will be accomplished. Test-Driven Enlightenment guides one to
#@# focus on making one test pass at a time.
「新機能を50ほど追加したい」と考えて一日中コードを引っ掻き回し、その間他の作業の割り込みも入りまくる。よくあることだ。
たいていの場合、思っていたことはほとんど達成できない。
テスト駆動で進めていけば、やるべきことにひとつひとつ集中していける。

#@# If you have a single failing test, you are on a mission to make it pass. It focuses
#@# your brain on something very specific, which very often has better results than
#@# switching between tasks constantly.
失敗するテストがひとつあれば、そのテストを成功させるようにすることがミッションとなる。
やるべきことが明確になるので、いろんなタスクを細々と切り替えながら作業するよりもずっとよい結果になるだろう。

#@# Most information about being test-driven is very specific to a language or
#@# situation, but that does not need to be the case. Here is how to approach
#@# adding a new feature or fixing a bug in any language:
テスト駆動に関する情報は、特定の言語や状況に依存したものであることがほとんどだ。
でも、必ずしもそうである必要はない。
言語にかかわらず、新機能を追加したりバグを修正したりするときの流れは、次のようになる。

#@# \begin{enumerate}
#@#  \item Write a test that fails, which you think will pass when the feature is
#@# implemented or bug is fixed. Advanced: As you write the test, run it
#@# occasionally, even if it is not done yet, and guess the actual error message
#@# that the test will give. The more tests you write and run, the easier this will
#@# become.
#@#  \item Hack on the code.
#@#  \item Run the test. If it passes, go to \#4, otherwise go to \#2.
#@#  \item You are done! Do a happy dance :)
#@# \end{enumerate}
 1. テストを書く。このテストは、現時点では失敗するが、機能の実装やバグ修正が完了すれば成功するであろうものだ。
 応用：テストを書いた後は、まだ作業が完了していなくてもちょくちょく実行するといい。そして、そのテストがどんなエラーを出すかを予測してみよう。
 テストを書いたり実行したりを繰り返せば繰り返すほど、その手間もかからなくなるだろう。
 1. コードをハックする。
 1. テストを実行する。成功した場合は4.に進む。それ以外の場合は2.に戻る。
 1. 完成！ 小躍りしよう^^;

#@# This method works for any kind of test and any language. If you remember only one thing about testing from this essay, remember the steps above.
この流れは、どんな種類のテストであろうがどんなプログラミング言語であろうが、うまく機能する。
このエッセイの中でたったひとつだけ覚えておくことがあるとすれば、この手順だ。

#@# Here are some more general test-driven guidelines that will serve you well and
#@# apply in almost any situation:
もう少し一般的なテスト駆動開発の指針を示す。これは、ほぼすべての場面で適用できるものだ。

#@# \begin{enumerate}
#@#  \item Understand the difference between what is being tested and what is being
#@# used as a tool to test something else.
#@#  \item Fragile tests. You could write a test that makes sure an error message is
#@# exactly correct. But what happens when the error message changes? What happens
#@# when someone internationalizes your code to Catalan? What happens when someone
#@# runs your code on an operating system you have never heard of? The more resilient your test is,
#@# the more valuable it will be.
#@# \end{enumerate}
 1. テストの対象となるコードと、別の何かをテストするための道具として使うコードの違いを理解する。
 1. 脆いテスト（Fragile test）。
 エラーメッセージが正しく出力されるかどうかを確認するテストを書いたとしよう。
 でも、もしエラーメッセージが変わったら、そのテストはどうなるだろう？
 誰かがそのコードを国際化して、カタロニア語にしてしまったらどうなるだろう？
 誰かがそのコードを、聞いたこともないようなOS上で実行させたとしたらどうなるだろう？
 テストは柔軟であればあるほど価値がある。

#@# Think about these things when you write tests. You want them to be resilient,
#@# i.e., tests, for the most part, should only have to change when functionality
#@# changes. If you have to change your tests often, but functionality is not
#@# changing, you are doing something wrong.
テストを書くときには、これらのことに意識しよう。
テストには柔軟性を持たせたい。つまり、テストを変更するとすれば、それはテストする機能が変わったときだけであるようにしておきたい。
テスト対象の機能は変わらないのに頻繁にテストを書き換える必要があるというのなら、何かが間違っている。

#@# \section*{Kinds of tests}
== テストの種類

#@# Many people start to get confused when people speak of integration tests,
#@# unit tests, acceptance tests and many other flavors of tests. One
#@# should not worry too much about these terms. The more tests you write, the more
#@# nuances you will see and the differences between tests will become more
#@# apparent. Everyone does not have the same definition for what these tests are,
#@# but the terms are still useful to describe kinds of tests.
インテグレーションテストだとかユニットテストだとか受け入れテストだとか、いろんなテストの話題が出てくると、混乱してしまう人も多いだろう。
別に、そういった用語を怖がる必要はない。
テストをたくさん書いているうちに、これらのニュアンスの違いも何となくわかってくることだろう。
これらのテストの用語について、明確な定義があるわけではない。でも、テストの種類を説明するための用語としては便利なものだ。

#@# \section*{Unit tests vs. integration tests}
== ユニットテストとインテグレーションテスト

#@# Unit tests and integration tests form a spectrum. Unit tests test small bits of
#@# code, and integration tests verify how more than one unit fits together. The test
#@# writer gets to decide what comprises a unit, but most often it is at the level
#@# of a function or method, although some languages call those things by different
#@# names.
ユニットテストとインテグレーションテストが、テストの両極となる。
ユニットテストは小さなコード片をテストする。一方インテグレーションテストでは、複数のユニットがきちんと組み合わさるかどうかを検証する。
ユニットを構成する単位はテストの作者が定めることができる。しかし、たいていの場合は、関数やメソッド（言語によっては別の呼び名があるかもしれない）のレベルに落ち着くだろう。

#@# To make this a little more concrete, we will give a basic analogy using
#@# functions. Imagine that $f(x)$ and $g(x)$ are two functions which represent two units of code. For
#@# concreteness, let's assume they represent two specific functions in your
#@# favorite Free/Open Source project's codebase.
具体例として、関数を使ったアナロジーを考えてみよう。
ふたつの関数f(x)とg(x)があって、これらがそれぞれひとまとまりのコードを表しているものとする。
より具体的にするには、お気に入りのフリー／オープンソースプロジェクトのコードから実際にふたつの関数を選んでみるといい。

#@# An integration test asserts something like function composition, i.e., $f(g(a)) =
#@# b$. An integration test is testing how multiple
#@# things integrate or work together, instead of how a single part works
#@# individually. If algebra isn't your thing, another way to look at it is unit
#@# tests only test one part of the machine at a time, but integration tests very
#@# many parts work in unison. A great example of an integration test is test-driving a car.
#@# You are not checking the air pressure, or measuring voltage of the spark plugs.
#@# You are making sure the vehicle works as a whole.
インテグレーションテストとは、たとえば@<code>{f(g(a)) = b}のような関数の合成を検証するものだ。
インテグレーションテストは複数のものごとがうまく統合できているかどうかを確かめるものであり、単独のパーツが個別に機能することを確かめるものではない。
代数が苦手な人のために、別の見方で説明しよう。ユニットテストはマシンのパーツのひとつを単独でテストするもので、
インテグレーションテストはさまざまなパーツがうまく協調していることをテストするものだ。
インテグレーションテストの最たる例が、自動車のテスト走行だ。
タイヤの空気圧をチェックしているわけでもなく、点火プラグの電圧を確かめているわけでもない。
その車が全体として機能しているかどうかを確かめているわけだ。

#@# Most of the time it is good to have both. I often start with unit tests and add
#@# integration tests as needed, since you will weed out the most basic bugs first,
#@# then find more subtle bugs that are related to how pieces do not quite fit
#@# together, as opposed to the individual pieces not working. Many people write
#@# integration tests first and then delve into unit tests. Which you write first
#@# is not nearly as important as writing both kinds.
たいていの場合は、両方行うのが好ましい。
私の場合はまずユニットテストから始めて、必要に応じてインテグレーションテストを足していくことが多い。
個別のパーツが動かないなどといった基本的なバグをまずつぶしてしまってから、パーツ同士の組み合わせがうまくいかないなどのより細かいバグに進みたいからである。
ただ、多くの人は、インテグレーションテストを書いてからユニットテストに進んでいる。
どちらを先に書くかは特に重要ではなく、両方やるということこそが大切なのだ。

#@# \section*{Enlightenment}
== Enlightenment

#@# Test-Driven Enlightment is a path, not a place. Enjoy the journey and make sure
#@# to stop and smell the flowers if and when you get lost.
テスト駆動啓発は道のりであって、目的地ではない。旅を楽しもう。道に迷ったときは、立ち止まって花の香りでもかいでみればいい。
