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
User Stories are chunks of desired behavior of a software system. They are widely used in agile software approaches to divide up a large amount of functionality into smaller pieces for planning purposes. You also hear the same concept referred to as a @<b>{feature}, but the term "story" or "user story" has become prevalent in agile circles these days.

#@ <p>Kent Beck first introduced the term as part of Extreme
#@   Programming to encourage a more informal and conversational style of
#@   requirements elicitation than long written specifications. The
#@   essence of a story can be written on a single note card (Kent and I
#@   prefer 3" by 5"). Stories are deliberately not fleshed out in detail
#@   until they are ready to be developed, you only need enough
#@   understanding to allow prioritization with other stories.</p>
Kent Beck first introduced the term as part of Extreme Programming to encourage a more informal and conversational style of requirements elicitation than long written specifications. The essence of a story can be written on a single note card (Kent and I prefer 3" by 5"). Stories are deliberately not fleshed out in detail until they are ready to be developed, you only need enough understanding to allow prioritization with other stories.

#@ <p>Bill Wake came up with the <a href = 'http://xp123.com/articles/invest-in-good-stories-and-smart-tasks/'>INVEST mnemonic</a> to describe the
#@   characteristics of good stories:</p>
Bill Wake came up with the @<href>{http://xp123.com/articles/invest-in-good-stories-and-smart-tasks/, INVEST mnemonic} to describe the characteristics of good stories:

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
 * @<b>{Independent}: the stories can be delivered in any order
 * @<b>{Negotiable}: the details of what's in the story are co-created by the programmers and customer during development.
 * @<b>{Valuable}: the functionality is seen as valuable by the customers or users of the software.
 * @<b>{Estimable}: the programmers can come up with a reasonable estimate for building the story.
 * @<b>{Small}: stories should be built in a small amount of time, usually a matter of person-days. Certainly you should be able to build several stories within one iteration.
 * @<b>{Testable}: you should be able to write tests to verify the software for this story works correctly.

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
