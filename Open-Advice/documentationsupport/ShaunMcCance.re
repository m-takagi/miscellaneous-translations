#@ \chapterwithauthor{Shaun McCance}{Stop Worrying and Love the Crowd}
= Stop Worrying and Love the Crowd

@<href>{https://github.com/Open-Advice/Open-Advice/blob/master/documentationsupport/ShaunMcCance.tex, The original text} (licenced under CC-BY-SA)

//flushright{
Shaun McCance
//}

#@ \authorbio{Shaun McCance has been involved in GNOME documentation since 2003
#@ as a writer, community leader, and tool developer. He has spent
#@ most of that time wondering how to get more people to write better
#@ documentation, with some success along the way. He offers his
#@ experience in community documentation through his consulting
#@ company, Syllogist.}
//lead{
Shaun McCanceがGNOMEのドキュメンテーションに参加したのは2003年のこと。
それ以来彼は、ドキュメントを書くだけでなく、コミュニティのリーダーを務めたりツールを開発したりもしている。
多くの人たちがよりよいドキュメントを書けるようにするにはどうすればいいかを常に考えており、
いろんなことを試してそれなりに成功した。
彼は、コミュニティでのドキュメント作りの経験を元にしたコンサルティングをSyllogist社で行っている。
//}

#@ \noindent{}Something big happened as I was preparing to write this: GNOME 3 was released.
#@ This was the first major GNOME release in nine years. Everything was different,
#@ and all of the existing documentation had to be rewritten. At the same time, we
#@ were changing the way we write documentation. We had thrown away our old manuals
#@ and started fresh with dynamic, topic-oriented help using Mallard.
これを書こうとしているときに、ビッグニュースが飛び込んできた。GNOME 3がリリースされたんだ。
なんと9年ぶりのGNOMEのメジャーリリースだ。
何もかもが変わった。ドキュメントもぜんぶ書き直さなければいけなかった。
書き直すにあたって、ドキュメントの書き方をがらっと変えてみた。
いままでのマニュアルはぜんぶ捨ててしまい、動的なトピック指向のヘルプをMallardで書き始めたんだ。

#@ A few weeks before the release, a group of us got together to work on the
#@ documentation. We worked all day, planning, writing, and revising. We wrote
#@ hundreds of pages against a moving target of late-cycle software changes. We
#@ had people contributing remotely, submitting new pages and correcting existing
#@ content. It was the most productive I had ever seen our documentation team.
リリースを数週間後に控えて、僕たちは集まってドキュメンテーションの作業をしていた。
朝から晩まで、案を立てては実際に書いて、そして書き直してといった感じだった。
何百ページにもわたるドキュメントを書いた。書いている間にも、ソフトウェア自体がどんどん変わっていった。
リモート作業で参加してくれる人たちもいた。新しいページを投稿したり既存のドキュメントの間違いを訂正したりといった作業だ。
今までにないようなペースでドキュメントを仕上げていった。

#@ What did we finally get right? A lot of factors came together, and I could
#@ write an entire book about all the nuances of Open Source documentation.
#@ But the most important thing I did was get out of the way and let others
#@ do the work. I learned to delegate, and to delegate the right way.
で、うまくいったのかって？
まあいろいろあったさ。そのときの経験だけで、オープンソースのドキュメンテーションについて本を一冊書けるだろうね。
だけど、何よりも重要だったのは、自分自身は作業せずに他の人に作業を任せたってことだ。
他の人に任せるということ、しかるべき方法で任せるということを学んだんだ。

#@ Rewind eight years. I began to get involved with GNOME documentation in 2003.
#@ I did not have any real experience as a technical writer at the time. My day
#@ job had me working on publications tools, and I started working on the tools
#@ and help viewer used for GNOME documentation. It was not long before I was
#@ pulled into writing.
話は8年前にさかのぼる。GNOMEのドキュメンテーションに関わり始めた2003年のことだ。
当時の僕には、テクニカルライターとしての経験がまったくなかった。
本業では出版ツールを扱っていて、僕はそのツールやGNOMEドキュメント用のヘルプビューアの開発に関わることになった。
その後、ドキュメントそのものの執筆にも関わるようになったってわけだ。

#@ In those days, much of our documentation was handled by professional tech
#@ writers inside Sun. They would take on a manual, write it, review it, and
#@ commit it to our CVS repository. We could all look at it after the fact,
#@ learn from it, and make corrections to it. But there was no concerted
#@ effort to involve people in the writing process.
当時のGNOMEのドキュメントは、ほとんどがSunに所属するプロのテクニカルライターによるものだった。
彼らがマニュアルを書いてレビューし、そしてそれを僕らのCVSリポジトリにコミットしてくれたんだ。
僕らはそのマニュアルを隅から隅まで見ることができた。そこからいろいろ学んだし、間違いがあれば手直しもした。
でも、実際の執筆作業に参加しようという流れにはならなかった。

#@ It is not that the Sun writers were trying to be protective or hide things
#@ behind closed doors. These were professional tech writers. They knew how
#@ to do their job. They were good at it. Other people could take on other
#@ manuals, but they would write their assignments the way they knew how.
#@ Running each page by a group of untrained contributors, however
#@ enthusiastic, is inviting the very worst kind of bikeshedding\footnote{\url{https://secure.wikimedia.org/wiktionary/en/wiki/bikeshedding}}
#@ imaginable. It is just not productive.
別に、Sunのライターたちが保身をはかって核心を隠していたりしたわけじゃない。
彼らはプロのライターだった。仕事のやりかたも知っていたし、実際よくやってくれていた。
他の人たちは別のマニュアルを担当することもできたけど、自分に割り当てたれたものを自己流で作っていくだけだった。
きちんとした訓練を受けていない、でもやる気だけは人一倍ある。そんな人たちがよってたかってドキュメントを書いていったわけだ。
どう考えても「自転車置き場の議論」@<fn>{bikeshedding}に陥ってしまうパターンだ。
まったくもって生産的じゃない。

//footnote[bikeshedding][@<href>{https://secure.wikimedia.org/wiktionary/en/wiki/bikeshedding}]

#@ Inevitably, the winds shifted inside Sun and their tech writers were
#@ assigned to other projects. That left us without our most prolific
#@ and knowledgeable writers. Worse than that, we were left with no
#@ community, nobody to pick up the pieces.
必然的に、Sun社内の空気も変わってきた。Sunのテクニカルライターたちが、別のプロジェクトにアサインされるようになってしまったんだ。
一番精力的に活動をしていて、一番物知りだったライターさえもプロジェクトを去っていった。
さらに悪いことに、残された僕らはコミュニティなんて呼べる状態じゃなかった。誰ひとり、この事態をどうにかしようとしなかった。

#@ There are ideas and processes that are standard in the corporate world.
#@ I have worked in the corporate world. I do not think anybody questions
#@ these ideas. People do their job. They take assignments and finish them.
#@ They ask others for reviews, but they do not farm out their work to
#@ newcomers and less experienced writers. The best writers will probably
#@ write the most.
There are ideas and processes that are standard in the corporate world. I have worked in the corporate world. I do not think anybody questions these ideas. People do their job. They take assignments and finish them. They ask others for reviews, but they do not farm out their work to newcomers and less experienced writers. The best writers will probably write the most.

#@ These are all really obvious ideas, and they fail miserably in a community-based
#@ project. You will never develop a community of contributors if you do everything
#@ yourself. In a software project, you might get contributors who are skilled and
#@ persistent enough to contribute. In documentation, that almost never happens.
These are all really obvious ideas, and they fail miserably in a community-based project. You will never develop a community of contributors if you do everything yourself. In a software project, you might get contributors who are skilled and persistent enough to contribute. In documentation, that almost never happens.

#@ Most people who try to contribute to documentation do not do it because they
#@ want to be tech writers, or even because they love to write. They do it
#@ because they want to contribute, and documentation is the only way they
#@ think they know how. They do not know how to code. They are not good at
#@ graphic design. They are not fluent enough in another language to translate.
#@ But they know how to write.
Most people who try to contribute to documentation do not do it because they want to be tech writers, or even because they love to write. They do it because they want to contribute, and documentation is the only way they think they know how. They do not know how to code. They are not good at graphic design. They are not fluent enough in another language to translate. But they know how to write.

#@ This is where professional writers roll their eyes. The fact that you are
#@ literate does not mean you can write effective user documentation. It is
#@ not just about putting words on paper. You need to understand your users,
#@ what they know, what they want, where they are looking. You need to know
#@ how to present information in a way they will understand, and where to put
#@ it so they will actually find it.
This is where professional writers roll their eyes. The fact that you are literate does not mean you can write effective user documentation. It is not just about putting words on paper. You need to understand your users, what they know, what they want, where they are looking. You need to know how to present information in a way they will understand, and where to put it so they will actually find it.

#@ Tech writers will tell you that tech writing is not something just anybody
#@ can do. They are right. And that is exactly why the most important thing
#@ professional writers can do for the community is not write.
Tech writers will tell you that tech writing is not something just anybody can do. They are right. And that is exactly why the most important thing professional writers can do for the community is not write.

#@ The key to building a successful documentation community is to let others
#@ make the decisions, do the work, and own the results. It is not enough to
#@ just give them busy work. The only way they will care enough to stick around
#@ is if they are personally invested. A sense of ownership is a powerful
#@ motivator.
The key to building a successful documentation community is to let others make the decisions, do the work, and own the results. It is not enough to just give them busy work. The only way they will care enough to stick around is if they are personally invested. A sense of ownership is a powerful motivator.

#@ But if you only get inexperienced writers, and you hand all the work
#@ over to them, how can you ensure you create quality documentation?
#@ Uncontrolled crowd-sourcing does not create good results. The role
#@ of an experienced writer in a community is as a teacher and mentor.
#@ You have to teach them to write.
But if you only get inexperienced writers, and you hand all the work over to them, how can you ensure you create quality documentation? Uncontrolled crowd-sourcing does not create good results. The role of an experienced writer in a community is as a teacher and mentor. You have to teach them to write.

#@ Start by involving people early in the planning. Always plan from the
#@ bottom up. Top-down planning is not conducive to collaboration. It is
#@ hard to involve people in crafting a high-level overview when not
#@ everybody has the same sense of what goes into that overview. But
#@ people can think of the pieces. They can think about individual topics
#@ to write, tasks people perform, problems people have, questions people
#@ ask. They can look at forums and mailing lists to see what users ask.
Start by involving people early in the planning. Always plan from the bottom up. Top-down planning is not conducive to collaboration. It is hard to involve people in crafting a high-level overview when not everybody has the same sense of what goes into that overview. But people can think of the pieces. They can think about individual topics to write, tasks people perform, problems people have, questions people ask. They can look at forums and mailing lists to see what users ask.

#@ Write a few pages yourself. It gives people something to imitate. Then
#@ dish out everything else. Let other people own topics, or entire groups
#@ of topics. Make it clear what information they need to provide, but let
#@ them write. People will learn by doing.
Write a few pages yourself. It gives people something to imitate. Then dish out everything else. Let other people own topics, or entire groups of topics. Make it clear what information they need to provide, but let them write. People will learn by doing.

#@ Be constantly available to help them out and answer questions. At least
#@ half the time I spend on documentation is spent answering questions so
#@ that other people can get work done. When people submit drafts, review
#@ the drafts and discuss critiques and corrections with them. Do not just
#@ make the corrections yourself.
Be constantly available to help them out and answer questions. At least half the time I spend on documentation is spent answering questions so that other people can get work done. When people submit drafts, review the drafts and discuss critiques and corrections with them. Do not just make the corrections yourself.

#@ This still leaves you handling the big picture. People are filling in
#@ parts of the puzzle, but you are still putting it together. As people
#@ get more experienced, they will naturally take bigger and bigger pieces.
#@ Encourage people to get more involved. Give them more to do. Get them
#@ to help you help more writers. The community will run itself.
This still leaves you handling the big picture. People are filling in parts of the puzzle, but you are still putting it together. As people get more experienced, they will naturally take bigger and bigger pieces. Encourage people to get more involved. Give them more to do. Get them to help you help more writers. The community will run itself.

#@ Eight years later, GNOME has managed to create a documentation team
#@ that runs itself, deals with problems, makes decisions, produces great
#@ documentation, and constantly brings in new contributors. Anybody can
#@ join in and make a difference, and that is the key to a successful Open
#@ Source community.
Eight years later, GNOME has managed to create a documentation team that runs itself, deals with problems, makes decisions, produces great documentation, and constantly brings in new contributors. Anybody can join in and make a difference, and that is the key to a successful Open Source community.
