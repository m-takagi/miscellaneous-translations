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
Test-Driven Enlightenment saves an enormous amount of time, because instead of flailing around, fiddling with code, not having a direction, tests hone your focus.

#@# Tests also are very good positive feedback. Every time you make a new test pass,
#@# you know that your code is better and it has one more feature or one less bug.
Tests also are very good positive feedback. Every time you make a new test pass, you know that your code is better and it has one more feature or one less bug.

#@# It is easy to think ``I want to add 50 features'' and spend all day fiddling
#@# with code, constantly switching between working on different things. Most of the
#@# time, very little will be accomplished. Test-Driven Enlightenment guides one to
#@# focus on making one test pass at a time.
It is easy to think ``I want to add 50 features'' and spend all day fiddling with code, constantly switching between working on different things. Most of the time, very little will be accomplished. Test-Driven Enlightenment guides one to focus on making one test pass at a time.

#@# If you have a single failing test, you are on a mission to make it pass. It focuses
#@# your brain on something very specific, which very often has better results than
#@# switching between tasks constantly.
If you have a single failing test, you are on a mission to make it pass. It focuses your brain on something very specific, which very often has better results than switching between tasks constantly.

#@# Most information about being test-driven is very specific to a language or
#@# situation, but that does not need to be the case. Here is how to approach
#@# adding a new feature or fixing a bug in any language:
Most information about being test-driven is very specific to a language or situation, but that does not need to be the case. Here is how to approach adding a new feature or fixing a bug in any language:

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
 1. Write a test that fails, which you think will pass when the feature is implemented or bug is fixed. Advanced: As you write the test, run it occasionally, even if it is not done yet, and guess the actual error message that the test will give. The more tests you write and run, the easier this will become.
 1. Hack on the code.
 1. Run the test. If it passes, go to \#4, otherwise go to \#2.
 1. You are done! Do a happy dance :)

#@# This method works for any kind of test and any language. If you remember only one thing about testing from this essay, remember the steps above.
This method works for any kind of test and any language. If you remember only one thing about testing from this essay, remember the steps above.

#@# Here are some more general test-driven guidelines that will serve you well and
#@# apply in almost any situation:
Here are some more general test-driven guidelines that will serve you well and apply in almost any situation:

#@# \begin{enumerate}
#@#  \item Understand the difference between what is being tested and what is being
#@# used as a tool to test something else.
#@#  \item Fragile tests. You could write a test that makes sure an error message is
#@# exactly correct. But what happens when the error message changes? What happens
#@# when someone internationalizes your code to Catalan? What happens when someone
#@# runs your code on an operating system you have never heard of? The more resilient your test is,
#@# the more valuable it will be.
#@# \end{enumerate}
 1. Understand the difference between what is being tested and what is being used as a tool to test something else.
 1. Fragile tests. You could write a test that makes sure an error message is exactly correct. But what happens when the error message changes? What happens when someone internationalizes your code to Catalan? What happens when someone runs your code on an operating system you have never heard of? The more resilient your test is, the more valuable it will be.

#@# Think about these things when you write tests. You want them to be resilient,
#@# i.e., tests, for the most part, should only have to change when functionality
#@# changes. If you have to change your tests often, but functionality is not
#@# changing, you are doing something wrong.
Think about these things when you write tests. You want them to be resilient, i.e., tests, for the most part, should only have to change when functionality changes. If you have to change your tests often, but functionality is not changing, you are doing something wrong.

#@# \section*{Kinds of tests}
== Kinds of tests

#@# Many people start to get confused when people speak of integration tests,
#@# unit tests, acceptance tests and many other flavors of tests. One
#@# should not worry too much about these terms. The more tests you write, the more
#@# nuances you will see and the differences between tests will become more
#@# apparent. Everyone does not have the same definition for what these tests are,
#@# but the terms are still useful to describe kinds of tests.
Many people start to get confused when people speak of integration tests, unit tests, acceptance tests and many other flavors of tests. One should not worry too much about these terms. The more tests you write, the more nuances you will see and the differences between tests will become more apparent. Everyone does not have the same definition for what these tests are, but the terms are still useful to describe kinds of tests.

#@# \section*{Unit tests vs. integration tests}
== Unit tests vs. integration tests

#@# Unit tests and integration tests form a spectrum. Unit tests test small bits of
#@# code, and integration tests verify how more than one unit fits together. The test
#@# writer gets to decide what comprises a unit, but most often it is at the level
#@# of a function or method, although some languages call those things by different
#@# names.
Unit tests and integration tests form a spectrum. Unit tests test small bits of code, and integration tests verify how more than one unit fits together. The test writer gets to decide what comprises a unit, but most often it is at the level of a function or method, although some languages call those things by different names.

#@# To make this a little more concrete, we will give a basic analogy using
#@# functions. Imagine that $f(x)$ and $g(x)$ are two functions which represent two units of code. For
#@# concreteness, let's assume they represent two specific functions in your
#@# favorite Free/Open Source project's codebase.
To make this a little more concrete, we will give a basic analogy using functions. Imagine that $f(x)$ and $g(x)$ are two functions which represent two units of code. For concreteness, let's assume they represent two specific functions in your favorite Free/Open Source project's codebase.

#@# An integration test asserts something like function composition, i.e., $f(g(a)) =
#@# b$. An integration test is testing how multiple
#@# things integrate or work together, instead of how a single part works
#@# individually. If algebra isn't your thing, another way to look at it is unit
#@# tests only test one part of the machine at a time, but integration tests very
#@# many parts work in unison. A great example of an integration test is test-driving a car.
#@# You are not checking the air pressure, or measuring voltage of the spark plugs.
#@# You are making sure the vehicle works as a whole.
An integration test asserts something like function composition, i.e., $f(g(a)) = b$. An integration test is testing how multiple things integrate or work together, instead of how a single part works individually. If algebra isn't your thing, another way to look at it is unit tests only test one part of the machine at a time, but integration tests very many parts work in unison. A great example of an integration test is test-driving a car. You are not checking the air pressure, or measuring voltage of the spark plugs. You are making sure the vehicle works as a whole.

#@# Most of the time it is good to have both. I often start with unit tests and add
#@# integration tests as needed, since you will weed out the most basic bugs first,
#@# then find more subtle bugs that are related to how pieces do not quite fit
#@# together, as opposed to the individual pieces not working. Many people write
#@# integration tests first and then delve into unit tests. Which you write first
#@# is not nearly as important as writing both kinds.
Most of the time it is good to have both. I often start with unit tests and add integration tests as needed, since you will weed out the most basic bugs first, then find more subtle bugs that are related to how pieces do not quite fit together, as opposed to the individual pieces not working. Many people write integration tests first and then delve into unit tests. Which you write first is not nearly as important as writing both kinds.

#@# \section*{Enlightenment}
== Enlightenment

#@# Test-Driven Enlightment is a path, not a place. Enjoy the journey and make sure
#@# to stop and smell the flowers if and when you get lost.
Test-Driven Enlightment is a path, not a place. Enjoy the journey and make sure to stop and smell the flowers if and when you get lost.
