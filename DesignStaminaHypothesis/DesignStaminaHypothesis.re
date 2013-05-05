#@ -*- mode: review; coding: utf-8 -*-
#@ DesignStaminaHypothesis
= DesignStaminaHypothesis

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
@<b>{Is it worth the effort to design software well?}

#@ <p>From time to time I have indirect conversations about whether
#@   good software design is a worthwhile activity. I say these
#@   conversations are indirect because I don't think I've ever come
#@   across someone saying that software design is pointless. Usually
#@   it's expressed in a form like "we really need to move fast to make
#@   our target next year so we are reducing &lt;some design activity&gt;".</p>
From time to time I have indirect conversations about whether good software design is a worthwhile activity. I say these conversations are indirect because I don't think I've ever come across someone saying that software design is pointless. Usually it's expressed in a form like "we really need to move fast to make our target next year so we are reducing <some design activity>".

#@ <p>In there is a notion that design is something you can trade off
#@   for greater speed. Indeed I've come across the impression a couple
#@   of times that design effort is tolerated to keep the programmers
#@   happy even though it reduces speed.</p>
In there is a notion that design is something you can trade off for greater speed. Indeed I've come across the impression a couple of times that design effort is tolerated to keep the programmers happy even though it reduces speed.

#@ <p>If it were the case that putting effort into design reduced the
#@   effectiveness of programming I would be against it. In fact I think
#@   most software developers would be against design if that were the
#@   case. Developers may disagree on what exactly is good design, but
#@   they are in favor of whatever brand of good design they favor
#@   because they believe it improves productivity. (And by "design" here
#@   I mean either up-front design or agile's approach, ie <a href = 'http://martinfowler.com/articles/designDead.html'>planned or
#@   evolutionary design</a>.)</p>
If it were the case that putting effort into design reduced the effectiveness of programming I would be against it. In fact I think most software developers would be against design if that were the case. Developers may disagree on what exactly is good design, but they are in favor of whatever brand of good design they favor because they believe it improves productivity. (And by "design" here I mean either up-front design or agile's approach, ie @<href>{http://martinfowler.com/articles/designDead.html, planned or evolutionary design}.)

#@ <p>Design activities certainly do take up time and effort, but they
#@   payoff because they make it easier to evolve the software into the
#@   future. You can save short-term time by neglecting design, but this
#@   accumulates <a href = 'TechnicalDebt.html'>TechnicalDebt</a> which will slow your
#@   productivity later. Putting effort into to the design of your
#@   software improves the stamina of your project, allowing you to go
#@   faster for longer.</p>
Design activities certainly do take up time and effort, but they payoff because they make it easier to evolve the software into the future. You can save short-term time by neglecting design, but this accumulates @<href>{http://martinfowler.com/bliki/TechnicalDebt.html, TechnicalDebt} which will slow your productivity later. Putting effort into to the design of your software improves the stamina of your project, allowing you to go faster for longer.

#@ <p>One way of visualizing this is the following
#@   pseudo-graph.</p>
One way of visualizing this is the following pseudo-graph.

#@ <img src = 'images/designStaminaGraph.gif'></img>
//indepimage[designStaminaGraph]

#@ <p>The pseudo-graph plots delivered functionality (cumulative) versus
#@ time for two imaginary stereotypical projects: one with good design
#@ and one with no design. The project that does no design expends no
#@ effort on design activities, whether they be up front design or agile
#@ techniques. Because there's no effort spent on these activities this
#@ project produces function faster initially.</p>
The pseudo-graph plots delivered functionality (cumulative) versus time for two imaginary stereotypical projects: one with good design and one with no design. The project that does no design expends no effort on design activities, whether they be up front design or agile techniques. Because there's no effort spent on these activities this project produces function faster initially.

#@ <p>The problem with no-design, is that by not putting effort into
#@ the design, the code base deteriorates and becomes harder to modify,
#@ which lowers the productivity, which is the gradient of the line. Good
#@ design keeps its productivity more constant so at some point (the
#@ design payoff line) it overtakes the cumulative functionality of  the
#@ no-design project and will continue to do better.</p>
The problem with no-design, is that by not putting effort into the design, the code base deteriorates and becomes harder to modify, which lowers the productivity, which is the gradient of the line. Good design keeps its productivity more constant so at some point (the design payoff line) it overtakes the cumulative functionality of the no-design project and will continue to do better.

#@ <p>I call this a hypothesis because it is a conjecture, there is no
#@   objective proof that this phenomenon actually occurs. In scientific
#@   terms it's not a very good hypothesis because it's hard to test. We
#@   <a href = 'CannotMeasureProductivity.html'>CannotMeasureProductivity</a> nor can we measure design quality.</p>
I call this a hypothesis because it is a conjecture, there is no objective proof that this phenomenon actually occurs. In scientific terms it's not a very good hypothesis because it's hard to test. We @<href>{http://martinfowler.com/bliki/CannotMeasureProductivity.html, CannotMeasureProductivity} nor can we measure design quality.

#@ <p>But despite it being only a hypothesis, it's also an axiom for
#@   many people, including  myself. We may not have objective proof that
#@   this effect occurs but many of us feel that this explains what we see
#@   we see qualitatively in the field. It's an axiom for me as it's the
#@   assumption  that underpins my entire career as a writer about
#@   software design. If design doesn't actually improve productivity in
#@   some way, most of my writings are worthless.</p>
But despite it being only a hypothesis, it's also an axiom for many people, including myself. We may not have objective proof that this effect occurs but many of us feel that this explains what we see we see qualitatively in the field. It's an axiom for me as it's the assumption that underpins my entire career as a writer about software design. If design doesn't actually improve productivity in some way, most of my writings are worthless.

#@ <p>I'm sure it sounds strange to many people to treat a hypothesis
#@   as an axiom, but it's a common thing to do. I look at it that I use
#@   my judgment to assess that the hypothesis is true, but can do so
#@   without ignoring the objective weakness of the hypothesis. I'd love to find a
#@   way to to prove it and almost as much to refute it.</p>
I'm sure it sounds strange to many people to treat a hypothesis as an axiom, but it's a common thing to do. I look at it that I use my judgment to assess that the hypothesis is true, but can do so without ignoring the objective weakness of the hypothesis. I'd love to find a way to to prove it and almost as much to refute it.

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
