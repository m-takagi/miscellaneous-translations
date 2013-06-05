#@ \chapterwithauthor{Leslie Hawthorn}{You’ll Eventually Know Everything They’ve Forgotten}
= You’ll Eventually Know Everything They’ve Forgotten

@<href>{https://github.com/Open-Advice/Open-Advice/blob/master/mentoringrecruiting/LeslieHawthorn.tex, The original text} (licenced under CC-BY-SA)

//flushright{
Leslie Hawthorn
//}

#@ \authorbio{An internationally known community manager, speaker and author, Leslie
#@ Hawthorn has over 10 years experience in high tech project management, marketing
#@ and public relations. Recently she joined AppFog as their Community
#@ Manager, where she is responsible for developer engagement. Prior to AppFog, she
#@ served as Outreach Manager at Oregon State University’s Open Source Lab and as a
#@ Program Manager for Google’s Open Source Team, where she managed the Google
#@ Summer of Code Program, created the contest now known as Google Code-in and
#@ launched the company’s Open Source Developer Blog.}
//lead{
世界的に知られたコミュニティマネージャーであり、講演や著作もよく知られているLeslie Hawthornは、
プロジェクト管理やマーケティングそして広報などで10年以上の経験を持つ。
最近ではAppFogにコミュニティマネージャーとして合流し、開発者の雇用にも関わっている。
AppFogに合流する前は、オレゴン州立大学のオープンソース研究所で支援マネージャーとして働いたり
Googleのオープンソースチームでプログラムマネージャーとして働いたりしていた。
GoogleではGoogle Summer of Codeプログラムを担当した。これは今のGoogle Code-inだ。
また、同社のOpen Source Developer Blogの立ち上げにも関わっている。
//}

#@ \begin{quote}
#@ ``The most important documentation for initial users is the basics: how to
#@ quickly set up the software, an overview of how it works, perhaps some guides to
#@ doing common tasks. Yet these are exactly the things the writers of the
#@ documentation know all too well -- so well that it can be difficult for them to see
#@ things from the reader's point of view, and to laboriously spell out the steps
#@ that (to the writers) seem so obvious as to be unworthy of mention.'' -- Karl
#@ Fogel, Producing Open Source Software
#@ \end{quote}
//quote{
はじめて使用するユーザーにとって必要なドキュメントは、基本をまとめたものです。
ソフトウェアを手っ取り早くセットアップする方法や動作の概要、そして一般的な作業をするための手引きなどが必要でしょう。
しかし、これらの内容はまさに、ドキュメントの書き手があまりにもよく知りすぎていることです。
そのためかえって、物事を読者の視点から眺めたり、また、(ドキュメントの書き手にとっては)言及に値しないほど明白な手順を、骨を折って詳細に説明するのが困難になる可能性があります。

-- Karl Fogel, @<href>{http://producingoss.com/ja/getting-started.html#documentation, オープンソースソフトウェアの育て方}
//}

#@ When you are first starting work on a FOSS project, the learning curve is steep
#@ and the path daunting. You may find yourself subscribed to mailing lists or in
#@ chat rooms with all kinds of ``famous'' people, like the creator of your
#@ favorite programming language or the maintainer of your favorite package,
#@ wondering how you are ever going to be skilled enough to contribute effectively.
#@ What you may not realize is how much these wise folk have forgotten along their
#@ path to success.
When you are first starting work on a FOSS project, the learning curve is steep
and the path daunting. You may find yourself subscribed to mailing lists or in
chat rooms with all kinds of "famous" people, like the creator of your
favorite programming language or the maintainer of your favorite package,
wondering how you are ever going to be skilled enough to contribute effectively.
What you may not realize is how much these wise folk have forgotten along their
path to success.

#@ To use a simple simile, the process of learning how to use and develop for any
#@ open source project is much like learning to ride a bicycle. For those who are
#@ experienced cyclists, ``it’s as easy as riding a bicycle.'' You have probably
#@ ridden a bike a few times and understand its architecture: saddle, wheels,
#@ brakes, pedals and handlebars. Yet you climb aboard, head out on your ride and
#@ suddenly discover that riding is not as simplistic as you had thought: at what
#@ height should your saddle sit? What gear should you be in when climbing a hill?
#@ When descending one? And do you really need that helmet anyway? (Hint: Yes, you
#@ do.) 
To use a simple simile, the process of learning how to use and develop for any
open source project is much like learning to ride a bicycle. For those who are
experienced cyclists, "it’s as easy as riding a bicycle." You have probably
ridden a bike a few times and understand its architecture: saddle, wheels,
brakes, pedals and handlebars. Yet you climb aboard, head out on your ride and
suddenly discover that riding is not as simplistic as you had thought: at what
height should your saddle sit? What gear should you be in when climbing a hill?
When descending one? And do you really need that helmet anyway? (Hint: Yes, you
do.) 

#@ When you first start off cycling, you will not even know what questions to ask
#@ and you will only find out by having sore knees, aching lungs and a twinge in your back. Even then, your questions will not always yield the answers you need;
#@ someone might know to tell you to lower your saddle when you tell them your
#@ knees hurt, but they might also just assume that you are new to this whole thing
#@ and eventually you will just figure it out on your own. They have forgotten
#@ fighting with gear changes, figuring out that they had the wrong lights and
#@ reflectors, and which hand signal indicates a left turn because they have been
#@ riding for so long that all these matters are simply second nature to them.
When you first start off cycling, you will not even know what questions to ask
and you will only find out by having sore knees, aching lungs and a twinge in your back. Even then, your questions will not always yield the answers you need;
someone might know to tell you to lower your saddle when you tell them your
knees hurt, but they might also just assume that you are new to this whole thing
and eventually you will just figure it out on your own. They have forgotten
fighting with gear changes, figuring out that they had the wrong lights and
reflectors, and which hand signal indicates a left turn because they have been
riding for so long that all these matters are simply second nature to them.

#@ The same scenario holds true when getting started in FOSS. As you are building a
#@ package for the first time, you will inevitably run into some obscure error
#@ message or other kind of fail. And when you ask for help, some friendly soul
#@ will no doubt tell you that ``it’s easy, just do foo, bar and baz.'' Except for
#@ you, it is not easy, there may be no documentation for foo, bar is not doing
#@ what it is supposed to be doing and what is this baz thing anyway with its eight
#@ disambiguation entries on Wikipedia? You obviously do not want to be a pest, but
#@ you will need help to actually get something done. Perhaps you keep retrying the
#@ same steps and keep failing, getting more and more frustrated. Maybe
#@ you wander off, get a coffee and figure you will come back to the problem later.
#@ What none of us in the FOSS world want to happen is what happens to many: that
#@ cup of coffee is infinitely better than feeling ignorant and intimidated, so you
#@ do not try your hand at FOSS any further.
The same scenario holds true when getting started in FOSS. As you are building a
package for the first time, you will inevitably run into some obscure error
message or other kind of fail. And when you ask for help, some friendly soul
will no doubt tell you that "it’s easy, just do foo, bar and baz." Except for
you, it is not easy, there may be no documentation for foo, bar is not doing
what it is supposed to be doing and what is this baz thing anyway with its eight
disambiguation entries on Wikipedia? You obviously do not want to be a pest, but
you will need help to actually get something done. Perhaps you keep retrying the
same steps and keep failing, getting more and more frustrated. Maybe
you wander off, get a coffee and figure you will come back to the problem later.
What none of us in the FOSS world want to happen is what happens to many: that
cup of coffee is infinitely better than feeling ignorant and intimidated, so you
do not try your hand at FOSS any further.

#@ Realize now that you will eventually know those things that the experts around
#@ you have forgotten or do not articulate because these steps are obvious to them.
#@ Every person more knowledgeable than you went through the same wanderings you
#@ are right now when learning how to do the things you are trying to do. Here are
#@ a few tips to make your travels easier:
Realize now that you will eventually know those things that the experts around
you have forgotten or do not articulate because these steps are obvious to them.
Every person more knowledgeable than you went through the same wanderings you
are right now when learning how to do the things you are trying to do. Here are
a few tips to make your travels easier:

#@ \paragraph*{Don’t wait too long to ask for help} No one wants to be a pest and
#@ no one enjoys looking clueless. That being said, if you are unable to fix your
#@ problem after trying to do so for 15 minutes, it is time to ask for help. Make
#@ sure you check the project’s website for documentation so you use the right IRC
#@ channel, forum or mailing list for help. Many projects have online communication
#@ channels specifically for beginners, so keep an eye out for words like
#@ \textit{mentor}, \textit{newbie}, and \textit{getting started}.
\paragraph*{Don’t wait too long to ask for help} No one wants to be a pest and
no one enjoys looking clueless. That being said, if you are unable to fix your
problem after trying to do so for 15 minutes, it is time to ask for help. Make
sure you check the project’s website for documentation so you use the right IRC
channel, forum or mailing list for help. Many projects have online communication
channels specifically for beginners, so keep an eye out for words like
\textit{mentor}, \textit{newbie}, and \textit{getting started}.

#@ \paragraph*{Talk about your (thought) process} It is not just a matter of asking
#@ questions, it is knowing the right questions to ask. When getting started, you
#@ will not necessarily know what those questions are, so when asking for help, be
#@ detailed about what you are trying to accomplish, the steps you have taken, and
#@ the problem you have encountered. Let your would-be mentors in the project IRC
#@ channel or on the mailing list know that you have read the manual by including
#@ links to the documentation you have read on the topic. If you have not found any
#@ documentation, a polite mention of the fact is also helpful.
\paragraph*{Talk about your (thought) process} It is not just a matter of asking
questions, it is knowing the right questions to ask. When getting started, you
will not necessarily know what those questions are, so when asking for help, be
detailed about what you are trying to accomplish, the steps you have taken, and
the problem you have encountered. Let your would-be mentors in the project IRC
channel or on the mailing list know that you have read the manual by including
links to the documentation you have read on the topic. If you have not found any
documentation, a polite mention of the fact is also helpful.

#@ \paragraph*{Know your own value} As a new contributor to a project, you are an
#@ invaluable asset not for your knowledge, but for your ignorance. When first
#@ starting work in FOSS, nothing seems (to you) so obvious as to be unworthy of
#@ mention. Take notes on the problems you have encountered and how they were
#@ fixed, then use those notes to update the project documentation or work with the
#@ community to prepare screen casts or other training materials for particularly
#@ tough problems. When you encounter something truly frustrating, realize you are
#@ in the spectacular position of helping make sure the next person who comes along
#@ does not encounter the same difficulties.
\paragraph*{Know your own value} As a new contributor to a project, you are an
invaluable asset not for your knowledge, but for your ignorance. When first
starting work in FOSS, nothing seems (to you) so obvious as to be unworthy of
mention. Take notes on the problems you have encountered and how they were
fixed, then use those notes to update the project documentation or work with the
community to prepare screen casts or other training materials for particularly
tough problems. When you encounter something truly frustrating, realize you are
in the spectacular position of helping make sure the next person who comes along
does not encounter the same difficulties.
