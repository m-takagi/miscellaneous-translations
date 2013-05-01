#@ -*- mode: review; coding: utf-8 -*-
#@ UserStory
= UserStory

#@ http://martinfowler.com/bliki/UserStory.html

//lead{
Martin Fowler's blikiの"@<href>{http://martinfowler.com/bliki/UserStory.html, UserStory}"の翻訳。
//}

#@ 22 April 2013
2013/4/22

//flushright{
tags: @<href>{http://martinfowler.com/tags/agile.html, agile} @<href>{http://martinfowler.com/tags/requirements%20analysis.html, requirements analysis}
//}

#@ <p>User Stories are chunks of desired behavior of a software system.
#@   They are widely used in agile software approaches to divide up a
#@   large amount of functionality into smaller pieces for planning
#@   purposes. You also hear the same concept referred to as a
#@   <b>feature</b>, but the term "story" or "user story" has
#@   become prevalent in agile circles these days.</p>
ユーザーストーリーとは、ソフトウェアシステムに求められるふるまいをまとめたものだ。
アジャイルソフトウェア開発の世界で広く使われており、大量の機能を細かく分解して計画作りに生かせるようにしている。
同じような概念を表す用語として@<b>{フィーチャー}という言い方もあるが、
最近のアジャイル界隈では「ストーリー」とか「ユーザーストーリー」とかいう用語のほうが広まっている。

#@ <p>Kent Beck first introduced the term as part of Extreme
#@   Programming to encourage a more informal and conversational style of
#@   requirements elicitation than long written specifications. The
#@   essence of a story can be written on a single note card (Kent and I
#@   prefer 3" by 5"). Stories are deliberately not fleshed out in detail
#@   until they are ready to be developed, you only need enough
#@   understanding to allow prioritization with other stories.</p>
最初にこの言葉を使い出したのはKent Beckで、Extreme Programmingの一環として取り上げていた。
長々と書かれた仕様書ではなく、形式張らない対話型の方法で要件を引き出すためだ。
ストーリーの核心は、一枚のカードに書き出せる（Kentや私がよく使うのは、3インチx5インチのやつだ）。
ストーリーは、敢えて詳細までは具体化しない。それは実際に開発の準備が整うまで先送りだ。
この段階では、他のストーリーとの間で優先順位の調整ができる程度の理解で十分だ。

#@ <p>Bill Wake came up with the <a href = 'http://xp123.com/articles/invest-in-good-stories-and-smart-tasks/'>INVEST mnemonic</a> to describe the
#@   characteristics of good stories:</p>
Bill Wakeは、よいストーリーの特徴を覚えやすくするために
@<href>{http://xp123.com/articles/invest-in-good-stories-and-smart-tasks/, INVEST}
という用語を編み出した。

#@ <ul>
#@ <li><b>Independent</b>: the stories can be delivered in any order</li>

#@ <li><b>Negotiable</b>: the details of what's in the story are co-created
#@     by the programmers and customer during development.</li>

#@ <li><b>Valuable</b>: the functionality is seen as valuable by the
#@     customers or users of the software.</li>

#@ <li><b>Estimable</b>: the programmers can come up with a reasonable
#@     estimate for building the story</li>

#@ <li><b>Small</b>: stories should be built in a small amount of time,
#@     usually a matter of person-days. Certainly you should be able to
#@     build several stories within one iteration.</li>

#@ <li><b>Testable</b>: you should be able to write tests to verify the
#@     software for this story works correctly.</li>
#@ </ul>
 * @<b>{Independent（独立している）}：どのストーリーも、順番を気にせずに出荷できること。
 * @<b>{Negotiable（交渉可能である）}：ストーリーの内部の詳細は、開発中にプログラマーと顧客の共同作業で作り上げること。
 * @<b>{Valuable（価値がある）}：そのストーリーの機能が、顧客あるいはそのソフトウェアのユーザーにとって価値があるものであること。
 * @<b>{Estimable（見積もり可能である）}：プログラマーがストーリーを実装するにあたって、妥当な見積もりができること。
 * @<b>{Small（粒が小さい）}：ストーリーの実装にかかる時間は少なくすること。通常は数人日程度になる。
 少なくとも、1回のイテレーションで複数のストーリーを完成させるくらいでなければいけない。
 * @<b>{Testable（テスト可能である）}：ストーリーが正しく機能することを確認するためのテストを書けること。

#@ <p>A common way to formulate stories is the "As a &#x2026; I want &#x2026; So
#@   that &#x2026;" form. The "As a" clause refers to who wants the story, "I want"
#@   describes what the functionality is, "so that" describes why they
#@   want this functionality. The "so that" part provides important
#@   context to understand to help get from what the customer think they
#@   want to providing what they actually need.</p>
A common way to formulate stories is the "As a @<uchar>{2026} I want @<uchar>{2026} So that @<uchar>{2026}" form. The "As a" clause refers to who wants the story, "I want" describes what the functionality is, "so that" describes why they want this functionality. The "so that" part provides important context to understand to help get from what the customer think they want to providing what they actually need.

#@ <p>Mike Cohn wrote what is <a href = "http://www.amazon.com/gp/product/0321205685?ie=UTF8&amp;tag=martinfowlerc-20&amp;linkCode=as2&amp;camp=1789&amp;creative=9325&amp;creativeASIN=0321205685">now the standard
#@   book on writing user stories</a><img src="http://www.assoc-amazon.com/e/ir?t=martinfowlerc-20&amp;l=as2&amp;o=1&amp;a=0321601912" width="1" height="1" border="0" alt="" style="border:none !important; margin:0px !important;"/>. To understand the roots of user
#@   stories in XP consider the <a href = "http://www.amazon.com/gp/product/0321278658?ie=UTF8&amp;tag=martinfowlerc-20&amp;linkCode=as2&amp;camp=1789&amp;creative=9325&amp;creativeASIN=0321278658">white
#@   book</a><img src="http://www.assoc-amazon.com/e/ir?t=martinfowlerc-20&amp;l=as2&amp;o=1&amp;a=0321601912" width="1" height="1" border="0" alt="" style="border:none !important; margin:0px !important;"/>, or the <a href = '/books/pxp.html'>tasteful green
#@   book</a>. In an earlier bliki entry I discuss why <a href = 'UseCasesAndStories.html'>UseCasesAndStories</a> are different.</p>
Mike Cohn wrote what is @<href>{http://www.amazon.com/gp/product/0321205685, now the standard book on writing user stories}. To understand the roots of user stories in XP consider the @<href>{http://www.amazon.com/gp/product/0321278658, white book}, or the @<href>{http://martinfowler.com/books/pxp.html, tasteful green book}. In an earlier bliki entry I discuss why @<href>{http://martinfowler.com/bliki/UseCasesAndStories.html, UseCasesAndStories} are different.
