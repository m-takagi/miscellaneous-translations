#@ \chapterwithauthor{Kévin Ottens}{University and Community}
= University and Community

@<href>{https://github.com/Open-Advice/Open-Advice/blob/master/mentoringrecruiting/KevinOttens.tex, The original text} (licenced under CC-BY-SA)

//flushright{
Kévin Ottens
//}

#@ \authorbio{Kévin Ottens is a long term hacker of the KDE community. He contributed
#@ to the KDE Platform at large, with a strong emphasis on API design and
#@ frameworks architecture. Graduating in 2007, he holds a PhD in computer science
#@ which led him to work particularly on ontologies engineering and multi-agent
#@ systems. Kévin's job at KDAB includes developing research projects around KDE
#@ technologies. He still lives in Toulouse where he serves as part time teacher in
#@ his former university.}
//lead{
Kévin Ottensは、KDEコミュニティのベテランハッカーだ。
KDEプラットフォーム全般にまんべんなく貢献しており、中でもAPI設計やフレームワークのアーキテクチャに大きく関わっている。
2007年にコンピュータサイエンスのPhDを取得した彼は、概念体系工学やマルチエージェントシステムを得意としている。
KévinはKDABで、KDEの技術に関する研究プロジェクトにも関わっている。
今もトゥールーズ在住で、出身校で講師をすることもある。
//}

#@ \section*{Introduction}
#@ Free Culture communities are mostly driven by volunteer efforts. Also
#@ most of the people getting into such communities do so during their time at the
#@ university. It is somewhat the right period of your life to embark in such
#@ adventures: you are young, full of energy, curious, and probably want to change
#@ the world to your image. That is really all that is needed for most volunteer
#@ work.
== はじめに

フリーカルチャーのコミュニティは、基本的にボランティアの力で回っている。
また、そういったコミュニティに関わる人の多くは、大学にいる時間を使ってコミュニティ活動をしている。
学生時代って、そういう冒険をしてみるのには適した時期だ。
まだまだ若くてエネルギーが満ちあふれているし、好奇心も旺盛。そしておそらく、自分の手でこの世界を変えてやろうと思っていたりする。
まさにこれは、ボランティア活動に必要なことばかりだ。

#@ But, at the same time, being a student does not necessarily leave you plenty of
#@ time to engage with a Free Culture community. Indeed, most of these communities
#@ are rather large, and it can be frightening to contact them.
しかしその一方で、学生だったらフリーカルチャーコミュニティに身を捧げるのが当然だというわけでもない。
実際、その手のコミュニティの多くは巨大で、飛び込むのにはちょっとした勇気がいる。

#@ It obviously raises a scary question: do Free Culture communities, because they
#@ don't try to actively outreach to universities, fail to attract the next generation
#@ of talented contributors?
#@ That is a valid question we tried to explore in the context of a community
#@ producing software, namely KDE. In this article, we focus on the aspects we did
#@ not foresee but had to deal with while looking for an answer to this question.
そこで必然的にあがってくる問いがある。
フリーカルチャーのコミュニティは、次代を担う才能のある若手にとって、魅力あるものと言えるだろうか？
大学方面への積極的なアプローチが足りないんじゃないだろうか？
これは、実際に私がKDEのコミュニティの中で考えてきた疑問でもある。
この記事では、予測できない将来のことにはあまり注目しない。
でも、この問いへの答えを探るためには将来のことも考えなければいけなかった。

#@ \section*{Building relationship with a local university}
#@ Really, it all starts by reaching out to the students themselves, and for that,
#@ the best way is still to get to their universities, trying to show them how
#@ welcoming Free Culture communities can be. To that effect, we built a
#@ relationship with the Paul Sabatier University in Toulouse -- more precisely one
#@ of its courses of study named IUP ISI which focused on software engineering.
== 地元の大学との関係を築く

何を置いても、まずは学生たち自身に私たちの声を届けるところからだ。
そのために最適な方法は、彼らの通う大学に取り入って、フリーカルチャーのコミュニティが学生を歓迎しているのを示すことだ。
その一環として、私たちはトゥールーズのPaul Sabatier Universityとの関係を築いた。
より詳しく言うと、IUP ISIという講座に協力することにしたんだ。その講座では、ソフトウェア工学を扱っていた。

#@ The IUP ISI was very oriented toward ``hands on'' knowledge, and as such had a
#@ pre-existing program for student projects. A particularly interesting point of
#@ that program is the fact that students work in teams mixing students from
#@ different promotions. Third year and fourth year students get to collaborate on
#@ a common goal, which usually leads to teams of seven to ten students.
IUP ISIは「実際に手を動かして」知識を得ることを重視していて、
学生のプロジェクト用の課題があった。
この課題がおもしろいのは、いろんな学年の学生が混じったチームで作業をするというところだ。
三年生と四年生が協力して同じ目標を目指したりする。たいていは、10名弱のチームになる。

#@ The first year of our experiment we hooked up with that program, proposing new
#@ topics for the projects, focusing on software developed within the KDE
#@ community. Henri Massié, director of the course of study, has been very
#@ welcoming to the idea, and let us put the experiment in place. For that first
#@ year, we were allocated two slots for KDE related software projects.
協力を始めた最初の年に、僕たちはその課題にかかわった。新しいネタを提案したんだ。
KDEコミュニティで開発しているソフトウェアに関するものだった。講座を仕切っていた
Henri Massiéはそのアイデアを受け入れてくれ、いろいろ僕らに試させてくれた。
その年は、KDE関連のソフトウェアプロジェクトの枠を二つ割り当てられた。

#@ To quickly build trust, we decided that year to provide a few guarantees
#@ regarding the work of the students:
信頼関係を構築するために、初年度は学生たちの作業に対してこんな保証をすることにした。

#@ \begin{itemize}
#@   \item to help the teachers have confidence in the topics covered: the chosen
#@ projects were close to the topics taught at the IUP ISI (that is why we
#@ targeted a UML modeling tool and a project management tool for that year);
#@   \item to give maximum visibility to the teachers: we provided them a server on
#@ which the student production was regularly built and remotely accessible for
#@ testing purpose;
#@   \item to ease the engagement of the students with the community: the
#@ maintainers of the projects were appointed to play a ``customer'' role thus
#@ pushing requirements to the students and helping them find their way in the
#@ ramifications of the community;
#@   \item finally, to get the students going, we introduced a short course on how
#@ to develop with Qt and the frameworks produced by KDE;
#@ \end{itemize}
 * 自分の扱うトピックについて教師が自信を持てるように支援する。そのために、IUP ISIで教えている内容に近いプロジェクトを選んだ
 （UMLモデリングツールやプロジェクト管理ツールを初年度に取り上げたのは、そのためだ）。
 * 教師の可視性を最大にする。そのために、教師用のサーバーを提供して、
 学生の作品を定期的にビルドしたりテスト用にリモートアクセスしたりできるようにした。
 * 学生がコミュニティに参加しやすいようにする。
 プロジェクトのメンテナが「顧客」の役割を演じるようにした。
 そして、学生に対して要件を提示したりすることで、
 コミュニティの中で自分が何をできるのかを学生たちが発見できるようにした。
 * そして、学生を一歩先に進ませるようにする。
 短期コースを用意して、QtとKDEのフレームワークを使った開発方法を教えた。

#@ At the time of this writing, we have been through five years of such projects.
#@ Small adjustments to the organization have been done here and there, but most of
#@ the ideas behind it stayed the same. Most of the changes made were the result of
#@ more and more interest from the community willing to engage with students and
#@ of more and more freedom given to us in the topics we could cover in our
#@ projects.
いまこれを書いている時点で、このプロジェクトに関わってから五年になる。
大学の現状にあわせていろんなところで微妙に調整をしてはいるが、元となる考えのほとんどは当初のままだ。
これまでに手を入れた部分のほとんどは、コミュニティ側が学生たちをうまく引き込もうとしはじめたことによるものだ。
プロジェクトで私たちが扱うトピックについて、徐々にいろんなことができるようになりつつある。

#@ Moreover, throughout those years the director gave us continuous support and
#@ encouragement, effectively allocating more slots for Free Culture community
#@ projects, proving that our integration strategy was right: building trust very
#@ quickly is key to a relationship between a Free Culture community and a
#@ university.
さらに、ここに至るまでずっと、学長からもサポートを受け続けており、フリーカルチャーのコミュニティを扱う枠も増やしてもらった。
私たちのやりかたは間違っていなかったんだろう。早いうちに信頼関係を築いてしまうこと。
それが、フリーカルチャーコミュニティと大学との間でうまくやっていく鍵だったんだ。

#@ \section*{Realizing teaching is a two-way process}
#@ During those years of building bridges between the KDE community and the IUP ISI
#@ course of study, we ended up in teaching positions to support the students in
#@ their project related tasks. When you have never taught a classroom
#@ full of students, you might still have this image of yourself sitting in a
#@ classroom a few years ago. Indeed, most teachers were students once... sometimes
#@ not even the type of very disciplined or attentive students. You were likely
#@ having this feeling of drinking from a firehose: a teacher entering a room,
#@ getting in front of the students and delivering knowledge to you.
== 教育とは双方向のプロセスであることを理解する

KDEコミュニティとIUP ISIコースとの間を取り持つこと数年。この間の私たちの立場は、
プロジェクト関連のタスクをこなす学生たちをサポートすることだった。
教室いっぱいの学生を前にして教えたことのない人でも、自分が教室に座って授業を受けていたころのことはきっと覚えていることだろう。
たいていの教師だって、かつてはその仲間だった。そう。中には態度が悪かった人もいるだろうし、思いやりに欠ける学生だった人もいるだろう。
教師が教室に入る。教壇に立って前を見る。学生たちに向かって自分の知識を伝える。
そんなことを考えると、圧倒されてしまうかもしれない。

#@ This stereotype is what most people keep in mind of their years as students and
#@ the first time they get in a teaching situation they want to reproduce that
#@ stereotype: coming with knowledge to deliver.
自分の学生時代を振り返れば、ほとんどの人はそんなことを思い出すだろう。自分が教える立場になったときにも、
そのステレオタイプを再現したくなってしまう。そう、今度は自分が教える側になって。

#@ The good news is that nothing could be further from the truth than this
#@ stereotype. The bad news is that if you try to reproduce it, you are very likely
#@ to scare your students away and face nothing else than lack of motivation on
#@ their side to engage with the community. The image you give of yourself is the
#@ very first thing they will remember of the community: the first time you get in
#@ the classroom, to them \emph{you are} the community!
いいニュースと悪いニュースがある。
いいニュースは、現実の世界もこのステレオタイプからそんなにかけ離れてはいないってこと。
悪いニュースは、このステレオタイプを再現しようとしたらきっと、学生たちを脅かしてしまうってこと。
学生たちにとって、コミュニティにかかわる動機が何もなくなってしまう。
あなたの第一印象が、コミュニティに対する彼らの第一印象になる。教室に足を踏み入れたその瞬間から、@<em>{あなた自身が}コミュニティなんだ！

#@ Not falling into the trap of this stereotype requires you to step back a bit and to realize what teaching is really about. It is not a one way process where one
#@ delivers knowledge to students. We came to the conclusion that it is instead a
#@ two-way process: you get to create a symbiotic relationship with your student.
#@ Both the students and the teacher have to leave the classroom with new
#@ knowledge. You get to deliver your expertise of course -- but to do so efficiently
#@ you have to adapt to the students' frame of reference all the time. It is a very
#@ humbling work.
この手のステレオタイプの罠に陥らないようにしよう。
一歩下がって、教えるというのはどういうことなのかを理解しなければいけない。
教えるというのは、単に知識を学生に伝えるだけの一方通行のプロセスじゃない。
双方向のやりとりがあるプロセスなんだ。学生との間で、持ちつ持たれつの共存関係を作ることになる。
学生と教師の両方が、何らかの知識を残さなければいけない。
教師であるあなたは、講義の内容に関する専門知識を伝える。
しかしそのためには、学生の反応に常に気を配りつつ、それにあわせていく必要がある。
とても屈辱的なことだ。

#@ Realizing that fact generates quite a few changes in the way you undertake
#@ your teaching:
これらの事実を理解すると、何かを教えるときの方法もかなり変わってくる。

#@ \begin{itemize}
#@   \item You will have to understand the culture of your students. They probably
#@ have a fairly different background from you and you will have to adapt your
#@ discourse to them; for instance, the students we trained are all part of the so-called Y generation which exhibits fairly different traits regarding leadership, loyalty and trust than previous generations.
#@   \item You will have to reassess your own expertise, since you will need to
#@ adapt your discourse to their culture. You will approach your own knowledge from
#@ very different angles than what you are used to, which will inevitably lead you
#@ to discoveries in fields you assumed you mastered.
#@   \item Finally, you will have to build skills in presenting; a teaching
#@ position is really about getting out of your comfort zone to present your own
#@ knowledge while keeping it interesting and entertaining to your audience. It
#@ will make you a better presenter.
#@ \end{itemize}
 * 学生たちの文化を理解する必要がある。
 彼らの考えは、あなたとはかなり違っているだろう。会話をするときも、彼らにあわせなければいけない。
 たとえば、私が教えていた学生たちは、いわゆる
 「@<href>{http://ja.wikipedia.org/wiki/%E3%82%B8%E3%82%A7%E3%83%8D%E3%83%AC%E3%83%BC%E3%82%B7%E3%83%A7%E3%83%B3Y, ジェネレーションY}」だった。
 リーダーシップや忠誠心そして信頼などに対する考えかたが、それ以前の世代とはかなり違っていた。
 * 自分の専門知識も見直す必要がある。というのも、学生との会話を彼らのノリにあわせなければいけないからだ。
 自分の知識を伝えるときには、これまで以上にあらゆる角度から説明することになる。
 必然的に、自分が理解していると思い込んでいる分野についても新たな気づきが得られることになるだろう。
 * プレゼンスキルも磨かなければいけない。
 教えるというのは、単に自分の知識をひけらかして満足するための場ではない。
 聞き手が興味を持って楽しく聞けるようにする必要がある。よりよいプレゼンターを目指すこと。

#@ As such, you will become a better teacher. Also your goals of getting well
#@ trained students, and having students engage with a Free Culture community will
#@ be better fulfilled.
そうすれば、きっといい教師になれるだろう。
そして、学生たちをきちんと育てて、フリーカルチャーコミュニティに参加させるという目標も達成できるだろう。

#@ \section*{Conclusion}
#@ At the end of the day why would you go through all the effort
#@ to build trust with a university and step outside of your comfort zone by
#@ improving your teaching? Well, it really boils down to the initial question we
#@ tried to answer:
== 結論

結局のところ、いったいなぜそんなに苦労してまで大学との信頼関係を築くのだろう？
なぜそんなに苦労してまで教えかたを考えるのだろう？
ここで、最初に挙げた問いに戻る。

#@ \emph{Do Free Culture communities fail to attract new contributors out of
#@ universities simply because of their inaction?}
@<em>{フリーカルチャーのコミュニティが若い学生たちを取り込めないのは、単にコミュニティの努力が足りないだけなのだろうか？}

#@ In our experience the answer is \emph{yes}. Through those five years of building
#@ up a relationship with the IUP ISI, we retained around two students per year on
#@ average. Some of them disappeared after a while, but some of them become very
#@ active contributors. The other ones still keep some nostalgia of that period of
#@ their life and keep advocating even though they do not contribute directly. And
#@ right now we have a local KDE team which managed to efficiently organize a two
#@ day conference for our latest release party.
経験上、その答えは@<em>{イエス}だ。
IUP ISIとの関係を築き上げたこの五年の間、平均して年に二名ほどの学生をコミュニティに巻き込むことができた。
中にはすぐに去って行った人もいるけれど、アクティブなメンバーになってくれている人もいる。
直接参加してくれているわけではないけれど、この授業のことを懐かしんでくれている人もいる。
そして今や、地元のKDEチームは、最新版のリリースパーティを兼ねた二日間のカンファレンスを開催できるほどの規模になった。

#@ Of those former students, not a single one would have engaged with KDE without
#@ those university projects. We would have completely missed those talents.
#@ Luckily, we have not been inactive.
彼らはみな、大学でのプロジェクトがなければKDEに関わることなどなかっただろう。
すばらしい才能を持つ若者たちを確保し損なうところだった。彼らのおかげで、今もアクティブに活動できるようになっている。
