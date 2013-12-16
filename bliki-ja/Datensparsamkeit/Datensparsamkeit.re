#@# -*- mode: review; coding: utf-8 -*-
#@# Datensparsamkeit
= Datensparsamkeit

#@# http://martinfowler.com/bliki/Datensparsamkeit.html

//lead{
Martin Fowler's blikiの"@<href>{http://martinfowler.com/bliki/Datensparsamkeit.html, Datensparsamkeit}"の翻訳。
//}

#@# 12 December 2013
2013/12/12

//flushright{
tags: @<href>{http://martinfowler.com/tags/database.html, database} @<href>{http://martinfowler.com/tags/web%20development.html, web development} @<href>{http://martinfowler.com/tags/internet%20culture.html, internet culture} @<href>{http://martinfowler.com/tags/legal.html, legal} @<href>{http://martinfowler.com/tags/data%20analytics.html, data analytics}
//}

#@# Datensparsamkeit is a German word that's difficult to translate
#@#   properly into English. It's an attitude to how we capture and store
#@#   data, saying that we should only handle data that we really
#@#   need.
Datensparsamkeit is a German word that's difficult to translate properly into English. It's an attitude to how we capture and store data, saying that we should only handle data that we really need.

//indepimage[sketch]

#@# These days there's a lot of hype around the idea of Big Data -
#@#   and with it the notion that we should capture and store every bit of
#@#   data we can get our hands on. We might not have an immediate use for
#@#   the contacts our users store in their address books, but we'll ask
#@#   for it anyway in case it comes in useful later. We'll record every
#@#   click on our website and squirrel it away in case we want to trawl
#@#   it later. We set up our smartphone app to ask for location information so
#@#   if we come up with some way to use that data later, we can. After
#@#   all, storage is cheap - so why not?
These days there's a lot of hype around the idea of Big Data - and with it the notion that we should capture and store every bit of data we can get our hands on. We might not have an immediate use for the contacts our users store in their address books, but we'll ask for it anyway in case it comes in useful later. We'll record every click on our website and squirrel it away in case we want to trawl it later. We set up our smartphone app to ask for location information so if we come up with some way to use that data later, we can. After all, storage is cheap - so why not?

#@# The problem with the "capture-it-all" approach is that it raises
#@#   serious questions of privacy. Even if we trust ourselves to not
#@#   abuse the data we collect, each data store represents a target for
#@#   criminals or government surveillance agencies. This issue is
#@#   particularly fraught in Germany which has seen successive regimes
#@#   where governments have carried out extensive surveillance of their
#@#   citizens in order to control them. Germany consequently has strong
#@#   data privacy laws.
The problem with the "capture-it-all" approach is that it raises serious questions of privacy. Even if we trust ourselves to not abuse the data we collect, each data store represents a target for criminals or government surveillance agencies. This issue is particularly fraught in Germany which has seen successive regimes where governments have carried out extensive surveillance of their citizens in order to control them. Germany consequently has strong data privacy laws.

#@# Datensparsamkeit @<fn>{fn1} is a concept from these privacy laws that is an
#@#   opposite philosophy to "capture-all-the-things". A translation isn't
#@#   straightforward (which is why I've retained the German word) but
#@#   loosely you might translate it as something like "data austerity",
#@#   "data minimization", "data parsimony", or "data frugality". It means
#@#   that you should always ask yourself why you are capturing or storing
#@#   data, and look to handle only the minimum amount of data you need
#@#   for your purpose.
Datensparsamkeit @<fn>{fn1} is a concept from these privacy laws that is an opposite philosophy to "capture-all-the-things". A translation isn't straightforward (which is why I've retained the German word) but loosely you might translate it as something like "data austerity", "data minimization", "data parsimony", or "data frugality". It means that you should always ask yourself why you are capturing or storing data, and look to handle only the minimum amount of data you need for your purpose.

