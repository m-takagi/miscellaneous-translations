#@ -*- mode: review; coding: utf-8 -*-
#@# UnitTest
= UnitTest

//lead{
Martin Fowler's blikiの"@<href>{http://martinfowler.com/bliki/UnitTest.html, UnitTest}"の翻訳。
//}

#@ 5 May 2014
2014/5/5

#@# <p>Unit testing is often talked about in software development, and
#@#   is a term that I've been familiar with during my whole time writing
#@#   programs. Like most software development terminology, however, it's
#@#   very ill-defined, and I see confusion can often occur when people
#@#   think that it's more tightly defined than it actually is.</p>
ソフトウェア開発において、ユニットテスティングの話題になることが多い。私がプログラムを書きはじめて以来ずっと、ユニットテスティングという言葉はおなじみだった。
しかし、ソフトウェア開発用語の常として、ユニットテスティングという用語もきちんと定義できていない。
ユニットテスティングという用語の意味を実際よりも厳密にとらえてしまったせいで、混乱してしまっている人もよく見かける。

#@# <img src = 'images/unitTest/sketch.png'></img>
//indepimage[sketch]

#@# <p>Although I'd done plenty of unit testing before, my definitive
#@#   exposure was when I started working with Kent Beck and used the <a href = 'Xunit.html'>Xunit</a>
#@#   family of unit testing tools. (Indeed I sometimes think a good term
#@#   for this style of testing might be "xunit testing.") Unit testing
#@#   also became a signature activity of <a href = 'ExtremeProgramming.html'>ExtremeProgramming</a> (XP), and led
#@#   quickly to <a href = 'TestDrivenDevelopment.html'>TestDrivenDevelopment</a>.</p>
もちろんそれ以前からもユニットテスティングはやってきていたのだが、それを人前で公表したのは、Kent Beckと仕事をして
@<href>{http://martinfowler.com/bliki/Xunit.html, Xunit}系のツールを使い始めたころのことだった
（この種のテストのことは、ユニットテスティングっていうより「xunitテスティング」って呼んだほうがいいと思うんだ）。
ユニットテスティングはその後@<href>{http://martinfowler.com/bliki/ExtremeProgramming.html, ExtremeProgramming}（XP）の看板アクティビティとなり、
そして@<href>{http://martinfowler.com/bliki/TestDrivenDevelopment.html, TestDrivenDevelopment}が誕生した。

#@# <p>There were definitional concerns about XP's use
#@#   of unit testing right from the early days. I have a distinct memory
#@#   of a discussion on a usenet discussion group where us XPers were
#@#   berated by a testing expert for misusing the term "unit test." We
#@#   asked him for his definition and he replied with something like "in
#@#   the morning of my training course I cover 24 different definitions of
#@#   unit test."</p>
XPが始まった頃から、XP界での「ユニットテスティング」の定義には懸念があった。
当時のusenetでの議論を思い出す。XPな人たちが、テスティングのエキスパートたちに「おまえたちは『ユニットテスト』という言葉の意味をはき違えている」とつるし上げられたんだ。
「じゃあ、本当の意味を教えてくださいな」というと、答えは「ワシの研修に参加しろ。午前中に、ユニットテストの24の定義を教えてやろう」みたいな感じだった。

#@# <p>Despite the variations, there are some common elements. Firstly
#@#   there is a notion that unit tests are low-level, focusing on a small
#@#   part of the software system. Secondly unit tests are usually written
#@#   these days by the programmers themselves using their regular tools -
#@#   the only difference being the use of some sort of unit testing
#@#   framework <a href = '#footnote-dev-write'>[1]</a>. Thirdly unit tests are
#@#   expected to be significantly faster than other kinds of tests. </p>
定義はひとそれぞれだが、共通するところもいくつかある。
まず、ユニットテストは詳細レベルのテストで、ソフトウェアシステムの小さなパーツを対象とするものだ。
次に、最近のユニットテストは、通常はプログラマー自身が普段使っているツールを用いて書くものだ。なんらかのユニットテスティングフレームワークを使うことがあるかもしれない@<fn>{fn01}。
そして、ユニットテストは、他のテストよりもすばやく実行できるものと見なされている。

#@# <p>So there's some common elements, but there are also differences.
#@#   One difference is what people consider to be a <i>unit</i>.
#@#   Object-oriented design tends to treat a class as the unit,
#@#   procedural or functional approaches might consider a single function
#@#   as a unit. But really it's a situational thing - the team decides
#@#   what makes sense to be a unit for the purposes of their
#@#   understanding of the system and its testing. Although I start with
#@#   the notion of the unit being a class, I often take a bunch of
#@#   closely related classes and treat them as a single unit. Rarely I
#@#   might take a subset of methods in a class as a unit. However you
#@#   define it doesn't really matter.</p>
こんなふうに共通する部分もあれば、それぞれ違っている部分もある。
違う部分のひとつとして挙げられるのが、何をもって@<i>{ユニット}とするのかという点だ。
オブジェクト指向設計では、ひとつのクラスを「ユニット」と扱うことが多い。
一方、手続き型や関数型のアプローチでは、ひとつの関数を「ユニット」と見なすかもしれない。
でも、実際のところ、これは状況によるものだ。何を「ユニット」と見なすのかは、チームがそのシステムやテストをどのように理解しているのかに応じて決めるものだ。
私は、とりあえずひとつのクラスを「ユニット」として始めたいと思っているが、関連するクラス群を一括で「ユニット」と扱うこともよくある。
逆に、ひとつのクラスの中の一部のメソッドだけを「ユニット」とすることは、めったにない。
これはあくまでも私の考えなので、他の人がどう思うかは特に気にしない。

#@# <h2>Isolation</h2>
== 分離

#@# <p>A more important distinction is whether the unit you're testing
#@#     should be isolated from its collaborators. Imagine you're testing an
#@#     order class's price method. The price method needs to invoke some
#@#     functions on the product and customer classes. If you follow the
#@#     principle of collaborator isolation you don't want to use the real
#@#     product or customer classes here, because a fault in the customer
#@#     class would cause the order class's tests to fail. Instead you use
#@#     <a href = 'TestDouble.html'>TestDoubles</a> for the collaborators.</p>
もっと重要な違いがある。テスト対象のユニットを、他のコンポーネントから分離すべきか否かというところだ。
orderクラスのpriceメソッドをテストしているとしよう。
priceメソッドの内部では、productクラスやcustomerクラスの機能を実行する必要がある。
他のコンポーネントから分離するという原則に従うなら、ここで実際のproductクラスやcustomerクラスを使うのは避けたい。
たとえばcustomerクラスの挙動に問題があったときに、orderクラスのテストも失敗してしまうからだ。
そんな時には、実際のコンポーネントの代わりに@<href>{http://martinfowler.com/bliki/TestDouble.html, テストダブル}を使う。

#@# <img src = 'images/unitTest/isolate.png'></img>
//indepimage[isolate]

#@# <p>But not all unit testers use this isolation. Indeed when xunit
#@#     testing began in the 90's we made no attempt to isolate unless
#@#     communicating with the collaborators was awkward (such as a remote
#@#     credit card verification system). We didn't find it difficult to
#@#     track down the actual fault, even if it caused neighboring tests
#@#     to fail. So we felt isolation wasn't an issue in practice.</p>
でも、ユニットテストでわざわざそんなことはしない、という人もいる。
実際、90年代にxunitテスティングが始まったころは、よっぽどのことがない限りこんな細工はしなかった
（「よっぽどのこと」とは、たとえば外部のクレジット審査システムを使っているなどの場合だ）。
たとえテスト対象以外のところが問題でテストが失敗していたとしても、その原因を探るのはそれほど苦にならないと考えられていた。
なので、実際のところ、わざわざ分離するほどの問題だとは思わなかったのだ。

#@# <p>Indeed this lack of isolation was one of
#@#     the reasons we were criticized for our use of the term "unit
#@#     testing". I think that the term "unit testing" is appropriate because
#@#     these tests are tests of the behavior of a single unit. We write
#@#     the tests assuming everything other than that unit is working
#@#     correctly.</p>
分離を気にしなかったことも、当時「おまえらのユニットテスティングは間違っている」と批判された原因のひとつだろう。
でも私は、それもまた「ユニットテスティング」だと思っていた。だって、単体のユニットの振る舞いをテストしているという点では同じなのだから。
私たちは、テスト対象のユニット以外はすべて正常に動くものだという前提のもとで、テストを書いている。

#@# <p>As xunit testing became more popular in the 2000's the notion of
#@#     isolation came back, at least for some people. We saw the rise of
#@#     Mock Objects and frameworks to support mocking. Two schools of
#@#     xunit testing developed, which <a href = '/articles/mocksArentStubs.html'>I call the classic and mockist
#@#     styles</a>. Classic xunit testers don't worry about isolation but
#@#     mockists do. Today I know and respect xunit testers of both styles
#@#     (personally I've stayed with classic style). </p>
2000年代に入ってxunitテスティングがはやりだしたころに、分離主義がふたたび登場してきた。
モックオブジェクトや、モッキングをサポートするフレームワークが現れたのだ。
xunitテスティングは二つの学派に分裂した。私は両者を@<href>{http://martinfowler.com/articles/mocksArentStubs.html, 古典派そしてモック主義者と呼んでいる}。
古典派のxunitテスターは分離など気にしないが、モック主義者は分離を気にする。
どちらの考えかたも理解できるし、どちらの考えかたも尊重している（ただ、個人的には、古典派の考えに近い）。

#@# <p>Even a classic tester like myself uses test doubles when there's an
#@#     awkward collaboration. They are invaluable to remove
#@#     <a href = '/articles/nonDeterminism.html#RemoteServices'>non-determinism
#@#     when talking to remote services</a>. Indeed some classicist xunit testers
#@#     also argue that any collaboration with external resources, such as
#@#     a database or filesystem, should use doubles. Partly this is due to
#@#     non-determinism risk, partly due to speed. While I think this is a
#@#     useful guideline, I don't treat using doubles for external resources
#@#     as an absolute rule. If talking to the resource is stable and fast
#@#     enough for you then there's no reason not to do it in your unit
#@#     tests.</p>
私みたいな古株のテスターだって、扱いづらい外部コンポーネントがあればテストダブルを使う。
@<href>{http://martinfowler.com/articles/nonDeterminism.html#RemoteServices, リモートサービスとの通信時の非決定論}を取り除けるという価値は計り知れない。
古典主義者の中にも、データベースやファイルシステムなどの外部リソースについてはテストダブルを使うべきだと主張する人がいる。
非決定論のリスクや、スピードのリスクを考慮した意見だ。
有用な指針だとは思うが、私は「外部リソースにはテストダブルを使う」と絶対的に決めてしまう気にはならない。
そのリソースが十分に安定していて、かつ高速にやりとりできるのなら、ユニットテストで直接それを使わない理由はないと思っている。

#@# <h2>Speed</h2>
== スピード

#@# <p>The common properties of unit tests &#x2014; small scope, done by the
#@#     programmer herself, and fast &#x2014; mean that they can be run very
#@#     frequently when programming. Indeed this is one of the key
#@#     characteristics of <a href = 'SelfTestingCode.html'>SelfTestingCode</a>. In this situation
#@#     programmers run unit tests after any change to the code. I may run unit
#@#     tests several times a minute, any time I have code that's worth
#@#     compiling. I do this because should I accidentally break something,
#@#     I want to know right away. If I've introduced the defect with my
#@#     last change it's much easier for me to spot the bug because I don't
#@#     have far to look.</p>
ユニットテストに共通する性質（スコープが小さい、プログラマー自身が実行する、高速に行う）はつまり、
プログラミングの際に頻繁にユニットテストを実行できるということを意味する。
実際これは、@<href>{http://martinfowler.com/bliki/SelfTestingCode.html, SelfTestingCode}の鍵となる特性でもある。
プログラマーは、コードに変更を加えるたびにユニットテストを実行する。
私の場合は、コンパイルできるコードがあるときにはいつもテストを実行するので、実行頻度は1分間に数回のレベルになる。
もし間違ってどこかを壊してしまったときには、すぐに気づけるようにしたいからだ。
不具合の原因となった変更の直後にその不具合に気づければ、バグを見つけるのもたやすくなる。今いじったところだけを見ればいいわけだ。

#@# <p>When you run unit tests so frequently, you may not run all
#@#     the unit tests. Usually you only need to run those tests that are
#@#     operating over the part of the code you're currently working on. As
#@#     usual, you trade off the depth of testing with how long it takes to
#@#     run the test suite. I'll call this suite the <b>compile
#@#     suite</b>, since it what I run it whenever I think of compiling -
#@#     even in an interpreted language like Ruby.</p>
このように高速にユニットテストを回すときには、必ずしも毎回すべてのテストを実行しなくてもかまわない。
通常は、今作業中のコード周りのテストだけを実行すればいいだろう。
テストの深さをある程度犠牲にして、テストスイートの実行時間を取ることになる。
私はこの手のテストスイートを@<b>{コンパイルスイート}と呼ぶ。「コンパイルしようかな」と思ったとき（Rubyみたいなインタプリタ型の言語でも同じだ）に常に実行するからだ。

#@# <p>If you are using Continuous Integration you should run a test
#@#     suite as part of it. It's common for this suite, which I call the
#@#     <b>commit suite</b>, to include all the unit tests. It may
#@#     also include a few <a href = 'BroadStackTest.html'>BroadStackTests</a>. As a programmer you
#@#     should run this commit suite several times a day, certainly before
#@#     any shared commit to version control, but also at any other time you
#@#     have the opportunity - when you take a break, or have to go to a
#@#     meeting. The faster the commit suite is, the more often you can run
#@#     it. <a href = '#footnote-pipeline'>[2]</a></p>
継続的インテグレーションを使っているなら、テストスイートもその一環で実行すべきだ。
このときの使うテストスイート（私は@<b>{コミットスイート}と呼ぶ）には、すべてのユニットテストを含めるのが一般的だ。
それ以外に、いくつかの@<href>{http://martinfowler.com/bliki/BroadStackTest.html, BroadStackTests}を含めることもある。
プログラマーとして、このコミットスイートは1日に何度か実行すべきだ。バージョン管理システムへのコミットの前に行うのはもちろん、
それ以外の場合でも、たとえば休憩前や打ち合わせに出る前などに行うといい。
コミットスイートの実行速度が上がれば上がるほど、より頻繁に実行できるようになる。@<fn>{fn02}

#@# <p>Different people have different standards for the speed of unit tests
#@#     and of their test suites.  <a href = 'http://david.heinemeierhansson.com/2014/slow-database-test-fallacy.html'>David
#@#     Heinemeier Hansson</a> is happy with a compile suite that takes a few
#@#     seconds and a commit suite that takes a few minutes. <a href = 'https://www.destroyallsoftware.com/blog/2014/tdd-straw-men-and-rhetoric'>Gary
#@#     Bernhardt</a> finds that unbearably slow, insisting on a compile suite
#@#     of around 300ms and <a href = 'http://dan.bodar.com/2012/02/28/crazy-fast-build-times-or-when-10-seconds-starts-to-make-you-nervous/'>Dan Bodart</a> doesn't want his commit suite to be
#@#     more than ten seconds</p>
ユニットテストやテストスイートの実行速度については、人によっていろんな意見がある。
@<href>{http://david.heinemeierhansson.com/2014/slow-database-test-fallacy.html, David Heinemeier Hansson}
は、コンパイルスイートが数秒で実行できて、コミットスイートが数分で終わるようなら問題ないと考えている。
@<href>{https://www.destroyallsoftware.com/blog/2014/tdd-straw-men-and-rhetoric, Gary Bernhardt}
は、それでは我慢できないようだ。コンパイルスイートは300ms程度で実行できるべきだと言う。
また、@<href>{http://dan.bodar.com/2012/02/28/crazy-fast-build-times-or-when-10-seconds-starts-to-make-you-nervous/, Dan Bodart}
は、コミットスイートに10秒以上かけたくないとしている。

#@# <p>I don't think there's an absolute answer here. Personally I don't
#@#     notice a difference between a compile suite that's sub-second or a
#@#     few seconds. I like Kent Beck's rule of thumb that the commit suite
#@#     should run in no more than ten minutes. But the real point is that
#@#     your test suites should run fast enough that you're not discouraged
#@#     from running them frequently enough. And frequently enough is so
#@#     that when they detect a bug there's a sufficiently small amount of
#@#     work to look through that you can find it quickly.</p>
#@# </div>
絶対的な答えがあるとは思っていない。
コンパイルスイートが1秒以内で終わろうが数秒かかろうが、個人的にはあまり差がないと思っている。
私はKent Beckの経験則（コミットスイートは10分以内で実行できるべき）を好む。
が、その本質は、頻繁に実行するのが苦にならない程度に、テストを高速に実行できるべきだということだ。
そして、「頻繁に」というのは、最小限の手間で手早くバグを見つけられる程度にということだ。

#@# <h2>Notes</h2>
== 備考

//footnote[fn01][わざわざ「最近の」としたのは、XP前とXP後で何かが確実に変わったからだ。前世紀から続く議論の中で、XPな人たちはこの点を強く批判されてきた。「自分が書いたコードを自分でテストするなんて、とんでもない！」というのが、当時の常識だった。別の開発者が書いたコードに対するユニットテストを書くだけのお仕事をする、専任のユニットテスターを雇っている企業もあった。「人は、自分の書いたコードには盲目になってしまう」「優れたプログラマー優れたテスターだとは限らない」というのがその理由だ。その結果、開発者とテスターとの間に敵対関係ができてしまった。XPの考えはそうではない。プログラマーは（少なくともユニットテストレベルでは）すぐれたテスターになれるし、開発者とテスターを分けてしまうと、テストから得られるフィードバックを取り込むのが決定的に遅くなってしまう。ここで重要な役割を果たすのがXunitだ。Xunitは、プログラマーがテストを書く際の抵抗を減らすことを目指して作られた。]

//footnote[fn02][有用なテストがあるのだが、それを実行するとコミットスイートに時間がかかりすぎるという場合は、@<href>{http://martinfowler.com/bliki/DeploymentPipeline.html, デプロイメントパイプライン}を作って、遅いテストはパイプラインの後半のステージに配置すべきだ。]
