#@ -*- mode: review; coding: utf-8 -*-
#@ = TechnicalDebtQuadrant
= 技術的負債の象限
#@ http://martinfowler.com/bliki/TechnicalDebtQuadrant.html

//lead{
Martin Fowler's blikiの"@<href>{http://martinfowler.com/bliki/TechnicalDebtQuadrant.html, TechnicalDebtQuadrant}"の翻訳。
//}

#@ 14 October 2009
2009/10/14

//flushright{
tags: @<href>{http://martinfowler.com/tags/technical%20debt.html, technical debt}
//}

#@ There's been a few posts over the last couple of months about
#@   <a href = 'TechnicalDebt.html'>TechnicalDebt</a> that's raised the question of what kinds of design
#@   flaws should or shouldn't be classified as Technical Debt.
ここ数ヶ月の間に、
@<href>{http://martinfowler.com/bliki/TechnicalDebt.html, TechnicalDebt}
に関する投稿がいくつかあった。設計上の不備の中で、技術的負債と呼ぶべきものは何か？
逆に、そう呼ぶべきでないものは何か？といった疑問が挙げられていた。

#@ good example of this is Uncle Bob's post saying <a href = 'http://blog.objectmentor.com/articles/2009/09/22/a-mess-is-not-a-technical-debt'>a
#@  mess is not a debt</a>. His argument is that messy code, produced by
#@  people who are ignorant of good design practices, shouldn't be a
#@  debt. Technical Debt should be reserved for cases when people have
#@  made a considered decision to adopt a design strategy that isn't
#@  sustainable in the longer term, but yields a short term benefit,
#@  such as making a release. The point is that the debt yields value
#@  sooner, but needs to be paid off as soon as possible.
その一例が、アンクル・ボブの投稿「
@<href>{http://blog.objectmentor.com/articles/2009/09/22/a-mess-is-not-a-technical-debt, 汚いコードが負債というわけじゃない(a mess is not a debt)}」だ。
彼が言うには、良い設計方法を知らない人が書いた単に汚いだけのコードを負債と呼ぶべきではない。
技術的負債という言葉はもっと特別な場合を指すものだ。
検討の末に、長期的な持続性のない(けれども短期的には利益を生み出す。たとえばすぐにリリースできるなどの)
設計指針を敢えて選択するといった場合に使う。
要するに、負債を抱えれば早めに価値を生み出せるけれども、いずれ返済しないといけなくなるってことだ。

#@ To my mind, the question of whether a design flaw is or isn't
#@   debt is the wrong question. Technical Debt is a metaphor, so the
#@   real question is whether or not the debt metaphor is helpful about
#@   thinking about how to deal with design problems, and how to
#@   communicate that thinking. A particular benefit of the debt metaphor
#@   is that it's very handy for communicating to non-technical people.
私に言わせると、設計の不備が負債かそうじゃないかなんて考えることがそもそも間違ってる。
技術的負債っていうのは単なるたとえ話なんだから、
ここで問うべきなのは「これを負債にたとえた場合に、
設計上の問題を考える助けになるだろうか？そして他人と意見交換しやすくなるだろうか？」だ。
このたとえ話を使う大きなメリットは、技術者以外にも話が通じやすくなることだ。

#@ I think that the debt metaphor works well in both cases - the
#@   difference is in nature of the debt. A mess is a reckless debt which
#@   results in crippling interest payments or a long period of paying
#@   down the principal. We have a few projects where we've taken over a
#@   code base with a high debt and found the metaphor very useful in
#@   discussing with client management how to deal with it.
私見だが、設計上の不備も検討の末の判断も、どちらも負債のたとえがうまく当てはまると思う。
ただ、負債の性質が違うというだけのことだ。
きたないコードは無鉄砲な(reckless)負債だ。結果として利息の支払いが不能になったり、
いくら払っても元金が減らなかったりすることになる。
私たちのプロジェクトの中にも、コードベースが負債まみれになっているものがいくつかある。
その対策についてクライアントの担当者と話し合うときに、このたとえはとても便利だ。

#@ The debt metaphor reminds us about the choices we can make with
#@   design flaws. The prudent debt to reach a release may not be
#@   worth paying down if the interest payments are sufficiently small -
#@   such as if it were in a rarely touched part of the code-base.
負債のたとえを聞いて思い出すのが、設計上の不備に対してとれる選択肢のことだ。
用心深く考えた結果として負債を抱えたリリースをした場合、
支払う利息が無視できるほど小さいのならその返済をしなくてもかまわないだろう。
たとえば、めったに使われることのない部分などがこれにあたる。

#@ So the useful distinction isn't between debt or non-debt, but
#@   between prudent and reckless debt.
つまり、負債かそうじゃないかっていう区別はあまり意味がなくて、
考えた上での負債なのか考えが足りない負債なのかのほうが大事だ。

#@ There's another interesting distinction in the example I just
#@   outlined. Not just is there a difference between prudent and
#@   reckless debt, there's also a difference between deliberate and
#@   inadvertent debt. The prudent debt example is deliberate because the
#@   team knows they are taking on a debt, and thus puts some thought as
#@   to whether the payoff for an earlier release is greater than the
#@   costs of paying it off. A team ignorant of design practices is
#@   taking on its reckless debt without even realizing how much hock
#@   it's getting into.
いまあげた例について、もうひとつ別の切り口で区別することもできる。
無鉄砲な負債か用心深い負債化という違いのほかに、
意図的な負債なのか無意識のうちの負債なのかという区別があるのだ。
用心深い負債の例は、この区別では意図的な負債にあたる。
チームはそれが負債であることを認識しており、早めにリリースすることで
十分元が取れるという判断をしたわけだ。
設計について無関心なチームは、無意識のうちに負債を抱えてしまうことがある。
いったいどれだけのものを質入れしているのかを認識することもない。

#@ Reckless debt may not be inadvertent. A team may know about good
#@   design practices, even be capable of practicing them, but decide to
#@   go "quick and dirty" because they think they can't afford the time
#@   required to write clean code. I agree with Uncle Bob that this is
#@   usually a reckless debt, because people underestimate where the
#@   <a href = 'DesignPayoffLine.html'>DesignPayoffLine</a> is. The whole point of good design and
#@   clean code is to make you go faster - if it didn't people like Uncle
#@   Bob, Kent Beck, and Ward Cunningham wouldn't be spending time
#@   talking about it.
無鉄砲な負債は必ずしも無意識なものばかりというわけではない。
設計の重要性をきちんと理解していて実践できるチームでも、あえて
「間に合わせの適当な」設計を選ぶこともある。
クリーンなコードを書くだけの余裕がないと判断した場合などだ。
こんな場合はほとんど無鉄砲な負債になるっていうことについては、私もアンクル・ボブに同意する。
人はみな、@<href>{http://martinfowler.com/bliki/DesignPayoffLine.html, DesignPayoffLine}を過小評価するものだからだ。
よい設計とクリーンなコードの本質は、開発をすばやく進められるようにすることだ。
そうでもなければ、アンクル・ボブやケント・ベックそしてウォード・カニンガムといった面々が
わざわざ時間をかけて議論することもないだろう。

#@ Dividing debt into reckless/prudent and deliberate/inadvertent
#@   implies a quadrant, and I've only discussed three cells. So is there
#@   such a thing as prudent-inadvertent debt? Although such a thing
#@   sounds odd, I believe that it is - and it's not just common but
#@   inevitable for teams that are excellent designers.
「無鉄砲／用心深い」と「意図的な／無意識な」の二つの基準を使うと、
負債を象限に分類できることになる。ここまでで議論したのは、その中の三つの部分だ。
残りの一つ、つまり「用心深く、かつ無意識な」負債については何が言えるだろう？
ちょっと奇妙な感じもするが、私はこれもアリだと思う。
負筒にあり得る話だっていうだけじゃなく、よくできる設計者が集ったチームでは避けられない事態だ。

#@ I was chatting with a colleague recently about a project he'd
#@   just rolled off from. The project that delivered valuable software,
#@   the client was happy, and the code was clean. But he wasn't happy
#@   with the code. He felt the team had done a good job, but now they
#@   realize what the design ought to have been.
私の同僚が最近リリースしたプロジェクトのことについて、彼と話をした。
彼が言うには、そのプロジェクトは価値のあるソフトウェアを提供できたし、
顧客も喜んでくれたし、そしてコードもクリーンだった。
でも、なぜか彼はそのコードに満足していなかった。
自分のチームがいい仕事をしてくれたというのはわかっている。
でも、今になって「あそこはああしておくべきだった」というのがわかってきたというのだ。

#@ I hear this all the time from the best developers. The point is
#@   that while you're programming, you are learning. It's often the case
#@   that it can take a year of programming on a project before you
#@   understand what the best design approach should have been. Perhaps
#@   one should plan projects to spend a year building a system that you
#@   throw away and rebuild, as Fred Brooks suggested, but that's a
#@   tricky plan to sell. Instead what you find is that the moment you
#@   realize what the design should have been, you also realize that you
#@   have an inadvertent debt. This is the kind of debt that Ward talked
#@   about in <a href = 'http://www.c2.com/cgi/wiki?ComplexityAsDebt'>his
#@   video</a>.
デキる開発者たちは、いつもこんなことを言っている。
要するに、プログラミングをしているときには、同時に学んでもいるということだ。
何かのプロジェクトに参加して1年ほどプログラミングをし続けて、
ようやくその課題に対する最善のアプローチを理解したりするってことも珍しくない。
おそらく、最初からそれを見越した計画を立てるべきなんだろう。最初の1年で組み立てたシステムを
いったん破棄して最初から作り直すということだ。かつてフレッド・ブルックスもそんな提案をしていた。
でも、なかなかそんなことも言っていられない。
本来そうすべきだった設計を発見した時点で、あなたは無意識な負債を抱えたことを自覚することになる。
これはある意味、ウォードが
@<href>{http://www.c2.com/cgi/wiki?ComplexityAsDebt, ビデオ}で話している負債みたいなものだ。

#@ The decision of paying the interest versus paying down the
#@   principal still applies, so the metaphor is still helpful for this
#@   case. However a problem with using the debt metaphor for this is
#@   that I can't conceive of a parallel with taking on a
#@   prudent-inadvertent financial debt. As a result I would think it
#@   would be difficult to explain to managers why this debt appeared. My
#@   view is this kind of debt is inevitable and thus should be
#@   expected. Even the best teams will have debt to deal with as a
#@   project goes on - even more reason not to recklessly overload it
#@   with crummy code.
The decision of paying the interest versus paying down the principal still applies, so the metaphor is still helpful for this case. However a problem with using the debt metaphor for this is that I can't conceive of a parallel with taking on a prudent-inadvertent financial debt. As a result I would think it would be difficult to explain to managers why this debt appeared. My view is this kind of debt is inevitable and thus should be expected. Even the best teams will have debt to deal with as a project goes on - even more reason not to recklessly overload it with crummy code.

//indepimage[techDebtQuadrant]

 * Reckless(無鉄砲な) / Prudent(用心深い)
 * Deliberate(意図的な) / Inadvertent(無意識な)

 * reckless-deliberate 「設計する時間がないんだからしょうがない」
 * prudent-deliberate 「今すぐリリースしないといけない。リスクは承知の上だ」
 * reckless-inadvertent 「レイヤー化？なにそれ？」
 * prudent-inadvertent 「よし、これでオッケー！」