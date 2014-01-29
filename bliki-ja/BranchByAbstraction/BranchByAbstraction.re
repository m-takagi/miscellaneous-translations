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
We create an abstraction layer that captures the interaction between one section of the client code and the current supplier. We change that section of the client code to call the supplier entirely through this abstraction layer.

#@# <p><img src = 'images/branch-by-abstraction/step-2.png'></img></p>
//indepimage[step-2]

#@# <p>We gradually move all client code over to use the abstraction
#@#   layer until all interaction with the supplier is done by the
#@#   abstraction layer. As we do this we take the opportunity to
#@#   improve the unit test coverage of the supplier through this
#@#   abstraction layer.</p>
We gradually move all client code over to use the abstraction layer until all interaction with the supplier is done by the abstraction layer. As we do this we take the opportunity to improve the unit test coverage of the supplier through this abstraction layer.

#@# <p><img src = 'images/branch-by-abstraction/step-3.png'></img></p>
//indepimage[step-3]

#@# <p>We build a new supplier that implements the features required by
#@#   one part of the client code using the same abstraction layer <a href = '#footnote-toggle'>[2]</a>. Once
#@#   we are ready we switch that section of the client code to use the
#@#   new supplier.</p>
We build a new supplier that implements the features required by one part of the client code using the same abstraction layer @<fn>{fn02}. Once we are ready we switch that section of the client code to use the new supplier.

#@# <p><img src = 'images/branch-by-abstraction/step-4.png'></img></p>
//indepimage[step-4]

#@# <p>We gradually swap out the flawed supplier until all the client
#@#   code uses the new supplier. Once the flawed supplier isn't needed,
#@#   we can delete it. We may also choose to delete the abstraction
#@#   layer once we no longer need it for migration.</p>
We gradually swap out the flawed supplier until all the client code uses the new supplier. Once the flawed supplier isn't needed, we can delete it. We may also choose to delete the abstraction layer once we no longer need it for migration.

#@# <p><img src = 'images/branch-by-abstraction/step-5.png'></img></p>
//indepimage[step-5]

#@# <p>My description above describes a common case, but there are plenty
#@#   of variation that can occur.  Sometimes you can't
#@#   swap-out the supplier for only some clients, you have to do it all at
#@#   once. Sometimes you can break down the features of the supplier into
#@#   different sub-components and carry out this whole procedure one
#@#   sub-component at a time. </p>
My description above describes a common case, but there are plenty of variation that can occur.  Sometimes you can't  swap-out the supplier for only some clients, you have to do it all at once. Sometimes you can break down the features of the supplier into different sub-components and carry out this whole procedure one sub-component at a time.

#@# <p>Despite these variations, there is a common theme. Use an
#@#   abstraction layer to allow multiple implementations to co-exist in
#@#   the software system. Use the notion of one abstraction and multiple
#@#   implementations to perform the migration from one implementation to
#@#   the other. Ensure that the system builds and runs correctly at all
#@#   times, so you can continue to use <a href = '/delivery.html'>Continuous Delivery</a> while you are
#@#   doing the replacement. Look for as many ways as possible to make
#@#   changes gradually.</p>
Despite these variations, there is a common theme. Use an abstraction layer to allow multiple implementations to co-exist in the software system. Use the notion of one abstraction and multiple implementations to perform the migration from one implementation to the other. Ensure that the system builds and runs correctly at all times, so you can continue to use @<href>{http://martinfowler.com/delivery.html, Continuous Delivery} while you are doing the replacement. Look for as many ways as possible to make changes gradually.

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
//footnote[fn01][This technique has been around for a long time, although it never got a popular name. Paul Hammant introduced the term "Branch by Abstraction" while arguing in favor of @<href>{http://paulhammant.com/2013/04/05/what-is-trunk-based-development/, Trunk Based Development} (he credits Stacy Curl with originally coming up with it). This name seems to have caught on and is now the term I most commonly hear.]

#@# <p><span class = 'num'>2: </span>
#@#       While we are building the new feature we can use
#@#       <a href = 'FeatureToggle.html'>FeatureToggles</a> to run the new supplier in test
#@#       environments and compare its behavior to the flawed supplier.
#@#     </p>
//footnote[fn02][While we are building the new feature we can use @<href>{http://martinfowler.com/FeatureToggle.html, FeatureToggles} to run the new supplier in test environments and compare its behavior to the flawed supplier.]