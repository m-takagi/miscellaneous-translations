#@ \chapterwithauthor{Rich Bowen}{Good Manners Matter}
= Good Manners Matter

@<href>{https://github.com/Open-Advice/Open-Advice/blob/master/documentationsupport/RichBowen.tex, The original text} (licenced under CC-BY-SA)

//flushright{
Rich Bowen
//}

#@ \authorbio{Rich Bowen has been working on Free/Open Source Software for about 15 years.
#@ Most of this time has been spent on the Apache HTTP Server, but he has also
#@ worked on Perl, PHP, and a variety of web applications. He is the author of
#@ Apache Cookbook, The Definitive Guide to Apache mod\_rewrite, and a variety of
#@ other books, and makes frequent appearances at various technology conferences.}
//lead{
Rich Bowenのフリーソフトウェア／オープンソースソフトウェア界での活動歴は15年になる。
その大半をApache HTTP Serverに費やしたが、それ以外にもPerlやPHP、そしてさまざまなWebアプリケーションにかかわっている。
『Apache Cookbook』や『The Definitive Guide to Apache mod_rewrite』など多数の著作があり、
技術カンファレンスにもよく登壇している。
//}

#@ \noindent{}I started working on the Apache HTTP Server documentation project in September
#@ of 2000. At least, that is when I made my first commit to the docs. Prior to
#@ that, I had submitted a few patches via email, and someone else had committed
#@ them.
Apache HTTP Serverのドキュメンテーションプロジェクトに参加したのは、2000年9月のことだった。
参加したっていうか、最初のコミットがそのときだったってことだね。
それより前にも、パッチをメールで送っていたこともあった。当時は、誰か他の人がそれをコミットしてくれていたんだ。

#@ Since that time, I have made a little over a thousand changes to the Apache HTTP
#@ Server docs, along with just a handful of changes to the server code itself.
最初のコミット以来、Apache HTTP Serverのドキュメントへのコミットの数は1000を少し上回るほどになった。
それと同時に、ドキュメントではなくサーバー本体にも少しだけコミットしている。

#@ People get involved in Free/Open Source Software for a lot of different reasons.
#@ Some are trying to make a name for themselves. Most are trying to ``scratch an
#@ itch'', as the saying goes -- trying to get the software to do something that it
#@ does not currently do, or create a new piece of software to fill a need that
#@ they have.
フリーソフトウェア／オープンソースソフトウェアに関わっている人たちの動機は人それぞれだ。
中には、有名になりたいがために参加しているって人もいるだろう。
ほとんどの人は、「痒いところを掻きたい」—つまり、うまく動かないソフトウェアを手直ししたいとか、
何かの場面で必要になる新しいソフトウェアを書きたいという理由で参加している。

#@ I got involved in software documentation because I had been roped into helping
#@ write a book, and the existing documentation was pretty awful. So, in order to
#@ make the book coherent, I had to talk with various people on the project to help
#@ make sense of the documentation. In the process of writing the book, I made the
#@ documentation better, purely to make my work easier.
僕がドキュメンテーションに関わるようになったのは、書籍の執筆を手伝うことになったからだ。
その当時のドキュメンテーションといえば、ひどい代物だった。
一貫性のあるわかりやすい書籍を作るためには、いろんな人たちと話す必要があった。
ドキュメンテーションをきちんとわかりやすくしてもらうためだ。
書籍の執筆が進むにつれて、ドキュメンテーションもだんだんいい感じになってきた。
別にそれが狙いだったわけじゃなくて、単に執筆作業を進めやすくした副作用なんだけどね。

#@ Around that same time, Larry Wall, the creator of the Perl programming language,
#@ was promoting the idea that the three primary virtues of a programmer were
#@ laziness, impatience and hubris. Larry was making very valid points, and Larry
#@ has a sense of humor. A significant portion of the programmer community,
#@ however, take his words as license to be jerks.
ちょうどその頃、Perl言語の作者であるLarry Wallが「プログラマーの三大美徳」を提唱していた。
怠慢（laziness）、短気（impatience）、そして傲慢（hubris）だ。
彼はとてもいいところを突いていたし、ユーモアのセンスもあった。
でも、当時のプログラマーの多くは、それを間抜けな人たちのいいわけだと捕らえていた。

#@ What I have learned over my years in Open Source documentation is that the three
#@ primary virtues of a documentation specialist, and, more generally, of customer
#@ support, are laziness, patience, and humility. And that the over-arching virtue
#@ that ties these all together is respect.
オープンソースの世界でドキュメンテーションに関わっていて学んだことがある。
ドキュメントを書く人（あるいはもっと一般化して、顧客サポートに関わる人）
の三大美徳は怠慢（laziness）、辛抱（patience）、そして謙遜（humility）だということだ。
これらすべてを兼ね備えている人が賞賛される。

#@ \section*{Laziness}
== 怠慢

#@ We write documentation so that we do not have to answer the same questions every
#@ day for the rest of our lives. If the documentation is inadequate, people will
#@ have difficulty using the software. While this may be a recipe for a lucrative
#@ consulting business, it is also a recipe for a short-lived software project, as
#@ people will give up in frustration and move on to something that they do not
#@ have to spend hours figuring out.
僕らがなぜドキュメントを書くのかというと、死ぬまでずっと毎日のように同じ質問に答え続けるのがいやだからだ。
ドキュメントがそろっていなければ、そのソフトウェアが使いづらくなってしまう。
コンサルの人たちにとってはそこが稼ぎどころなんだろうが、
そんなソフトウェアは長持ちしない。
使ってみようとしてイライラさせられた人は、無駄な時間を費やさずに済むような別のソフトに移行することだろう。

#@ Thus, laziness is the first virtue of a documentation writer.
というわけで、怠慢こそがドキュメント作者の最初の美徳となる。

#@ When a customer asks a question, we should answer that question thoroughly.
#@ Exhaustively, even. We should then record that answer for posterity. We should
#@ illuminate it with examples, and, if possible, diagrams and illustrations. We
#@ should make sure that the prose is clear, grammatically correct, and eloquent.
#@ We should then add this to the documentation in a place that is easy to find,
#@ and copiously cross referenced from everywhere that someone might look for it.
When a customer asks a question, we should answer that question thoroughly. Exhaustively, even. We should then record that answer for posterity. We should illuminate it with examples, and, if possible, diagrams and illustrations. We should make sure that the prose is clear, grammatically correct, and eloquent. We should then add this to the documentation in a place that is easy to find, and copiously cross referenced from everywhere that someone might look for it.

#@ The next time someone asks this same question, we can answer them with a pointer
#@ to the answer. And questions that they may have after reading what has already
#@ been written should be the source of enhancements and annotations to what has
#@ already been written.
The next time someone asks this same question, we can answer them with a pointer to the answer. And questions that they may have after reading what has already been written should be the source of enhancements and annotations to what has already been written.

#@ This is the true laziness. Laziness does not mean merely shirking work. It means
#@ doing the work so well that it never has to be done again.
This is the true laziness. Laziness does not mean merely shirking work. It means doing the work so well that it never has to be done again.

#@ \section*{Patience}
== 辛抱

#@ There is a tendency in the technical documentation world to be impatient and
#@ belligerent. The sources of this impatience are numerous. Some people feel that,
#@ since they had to work hard to figure this stuff out, you should too. Many of us
#@ in the technical world are self-taught, and we have very little patience for
#@ people who come after us and want a quick road to success.
There is a tendency in the technical documentation world to be impatient and belligerent. The sources of this impatience are numerous. Some people feel that, since they had to work hard to figure this stuff out, you should too. Many of us in the technical world are self-taught, and we have very little patience for people who come after us and want a quick road to success.

#@ I like to refer to this as the ``get off my lawn'' attitude. It is not very
#@ helpful.
I like to refer to this as the "get off my lawn" attitude. It is not very helpful.

#@ If you cannot be patient with the customer, then you should not be involved in
#@ customer support. If you find yourself getting angry when someone does not get
#@ it, you should perhaps let someone else take the question.
If you cannot be patient with the customer, then you should not be involved in customer support. If you find yourself getting angry when someone does not get it, you should perhaps let someone else take the question.

#@ Of course, that is very easy to say, and a lot harder to do. If you find
#@ yourself in the position of being an expert on a particular subject, people are
#@ inevitably going to come to you with their questions.
#@ You are obliged to be patient, but how do you go about achieving this? That
#@ comes with humility.
Of course, that is very easy to say, and a lot harder to do. If you find yourself in the position of being an expert on a particular subject, people are inevitably going to come to you with their questions. You are obliged to be patient, but how do you go about achieving this? That comes with humility.

#@ \section*{Humility}
== 謙遜

#@ I had been doing technical support, particularly on mailing lists, for about two
#@ years, when I first started attending technical conferences. Those first few
#@ years were a lot of fun. Idiots would come onto a mailing list, and ask a stupid
#@ question that a thousand other losers had asked before them. If they had taken
#@ even two minutes to just look, they would have found all the places the question
#@ had been answered before. But they were too lazy and dumb to do that.
I had been doing technical support, particularly on mailing lists, for about two years, when I first started attending technical conferences. Those first few years were a lot of fun. Idiots would come onto a mailing list, and ask a stupid question that a thousand other losers had asked before them. If they had taken even two minutes to just look, they would have found all the places the question had been answered before. But they were too lazy and dumb to do that.

#@ Then I attended a conference, and discovered a few things.
Then I attended a conference, and discovered a few things.

#@ First, I discovered that the people asking these questions were people. They
#@ were not merely a block of monospaced black text on a white background. They
#@ were individuals. They had kids. They had hobbies. They knew so much more than I
#@ did about a whole range of things. I met brilliant people for whom
#@ technology was a tool to accomplish something non-technical. They wanted to
#@ share their recipes with other chefs. They wanted to help children in west
#@ Africa learn how to read. They were passionate about wine, and wanted to learn
#@ more. They were, in short, smarter than I am, and my arrogance was the only
#@ thing between them and further success.
First, I discovered that the people asking these questions were people. They were not merely a block of monospaced black text on a white background. They were individuals. They had kids. They had hobbies. They knew so much more than I did about a whole range of things. I met brilliant people for whom technology was a tool to accomplish something non-technical. They wanted to share their recipes with other chefs. They wanted to help children in west Africa learn how to read. They were passionate about wine, and wanted to learn more. They were, in short, smarter than I am, and my arrogance was the only thing between them and further success.

#@ When I returned from that first conference, I saw the users mailing list in an
#@ entirely different light. These were no longer idiots asking stupid questions.
#@ These were people who needed just a little bit of my help so that they could get
#@ a task done, but, for the most part, their passions were not technology.
#@ Technology was just a tool. So if they did not spend hours reading last year's
#@ mailing list archives, and chose instead to ask the question afresh, that was
#@ understandable.
When I returned from that first conference, I saw the users mailing list in an entirely different light. These were no longer idiots asking stupid questions. These were people who needed just a little bit of my help so that they could get a task done, but, for the most part, their passions were not technology. Technology was just a tool. So if they did not spend hours reading last year's mailing list archives, and chose instead to ask the question afresh, that was understandable.

#@ And, surely, if on any given day it is irritating to have to help them, the
#@ polite thing to do is to step back and let someone else handle the question,
#@ rather than telling them what an imbecile they are. And, too, to remember all of
#@ the times I have had to ask the stupid questions.
And, surely, if on any given day it is irritating to have to help them, the polite thing to do is to step back and let someone else handle the question, rather than telling them what an imbecile they are. And, too, to remember all of the times I have had to ask the stupid questions.

#@ \section*{Politeness and Respect}
== Politeness and Respect

#@ In the end, this all comes down to politeness and respect. Although I have
#@ talked mainly here about technical support, the documentation is simply a static
#@ form of technical support. It answers the questions that you expect people to
#@ have, and it provides these answers in a semi-permanent form for reference.
In the end, this all comes down to politeness and respect. Although I have talked mainly here about technical support, the documentation is simply a static form of technical support. It answers the questions that you expect people to have, and it provides these answers in a semi-permanent form for reference.

#@ When writing this documentation, you should attempt to strike the balance
#@ between assuming that your reader is an idiot, and assuming that they should
#@ already know everything. At the one end, you are telling them to make sure their
#@ computer is plugged in. At the other end you are using words like ``simply'' and
#@ ``just'' to make it sound like every task is trivial, leaving the reader feeling
#@ that they are probably not quite up to the task.
When writing this documentation, you should attempt to strike the balance between assuming that your reader is an idiot, and assuming that they should already know everything. At the one end, you are telling them to make sure their computer is plugged in. At the other end you are using words like "simply" and "just" to make it sound like every task is trivial, leaving the reader feeling that they are probably not quite up to the task.

#@ This involves having a great deal of respect and empathy for your reader, and
#@ endeavoring to remember what it was like to be in the beginner and intermediate
#@ stages of learning a new software package. Examples of bad documentation are so
#@ prevalent, however, that this should not be a terribly difficult memory to
#@ rekindle. Chances are that you have felt that way within the last week.
This involves having a great deal of respect and empathy for your reader, and endeavoring to remember what it was like to be in the beginner and intermediate stages of learning a new software package. Examples of bad documentation are so prevalent, however, that this should not be a terribly difficult memory to rekindle. Chances are that you have felt that way within the last week.

#@ \section*{I wish ...}
== I wish ...

#@ I wish that when I started working on Open Source documentation I had been less
#@ arrogant. I look back at some of the things that I have said on
#@ publicly-archived mailing lists, forever enshrined on the Internet, and am
#@ ashamed that I could be that rude.
I wish that when I started working on Open Source documentation I had been less arrogant. I look back at some of the things that I have said on publicly-archived mailing lists, forever enshrined on the Internet, and am ashamed that I could be that rude.

#@ The greatest human virtue is politeness. All other virtues flow from it. If you
#@ cannot be polite, then all of the things that you accomplish amount to little.
The greatest human virtue is politeness. All other virtues flow from it. If you cannot be polite, then all of the things that you accomplish amount to little.