#@# An example of this is tracking users on your web site to
#@#   determine how many unique visitors you have. If the same person
#@#   accesses several pages within a few hours, you want to count that as
#@#   one visit. If they visit several times a month, you still only want
#@#   to count them as a single visitor. One way to do this is to log
#@#   IP addresses, you count each IP address as a single person @<fn>{fn2}. But an IP address is very revealing, and could be
#@#   used for much more than counting vistors. Datensparsamkeit suggests
#@#   that you shouldn't store the IP address directly, perhaps instead
#@#   you should hash it and only store the hash.
An example of this is tracking users on your web site to determine how many unique visitors you have. If the same person accesses several pages within a few hours, you want to count that as one visit. If they visit several times a month, you still only want to count them as a single visitor. One way to do this is to log IP addresses, you count each IP address as a single person @<fn>{fn2}. But an IP address is very revealing, and could be used for much more than counting vistors. Datensparsamkeit suggests that you shouldn't store the IP address directly, perhaps instead you should hash it and only store the hash.

#@# A similar example involving IP addresses is using them to infer
#@#   demographic information such as region and country. You can get most
#@#   of this information and practice datensparsamkeit by just logging the first
#@#   three octets of the IP address.
A similar example involving IP addresses is using them to infer demographic information such as region and country. You can get most of this information and practice datensparsamkeit by just logging the first three octets of the IP address.

#@# Datensparsamkeit isn't just about bad people stealing data, it's
#@#   also about your relationship with the primary company themselves.
#@#   The default attitude at the moment is that any data you generate is
#@#   not just freely usable by the capturer but furthermore becomes their
#@#   valuable commercial property.  Privacy advocates,
#@#   including me, think this assumption needs to be changed. Companies
#@#   should only capture what they need and the burden of demonstrating
#@#   need should fall on them. In addition, of course, they must be
#@#   completely transparant about what they capture, what they store, and
#@#   who they share their data with. Any breaches of data security must
#@#   be immediately publicized (instead of covered up, which is the
#@#   current default).
Datensparsamkeit isn't just about bad people stealing data, it's also about your relationship with the primary company themselves. The default attitude at the moment is that any data you generate is not just freely usable by the capturer but furthermore becomes their valuable commercial property.  Privacy advocates, including me, think this assumption needs to be changed. Companies should only capture what they need and the burden of demonstrating need should fall on them. In addition, of course, they must be completely transparant about what they capture, what they store, and who they share their data with. Any breaches of data security must be immediately publicized (instead of covered up, which is the current default).

#@# Even if you don't share my views on personal control of our own
#@#   data, the risks of security breaches mean that datensparsamkeit is a
#@#   wise course of action. If you hold data that you don't need, and
#@#   someone steals it and causes damage, shouldn't you be liable for
#@#   that damage? Even if there's no legal liability the publicity will
#@#   have serious consequences - and thus there is risk for anyone who
#@#   doesn't practice datensparsamkeit.
Even if you don't share my views on personal control of our own data, the risks of security breaches mean that datensparsamkeit is a wise course of action. If you hold data that you don't need, and someone steals it and causes damage, shouldn't you be liable for that damage? Even if there's no legal liability the publicity will have serious consequences - and thus there is risk for anyone who doesn't practice datensparsamkeit.

== Acknowledgements

#@# <a href = 'http://erik.doernenburg.com/'>Erik D&#xF6;rnenburg</a>
#@#     introduced me to Datensparsamkeit. The meme "&#x2026; all the things"
#@#     seems to have been around forever (at least a decade) so I'm glad
#@#     Korny Sietsma taught me that <a href = 'http://hyperboleandahalf.blogspot.com/2010/06/this-is-why-ill-never-be-adult.html'>it started in 2010</a>.
@<href>{http://erik.doernenburg.com/, Erik Dörnenburg} introduced me to Datensparsamkeit. The meme "… all the things" seems to have been around forever (at least a decade) so I'm glad Korny Sietsma taught me that @<href>{http://hyperboleandahalf.blogspot.com/2010/06/this-is-why-ill-never-be-adult.html, it started in 2010}.

//footnote[fn1][Here's some @<href>{http://www.forvo.com/word/datensparsamkeit/, help on pronunciation}]
//footnote[fn2][I realize that with Network Address Translation, things are rather more involved than this, but I wanted a simple example.]



