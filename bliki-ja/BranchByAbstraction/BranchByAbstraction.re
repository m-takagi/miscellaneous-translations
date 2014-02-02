#@ -*- mode: review; coding: utf-8 -*-
#@ BranchByAbstraction
= 抽象化によるブランチ

#@ http://martinfowler.com/bliki/BranchByAbstraction.html

//lead{
Martin Fowler's blikiの"@<href>{http://martinfowler.com/bliki/BranchByAbstraction.html, BranchByAbstraction}"の翻訳。
//}

#@ 7 January 2014
2014/1/7

//flushright{
tags: @<href>{http://martinfowler.com/tags/version%20control.html, version control} @<href>{http://martinfowler.com/tags/continuous%20integration.html, continuous integration}
//}

#@# <p>"Branch by Abstraction" is a technique <a href = '#footnote-coin'>[1]</a>
#@#   for making a large-scale change to a software system in gradual way
#@#   that allows you to release the system regularly while the change is
#@#   still in-progress.</p>
「抽象化によるブランチ」というテクニック@<fn>{fn01}は、ソフトウェアシステムへの大規模な変更を徐々に進めていくときに使われるものだ。
これを使えば、変更がまだ完了していなくても、定期的にシステムをリリースできるようになる。

#@# <p>We begin with a situation where various parts of the software
#@#   system are dependent on a module, library, or framework that we
#@#   wish to replace</p>
こんな状況を考えてみよう。システムのかなりの部分が依存しているモジュール（あるいはライブラリやフレームワーク）があって、それをリプレイスしようとしている。

#@# <p><img src = 'images/branch-by-abstraction/step-1.png'></img></p>
//indepimage[step-1]

※Flawed Supplier…欠陥のあるモジュール

#@# <p>We create an abstraction layer that captures the interaction
#@#   between one section of the client code and the current supplier.
#@#   We change that section of the client code to call the supplier
#@#   entirely through this abstraction layer.</p>
抽象化レイヤーを作って、クライアントのコードとモジュールとのやりとりをそこに閉じ込める。
クライアントのコードの中でモジュールを呼び出しているところをすべて書き換えて、この抽象化レイヤーを経由させる。

#@# <p><img src = 'images/branch-by-abstraction/step-2.png'></img></p>
//indepimage[step-2]

#@# <p>We gradually move all client code over to use the abstraction
#@#   layer until all interaction with the supplier is done by the
#@#   abstraction layer. As we do this we take the opportunity to
#@#   improve the unit test coverage of the supplier through this
#@#   abstraction layer.</p>
各クライアントについて、この抽象化レイヤーを使うよう徐々に書き換えていく。そして最終的には、モジュールとのやりとりをすべて抽象化レイヤーに閉じ込める。
こうすることで、モジュールに対するユニットテストのカバレッジを改善できるようになる。この抽象化レイヤーをテスト通してテストできるからだ。

#@# <p><img src = 'images/branch-by-abstraction/step-3.png'></img></p>
//indepimage[step-3]

#@# <p>We build a new supplier that implements the features required by
#@#   one part of the client code using the same abstraction layer <a href = '#footnote-toggle'>[2]</a>. Once
#@#   we are ready we switch that section of the client code to use the
#@#   new supplier.</p>
そして、クライアントに必要な機能を実装した新しいモジュールを作る。このとき、新しいモジュールも先ほどの抽象化レイヤーを使うようにする@<fn>{fn02}。
準備が整ったら、その機能を使うクライアントのコードを変更し、新しいモジュールを使うように切り替える。

#@# <p><img src = 'images/branch-by-abstraction/step-4.png'></img></p>
//indepimage[step-4]

#@# <p>We gradually swap out the flawed supplier until all the client
#@#   code uses the new supplier. Once the flawed supplier isn't needed,
#@#   we can delete it. We may also choose to delete the abstraction
#@#   layer once we no longer need it for migration.</p>
それ以外のクライアントについても、問題のあるモジュールから新しいモジュールへ徐々に切り替えていく。
古いモジュールが不要になった時点で、古いモジュールは削除できる。
この移行作業が終わったら、抽象化レイヤーはそのままでもかまわないし消してしまってもかまわない。

#@# <p><img src = 'images/branch-by-abstraction/step-5.png'></img></p>
//indepimage[step-5]

#@# <p>My description above describes a common case, but there are plenty
#@#   of variation that can occur.  Sometimes you can't
#@#   swap-out the supplier for only some clients, you have to do it all at
#@#   once. Sometimes you can break down the features of the supplier into
#@#   different sub-components and carry out this whole procedure one
#@#   sub-component at a time. </p>
この例はあくまでも一般的なものだが、実際はいろんなバリエーションがあり得る。
一部のクライアントだけを先に移行するのが不可能で、全部一括で移行せざるを得ないことだってあるだろう。
あるいは、元のモジュールをいくつかのサブコンポーネントに分割して、サブコンポーネント単位で先ほどのプロセスを繰り返すことも考えられる。

#@# <p>Despite these variations, there is a common theme. Use an
#@#   abstraction layer to allow multiple implementations to co-exist in
#@#   the software system. Use the notion of one abstraction and multiple
#@#   implementations to perform the migration from one implementation to
#@#   the other. Ensure that the system builds and runs correctly at all
#@#   times, so you can continue to use <a href = '/delivery.html'>Continuous Delivery</a> while you are
#@#   doing the replacement. Look for as many ways as possible to make
#@#   changes gradually.</p>
こういったバリエーションがあるにせよ、その狙いはすべて共通している。
抽象化レイヤーを使って、複数の実装を一つのソフトウェアシステム内で共存できるようにすることだ。
抽象化レイヤーを一枚増やすことで、一つの実装からもう一つの実装への移行を行っている。
どの時点であってもシステムがきちんとビルドできて実行できることが保証されているので、
@<href>{http://martinfowler.com/delivery.html, 継続的デリバリー}を実現しながらリプレイスを進められる。
段階的な変更の進めかたについては、いろんな方法を探ってみよう。

#@# <h2>Further Reading</h2>
== Further Reading

#@# <p><a href = 'http://continuousdelivery.com/2011/05/make-large-scale-changes-incrementally-with-branch-by-abstraction/'>Jez
#@#     Humble describes</a> how his team used Branch-by-Abstraction to
#@#      replace both an object-relational mapping framework (ibatis to
#@#     hibernate) and the web UI framework (velocity/JsTemplate to Ruby
#@#     on Rails) for ThoughtWorks's Continuous Delivery tool "Go". </p>
@<href>{http://continuousdelivery.com/2011/05/make-large-scale-changes-incrementally-with-branch-by-abstraction/, Jez Humble describes} how his team used Branch-by-Abstraction to replace both an object-relational mapping framework (ibatis to hibernate) and the web UI framework (velocity/JsTemplate to Ruby on Rails) for ThoughtWorks's Continuous Delivery tool "Go".

#@# <p>Paul Hammant provides <a href = 'http://paulhammant.com/blog/branch_by_abstraction.html'>more
#@#     details</a> of using Branch-by-Abstraction, particularly as an
#@#     alternative to using version-control branching.</p>
Paul Hammant provides @<href>{http://paulhammant.com/blog/branch_by_abstraction.html, more details} of using Branch-by-Abstraction, particularly as an alternative to using version-control branching.

#@# <h2>Acknowledgements</h2>
== Acknowledgements

#@# Thanks to Paul Hammant for his detailed
#@#   suggestions as well as being an important primary source.
Thanks to Paul Hammant for his detailed suggestions as well as being an important primary source.

#@# <h2>Notes</h2>
== Notes

#@# <p><span class = 'num'>1: </span>
#@#       This technique has been around for a long time, although it
#@#       never got a popular name. Paul Hammant introduced the term "Branch by
#@#       Abstraction" while arguing in favor of <a href = 'http://paulhammant.com/2013/04/05/what-is-trunk-based-development/'>Trunk
#@#       Based Development</a> (he credits Stacy Curl with originally
#@#       coming up with it). This name seems to have caught on and is now
#@#       the term I most commonly hear.
#@#     </p>
//footnote[fn01][このテクニックは別に目新しいものではないが、これまできちんと名付けられたことがなかった。「抽象化によるブランチ」という言葉を使い始めたのはPaul Hammantで、@<href>{http://paulhammant.com/2013/04/05/what-is-trunk-based-development/, Trunkでの開発}よりもずっといいと主張した（彼曰く、もともとはStacy Curlが思いついた言葉だそうだ）。今やこの用語は一般的になり、よく効くようになった。]

#@# <p><span class = 'num'>2: </span>
#@#       While we are building the new feature we can use
#@#       <a href = 'FeatureToggle.html'>FeatureToggles</a> to run the new supplier in test
#@#       environments and compare its behavior to the flawed supplier.
#@#     </p>
//footnote[fn02][While we are building the new feature we can use @<href>{http://martinfowler.com/FeatureToggle.html, FeatureToggles} to run the new supplier in test environments and compare its behavior to the flawed supplier.]