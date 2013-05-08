#@ -*- mode: review; coding: utf-8 -*-
#@ DesignStaminaHypothesis
= 設計＝スタミナ説

#@ http://martinfowler.com/bliki/DesignStaminaHypothesis.html

//lead{
Martin Fowler's blikiの"@<href>{http://martinfowler.com/bliki/DesignStaminaHypothesis.html, DesignStaminaHypothesis}"の翻訳。
//}

#@ 20 June 2007
2007/6/20

//flushright{
tags: @<href>{http://martinfowler.com/tags/productivity.html, productivity}
,@<href>{http://martinfowler.com/tags/technical%20debt.html, technical debt}
,@<href>{http://martinfowler.com/tags/process%20theory.html, process theory}
,@<href>{http://martinfowler.com/tags/evolutionary%20design.html, evolutionary design}
,@<href>{http://martinfowler.com/tags/clean%20code.html, clean code}
,@<href>{http://martinfowler.com/tags/software%20craftsmanship.html, software craftsmanship}
//}

#@ <p class = 'question'><b>Is it worth the effort to design software well?</b></p>
@<b>{ソフトウェアをきちんと設計するのは、その労力に見合うことなのか？}

#@ <p>From time to time I have indirect conversations about whether
#@   good software design is a worthwhile activity. I say these
#@   conversations are indirect because I don't think I've ever come
#@   across someone saying that software design is pointless. Usually
#@   it's expressed in a form like "we really need to move fast to make
#@   our target next year so we are reducing &lt;some design activity&gt;".</p>
「ソフトウェアをきちんと設計することって、そんなに大切なことなの？」という問題について、
遠回しなやりとりをすることが時々ある。あえて「遠回しなやりとり」と言ったのは、
はっきりと「ソフトウェアの設計なんて無意味だ」と言う人を見たことがないからだ。
そういう考えの人は、たいていこんな言い回しをする。
「立ち止まっている暇なんてない。とにかく前に進まないと来年の目標を達成できないんだ。
だから、≪設計に関する何かの作業≫は省略するよ」

#@ <p>In there is a notion that design is something you can trade off
#@   for greater speed. Indeed I've come across the impression a couple
#@   of times that design effort is tolerated to keep the programmers
#@   happy even though it reduces speed.</p>
そこにあるのは、設計と素早い開発の間には何らかのトレードオフがあるという思い込みだ。
実際、「設計に時間を掛けると開発の速度は落ちるけど、
プログラマーはそれを補って余りあるだけのメリットを得られる」的な物言いにも何度か遭遇したことがある。

#@ <p>If it were the case that putting effort into design reduced the
#@   effectiveness of programming I would be against it. In fact I think
#@   most software developers would be against design if that were the
#@   case. Developers may disagree on what exactly is good design, but
#@   they are in favor of whatever brand of good design they favor
#@   because they believe it improves productivity. (And by "design" here
#@   I mean either up-front design or agile's approach, ie <a href = 'http://martinfowler.com/articles/designDead.html'>planned or
#@   evolutionary design</a>.)</p>
もし設計に力を入れたせいでプログラミングの効率が落ちるなどと言うことがあり得るのなら、私はきっと設計なんかしないだろう。
大半の開発者もそれに同意してくれるはずだ。良い設計とはなんぞやと問われたらそれぞれ違う答えを返すだろうが、
みんなそれぞれなにがしかの「良い設計」を好んでいる。そうすれば生産性が向上すると信じているからだ
（ここでいう「設計」には、事前に行う設計も含むし、アジャイル開発の文脈での設計も含む。つまり、
@<href>{http://objectclub.jp/community/XP-jp/xp_relate/isdesigndead#n71, 計画的設計と進化的設計}だ）。

#@ <p>Design activities certainly do take up time and effort, but they
#@   payoff because they make it easier to evolve the software into the
#@   future. You can save short-term time by neglecting design, but this
#@   accumulates <a href = 'TechnicalDebt.html'>TechnicalDebt</a> which will slow your
#@   productivity later. Putting effort into to the design of your
#@   software improves the stamina of your project, allowing you to go
#@   faster for longer.</p>
設計に関する作業には時間も労力もかかる。それは間違いない。でも、それだけの価値はある。
将来そのソフトウェアを成長させるのが楽になるからだ。設計をサボったら、短期的には時間の節約になるだろう。
でも、そのぶんだけ@<href>{http://capsctrl.que.jp/kdmsnr/wiki/bliki/?TechnicalDebt, 技術的負債}はかさみ、後々の生産性を落としてしまう。
ソフトウェアの設計に力を入れると、あなたのプロジェクトのスタミナが向上するのだ。
成長する速度も上がり、長生きできるようになる。

#@ <p>One way of visualizing this is the following
#@   pseudo-graph.</p>
その様子を図示してみたのが、このグラフだ。

#@ <img src = 'images/designStaminaGraph.gif'></img>
//indepimage[designStaminaGraph]

#@ <p>The pseudo-graph plots delivered functionality (cumulative) versus
#@ time for two imaginary stereotypical projects: one with good design
#@ and one with no design. The project that does no design expends no
#@ effort on design activities, whether they be up front design or agile
#@ techniques. Because there's no effort spent on these activities this
#@ project produces function faster initially.</p>
この疑似グラフは、納品された機能（の累積）と時間との関係を、二種類のありがちなプロジェクトについてプロットしたものだ。
一方のプロジェクトはきちんと設計をしたもの、もう一方のプロジェクトは設計を軽視したものになる。
設計を軽視したほうのプロジェクトでは、設計に関する労力を一切費やしていない。計画的設計と進化的設計の両方の意味でだ。
そのため、開始当初はこちらのプロジェクトのほうが多くの機能を納品している。

#@ <p>The problem with no-design, is that by not putting effort into
#@ the design, the code base deteriorates and becomes harder to modify,
#@ which lowers the productivity, which is the gradient of the line. Good
#@ design keeps its productivity more constant so at some point (the
#@ design payoff line) it overtakes the cumulative functionality of  the
#@ no-design project and will continue to do better.</p>
設計を軽視したプロジェクトの問題は、設計を軽視したが故に、
コードベースがだんだん劣化して変更しづらくなるということだ。
その結果、生産性も下がる。というのが、グラフの勾配にあらわれている。
きちんと設計をすれば生産性もきちんと維持できるので、ある時点（設計償却線）
に達すると、設計を軽視したプロジェクトよりも累積の納品量が上回るようになる。
そしてその後は、ずっと上回ったままだ。

#@ <p>I call this a hypothesis because it is a conjecture, there is no
#@   objective proof that this phenomenon actually occurs. In scientific
#@   terms it's not a very good hypothesis because it's hard to test. We
#@   <a href = 'CannotMeasureProductivity.html'>CannotMeasureProductivity</a> nor can we measure design quality.</p>
これはあくまでも仮説に過ぎない。推測に基づくものだし、実際にそうなるという客観的な証拠もない。
科学的に言うと、厳密には仮説としてもあまりよろしくない。というのも、検証するのが難しいからだ。
@<href>{http://capsctrl.que.jp/kdmsnr/wiki/bliki/?CannotMeasureProductivity, 生産性は計測不能}
だし、設計の品質もまた計測不能だ。

#@ <p>But despite it being only a hypothesis, it's also an axiom for
#@   many people, including  myself. We may not have objective proof that
#@   this effect occurs but many of us feel that this explains what we see
#@   we see qualitatively in the field. It's an axiom for me as it's the
#@   assumption  that underpins my entire career as a writer about
#@   software design. If design doesn't actually improve productivity in
#@   some way, most of my writings are worthless.</p>
ただ、仮説に過ぎないとは言え、大半の人にとっては「そのとおり」と納得できるものだ。
もちろん私もそう思っている。客観的に証明することは不可能かもしれない。
でも、多くの人は、この仮説が現状をうまく表していると感じている。
ソフトウェアの設計に関する書籍を書き続けてきたこれまでの私の実績が、この仮説を実証しているのではないだろうか。
もし設計が生産性の改善に何も寄与しないのだとしたら、私の著書の大半はまったくの役立たずだと言うことになる。

#@ <p>I'm sure it sounds strange to many people to treat a hypothesis
#@   as an axiom, but it's a common thing to do. I look at it that I use
#@   my judgment to assess that the hypothesis is true, but can do so
#@   without ignoring the objective weakness of the hypothesis. I'd love to find a
#@   way to to prove it and almost as much to refute it.</p>
多くの人にとって、仮説を公理と見なすのは奇妙に思えることだろう。
でも、実際によくあることだ。
何かの仮説が真であるという判断を下すときに、客観的な観点でのその仮説の弱点を無視しているわけではない。
私は何かを証明するのも好きだけれども、それと同程度には何かを反証するのも好きだ。

#@ <p>The hypothesis has a corollary, which comes from the  the
#@   design payoff line. If the functionality for your
#@ initial release is below the design payoff line, then it
#@ <i>may</i> be worth trading off design quality for speed; but if it's
#@ above the line then the trade-off is illusory. When your delivery is
#@ above the design payoff line neglecting
#@ design always makes you ship later. In technical debt terms it's
#@ like taking out a loan but not using the principal for so long that by
#@ the time you use it you've paid out more in interest payments.</p>
The hypothesis has a corollary, which comes from the design payoff line. If the functionality for your initial release is below the design payoff line, then it @<i>{may} be worth trading off design quality for speed; but if it's above the line then the trade-off is illusory. When your delivery is above the design payoff line neglecting design always makes you ship later. In technical debt terms it's like taking out a loan but not using the principal for so long that by the time you use it you've paid out more in interest payments.

#@ <p>This raises the question of where that line is. Even with people
#@   who accept the design stamina hypothesis there is substantial, and important,
#@   differences over where the payoff line sits. I take the view that
#@   it's much lower than most people think: usually weeks not months. But again
#@   this can only be a judgment call.</p>
This raises the question of where that line is. Even with people who accept the design stamina hypothesis there is substantial, and important, differences over where the payoff line sits. I take the view that it's much lower than most people think: usually weeks not months. But again this can only be a judgment call.

#@ <p>This leads to a  consequence for  Technical Debt. Technical Debt
#@ is a fantastic analogy and I use it frequently. But the design payoff
#@ line reminds us that taking out a Technical Debt is only worth doing
#@ up to a certain point. Not just do we have to consider whether
#@ delivered value is greater than the interest payments, we also have to
#@ judge whether the delivery is above the payoff line in the first
#@ place. </p>
This leads to a consequence for Technical Debt. Technical Debt is a fantastic analogy and I use it frequently. But the design payoff line reminds us that taking out a Technical Debt is only worth doing up to a certain point. Not just do we have to consider whether delivered value is greater than the interest payments, we also have to judge whether the delivery is above the payoff line in the first place.
