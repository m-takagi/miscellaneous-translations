#@ -*- mode: review; coding: utf-8 -*-
#@ TestPyramid
= テストピラミッド

//lead{
Martin Fowler's blikiの"@<href>{http://martinfowler.com/bliki/TestPyramid.html, TestPyramid}"の翻訳。
//}

1 May 2012

//flushright{
tags: @<href>{http://martinfowler.com/tags/testing.html, testing}
//}

#@ The test pyramid is a concept developed by @<href>{http://www.mountaingoatsoftware.com/, Mike Cohn}, described in his book @<href>{http://www.amazon.com/dp/product/0321579364/, Succeeding with Agile}. Its essential point is that you should have many more low-level unit tests than high level end-to-end tests running through a GUI.
テストピラミッドは@<href>{http://www.mountaingoatsoftware.com/, Mike Cohn}
が考えた概念で、彼の著書@<href>{http://www.amazon.com/dp/product/0321579364/, Succeeding with Agile}に説明がある。
そのポイントは、低水準のユニットテストのほうが、
GUI経由で実行する高水準のエンドツーエンドテストよりもずっと多くないといけないということだ。

//indepimage[pyramid]

#@ For much of my career test automation meant tests that drove an application through its user-interface. Such tools would often provide the facility to record an interaction with the application and then allow you to play back that interaction, checking that the application returned the same results. Such an approach works well initially. It's easy to record tests, and the tests can be recorded by people with no knowledge of programming.
これまでの私の経験では、テストを自動化するというのは、
そのアプリケーションをユーザーインターフェイス経由で実行するという意味だった。
テスト自動化ツールの多くには、アプリケーションの操作を記録する機能があった。
そして、記録した操作を再生して、アプリケーションが同じ結果を返すかどうかを確かめたのだ。
このやり方は、最初のうちはうまくいっていた。
操作を記録するのは簡単だし、プログラミングの知識がない人でも操作を記録できた。

#@ But this kind of approach quickly runs into trouble, becoming an @<href>{http://watirmelon.com/2012/01/31/introducing-the-software-testing-ice-cream-cone/, ice-cream cone}. Testing through the UI like this is slow, increasing build times. Often it requires installed licences for the test automation software, which means it can only be done on particular machines. Usually these cannot easily be run in a "headless" mode, monitored by scripts to put in a proper deployment pipeline.
でも、この手法はあっという間に問題を引き起こし、
@<href>{http://watirmelon.com/2012/01/31/introducing-the-software-testing-ice-cream-cone/, 「アイスクリームのコーン」}
みたいな状態になってしまう。
こんなふうにUI経由でテストをすると、ビルドに時間がかかるようになってしまう。
テスト自動化ソフトの中には、ライセンスをインストールしないと使えないものも多い。
つまり、特定のマシンでしかテストを実行できないってことだ。
この手のソフトの多くは、いわゆる「ヘッドレス」モードでの実行が難しい。
なので、スクリプトで監視させてデプロイメントパイプラインに組み込むこともできない。

#@ Most importantly such tests are very brittle. An enhancement to the system can easily end up breaking lots of such tests, which then have to be re-recorded. You can reduce this problem by abandoning record-playback tools, but that makes the tests harder to write. [1] Even with good practices on writing them, end-to-end tests are more prone to @<href>{http://martinfowler.com/articles/nonDeterminism.html, non-determinism problems}, which can undermine trust in them. In short, tests that run end-to-end through the UI are: brittle, expensive to write, and time consuming to run. So the pyramid argues that you should do much more automated testing through unit tests than you should through traditional GUI based testing.
いちばん重要なのは、この手のテストが壊れやすくなってしまうということだ。
システムに機能を追加したりすると、いとも簡単に大量のテストが動かなくなってしまう。
そして、もういちど記録をし直す必要が出てくる。
記録・再生型のツールを使うのをあきらめれば、この問題も少しはましになる。
しかし、テストを書くのは難しくなる。@<fn>{fn01}
この手のテストの書き方にいくら気をつけたところで、エンドツーエンドテストは
@<href>{http://martinfowler.com/articles/nonDeterminism.html, 非決定論的な問題}
になる傾向がある。つまり、信頼性が徐々に下がっていくということだ。
要するに、UIを使って実行するエンドツーエンドテストというのは、
こわれやすいし書くのも難しいし、さらに実行にも時間がかかるという代物になる。
つまり、このピラミッドが主張するのは、
テストの自動化に力を入れるのなら、昔ながらのGUIベースのテストよりも、
ユニットテストのほうにもっと力を入れるべきだと言うことだ。

#@ The pyramid also argues for an intermediate layer of tests that act through a service layer of an application, what I refer to as @<href>{http://martinfowler.com/bliki/SubcutaneousTest.html, SubcutaneousTests}. These can provide many of the advantages of end-to-end tests but avoid many of the complexities of dealing with UI frameworks. In web applications this would correspond to testing through an API layer while the top UI part of the pyramid would correspond to tests using something like @<href>{http://seleniumhq.org/, Selenium} or Sahi.
このピラミッドでは、中間層のテストも提唱している。アプリケーションのサービス層をテストするもので、
私はこれを@<href>{http://martinfowler.com/bliki/SubcutaneousTest.html, 皮下テスト}
と呼んでいる。皮下テストはエンドツーエンドテストのメリットの多くをもたらすだけでなく、
UIフレームワークを使うことによる複雑性も回避できる。
Webアプリケーションの場合、皮下テストに対応するのはAPIレイヤーを使ったテストだ。
一方、ピラミッドの頂点にあるUIのテストに対応するのは、
@<href>{http://seleniumhq.org/, Selenium}やSahiなどを使ったテストだ。

#@ The test pyramid comes up a lot in Agile testing circles and while its core message is sound, there is much more to say about building a well-balanced test portfolio. In particular a common problem is that teams conflate the concepts of end-to-end tests, UI tests, and customer facing tests. These are all orthogonal characteristics. For example a rich javascript UI should have most of its UI behavior tested with javascript unit tests using something like @<href>{http://pivotal.github.com/jasmine/, Jasmine}. A complex set of business rules could have tests captured in a customer-facing form, but run just on the relevant module much as unit tests are.
アジャイル開発のテストにおいても、テストピラミッドの認知度は高まってきた。
その主なメッセージは伝わっているが、よりバランスのとれたテストポートフォリオを作るために、もう少し言っておきたい。
よくありがちな問題は、エンドツーエンドテストとUIテスト、そして対顧客テストの概念をごちゃまぜにしてしまうというものだ。
これらはみな異なるもので、それぞれの特性は直交する。
たとえばリッチなJavaScriptのUIの場合は、そのUIの振る舞いの大半をJavaScriptのユニットテストでテストしなければいけない。
@<href>{http://pivotal.github.com/jasmine/, Jasmine}などを使うことになる。
複雑な業務ルールのテストは顧客との対面形式でもできるだろうが、
それに関するモジュールのテストは単にユニットテストを実行するだけだ。

#@ In particular I always argue that high-level tests are there as a second line of test defense. If you get a failure in a high level test, not just do you have a bug in your functional code, you also have a missing unit test. Thus whenever you fix a failing end-to-end test, you should be adding unit tests too.
私が常々言っていることがある。
高水準のテストというのは、テストでの守りにおける第二ラインになっているということだ。
高水準のテストに失敗したということは、単にその機能の実装コードにバグがあるというだけのことではない。
それに関するユニットテストが足りないということも意味するのだ。
つまり、失敗したエンドツーエンドテストに対応するときには、
同時にユニットテストも追加しなければいけない。

#@ 1: Record-playback tools are almost always a bad idea for any kind of automation, since they resist changeability and obstruct useful abstractions. They are only worth having as a tool to generate fragments of scripts which you can then edit as a proper programming language, in the manner of @<href>{http://www.thoughtworks-studios.com/twist-agile-testing, Twist} or @<href>{http://www.gnu.org/software/emacs/manual/html_node/emacs/Save-Keyboard-Macro.html, Emacs}.
//footnote[fn01][記録-再生型のツールを自動化の手段として使うのは、まったくもってまずい案だ。変更のしやすさと相反するし、便利な抽象化の邪魔になってしまう。この手のツールが役立つ唯一の場面は、スクリプト片を生成させて、それを適切なプログラミング言語として（@<href>{http://www.thoughtworks-studios.com/twist-agile-testing, Twist}や@<href>{http://www.gnu.org/software/emacs/manual/html_node/emacs/Save-Keyboard-Macro.html, Emacs}などで）編集できるようにするような場合だ。]
