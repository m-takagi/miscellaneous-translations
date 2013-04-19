#@ -*- mode: review; coding: utf-8 -*-
#@ PurposeOfEstimation
= PurposeOfEstimation

#@ http://martinfowler.com/bliki/PurposeOfEstimation.html

//lead{
Martin Fowler's blikiの"@<href>{http://martinfowler.com/bliki/PurposeOfEstimation.html, PurposeOfEstimation}"の翻訳。
//}

#@ 27 February 2013
2013/2/27

//flushright{
tags: @<href>{http://martinfowler.com/tags/metrics.html, metrics} @<href>{http://martinfowler.com/tags/project%20planning.html, project planning}
//}

#@ My first encounter with agile software development was working with Kent Beck at the @<href>{http://martinfowler.com/bliki/C3.html, dawn of Extreme Programming}. One of the things that impressed me about that project was the way we went about planning. This included an approach to estimating which was both lightweight yet more effective than what I'd seen before. Over a decade has now passed, and now there is an argument amongst experienced agilsts about whether estimation is worth doing at all, or indeed is actively harmful @<fn>{f01}. I think that to answer this question we have to look to what purpose the estimates will be used for.
アジャイルソフトウェア開発に初めて出会ったのは、Kent Beckと仕事をしたときのことだ。
そう、あれは@<href>{http://martinfowler.com/bliki/C3.html, Extreme Programmingの黎明期}だった。
あのプロジェクトでいちばん印象的だったのは、計画づくりの方法だった。
その見積もりは、私がそれまでに見てきた方法のどれよりも軽量で、かつ効率的だった。
あれから10年。アジャイル開発者たちの間では、見積もりの有用性に対する議論が巻き起こっている。
見積もりは役に立つものなのか、はたまた悪影響を及ぼすものなのか@<fn>{f01}。
思うに、この問いに答えるには、見積もりをどのように使うのかを明確にしておく必要があるんじゃないだろうか。

#@ A common scenario runs like this:
ありがちなシナリオは、こんなものだ。

#@  * Developers are asked for (or given) estimates for upcoming work.
#@ People are optimists, so these estimates tend to be too low, even without pressure to make them low (and there's usually at least some implicit pressure)

#@  * These tasks and estimates are turned into release plans tracked with burn-down charts

#@  * Time and effort goes into monitoring progress against these plans. Everyone is upset when actuals end up being more than estimates. In effort to increase pace with the estimates, developers are told to sacrifice quality, @<href>{http://martinfowler.com/bliki/DesignStaminaHypothesis.html, which only makes things worse}.
 * 開発者は、次の作業の見積もりを聞かれる（あるいは見積もりを聞かされる）。@<br>{}
 人はみな楽観的なので、その見積もりは少なめになりがち。
 見積もりを抑えろというプレッシャーがなくても（たいていは暗黙のプレッシャーがあるものだけれども）、
 自然にそうなる。
 * そのタスクや見積もりに基づいてリリース計画を立てて、
 バーンダウンチャートで計画の進行をチェックする。
 * 計画に対する進捗状況の管理に大きな労力を費やす。
 進捗が計画よりも遅れ出して、みんなあたふたしはじめる。
 見積もりに追いつくために、品質を犠牲にしてでもペースを上げろという指示が出る。
 @<href>{http://martinfowler.com/bliki/DesignStaminaHypothesis.html, そして、状況はさらに悪化する}。

#@ In this narrative, effort put into estimates is, at best, waste - since "an estimate is a guess in a clean shirt" @<fn>{f02}. Usually estimates end up being actively harmful as they encourage @<href>{http://martinfowler.com/bliki/FeatureDevotion.html, FeatureDevotion}, a nasty condition where people start valuing ticking off features more than tracking the real outcome of the project.@<fn>{f03}
このシナリオで見積もりにかけた労力は、どんなに甘めに見ても、ムダ以外の何物でもない。
"an estimate is a guess in a clean shirt" @<fn>{f02}だからである。
たいていは、見積もりが害になることのほうが多い。見積もりのせいで
@<href>{http://martinfowler.com/bliki/FeatureDevotion.html, FeatureDevotion}
を強いられるからだ。機能をそぎ落とすことに気を取られすぎて、
実際の成果を考えることがおろそかになってしまう。@<fn>{f03}

#@ Estimates also set expectations, and since estimates are usually too low, they set unrealistic expectations. @<fn>{f04} Any increase in time or reduction in features is then seen as a loss. Due to @<href>{http://en.wikipedia.org/wiki/Loss_aversion, loss-aversion}, these losses have a magnified effect. @<fn>{f05}
見積もりはまた、期待値のもとにもなる。
見積もりはたいてい少なめになってしまうので、
そこから得られる期待値も非現実的なものになる。@<fn>{f04}
少しでも余計に時間がかかったり、少しでも機能が減ったりすれば、期待外れだとみなされる。
@<href>{http://en.wikipedia.org/wiki/Loss_aversion, loss-aversion}
のせいで、この損失は大きな影響を及ぼす。@<fn>{f05}

#@ Faced with situations like this, it's easy to see how people turn their angry glares towards estimation. This leads to an increasing notion that anyone indulging in estimating is Not a True Agilist. Critics of agile say this means that agile development is about developers going off and doing vague stuff with promises that it'll be done when its done and you'll like it.
こんな状況に直面すると、つい見積もりを目の敵にしてしまう。
そしてそれは、「見積もりなんかにこだわっている人は真のアジャイル開発者じゃない」という思いにつながる。
アジャイルの粗探しをする人たちは、それを見て言う。
「要するに、アジャイル開発っていうのは、約束をすることを開発者が放棄しちゃうってことなんだ。
『いつできるの？』『いつっていうか、できたときができあがりさ。
きっと気に入ると思うよ』みたいにね」

#@ I don't share this view of estimation as an inherently evil activity. If I'm asked if estimation is a Bad Thing my answer is the standard consultants' answer of "it depends". Whenever someone answers "it depends" the follow-up question is "upon what". To answer that we have to ask why we are doing estimation - as I like to say "if it's worth doing well, it's worth asking why on earth you're doing it at all".
私は、見積もりは本質的に邪悪なものだというこの見方には与しない。
「見積もりってダメなの？」って聞かれたら、お決まりの答えを返す。「状況によるね」
そんなふうに答えたら、次に聞かれるのはきっと「たとえば？」だ。
その問いに答えるには、私たちはいったいなぜ見積もりをするのかを考えなければいけない。
つまり「もしそれをうまくやる価値があるっていうのなら、
そもそもなぜそれをやるのかってことを考える価値もある」ってことだ。

#@ For me, @<em>{estimation is valuable when it helps you make a significant decision}.
私にとって、@<em>{見積もりに価値があるのは、それが重大な決断の助けになる場合だ}。

#@ My first example of an estimation-informed decision is allocation of resources. Organizations have a mostly fixed amount of money and people, and usually there are too many worthwhile things to do. So people are faced with decisions: do we do A or B? Faced with such a decision it's useful to know how much effort (and cost) each will involve. To make sensible decisions about what to do, you need to have a feel for both the cost and the benefits.
見積もりに基づく決断の一例として、リソースの確保を挙げよう。
たいていの組織では、使える資金や人員の量は決まっている。
そしてふつうは、資金や人員の量に比べてやることが多すぎる。
そこで、決断を迫られることになる。Ａをやるべきか、はたまたＢをやるべきか。
そんな決断を迫られたときに、それぞれの作業にかかる労力（やコスト）がわかっていると便利だ。
何をすべきかについて理にかなった判断をするためには、
それぞれの費用対効果を感覚的につかんでおかなければいけない。

#@ Another example is to help with coordination. The blue team wants to release a new feature to their web site, but cannot do so until the green team builds a new service to give them crucial data. If the green team estimates they will be done in two months and the blue team estimates that it will take them a month to build the feature, then the blue team knows it's not worthwhile to start today. They can spend at least a month working on some other feature that can be released earlier.
もうひとつの例として、調整をしやすくするということを挙げよう。
青チームは新機能をウェブサイトでリリースしたいと考えている。
でも、緑チームが新サービスを構築してくれるまではその新機能を公開できない。
というのも、その新機能は緑チームのサービスからのデータがないと動かないからだ。
緑チームは新サービスの構築を二か月と見積もった。一方、青チームが新機能を完成させるには一か月ほどかかりそうだ。
つまり、青チームは別に、いますぐ新機能の開発を始めなくてもいいということがわかる。
すくなくとも一か月はそれ以外の作業をできて、そっちのほうを先にリリースできるということだ。

#@ So whenever you're thinking of asking for an estimate, you should always clarify what decision that estimate is informing. If you can't find one, or the decision isn't very significant, then that's a signal that an estimate is wasteful. When you do find a decision then knowing it focuses the estimate because the decision provides context. It should also clarify the desired precision and accuracy.
見積もりを作ってくれとお願いするなら、その見積もりを使ってどんな判断をしようとしているのかを明確にしておくべきだ。
もしそれがはっきりしないだとか、あるいはその判断が対して重要なものではないなどといった場合は、
きっとその見積もりはムダなんだろう。見積もりの目的がはっきりしていれば、
見積もりにより注力できるようになる。その判断のもとになる状況がわかるからだ。
また、見積もりに求める細かさや正確さについてもはっきりさせておこう。

#@ Understanding the decision may also lead you to alternative actions that may not involve an estimate. Maybe task A is so much more important than B that you don't need an estimate to put all your available energies into doing it first. Perhaps there is a way for blue team members to work with the green team to get the service built more quickly.
判断した結果を知れば、別の動きをとれるかもしれない。
そしてその動きには、見積もりが不要かもしれない。
タスクAのほうがタスクBより明らかに重要なのだとすれば、
最初の見積もりに全力を投入する必要もないだろう。
青チームのメンバーが緑チームと協力して、まずは緑チームのサービスをなんとか動かすといった手が考えられる。

#@ Similarly, tracking against a plan should also be driven by how it informs decision making. My usual comment here is that a plan acts as a baseline to help assess changes - if we want to add a new feature, how do we fit it into the @<href>{http://martinfowler.com/bliki/FivePoundBag.html, FivePoundBag}? Estimates can help us understand these trade-offs and thus decide how to respond to change. On a larger scale re-estimating a whole release can help us understand if the project as a whole is still the best use of our energy. A few years ago we had a year-long project that was cancelled after a re-estimate a couple of months in. We saw that as a success because the re-estimate suggested the project would take much longer than we had initially expected - early cancellation allowed the client to move resources to a better target.
同じく、計画に対する実績を追うときにも、それが意思決定にどう関わるのかを意識しなければいけない。
私がよく言っているのは、計画は評価を変更するときのベースラインになるということだ。
新機能を追加したいとして、それをどうやって@<href>{http://martinfowler.com/bliki/FivePoundBag.html, FivePoundBag}
にフィットさせればいいだろう？
見積もりを使えばこれらのトレードオフを把握する助けになるし、変更の要求にどう反応すればいいのかもわかる。
リリース全体にまたがる大規模な再見積もりをすれば、
そのプロジェクト自体にまだ力を入れるだけの価値があるかどうかを把握できる。
数年前に、一年越しのプロジェクトを打ち切った。2か月ほどかけた再見積もりの結果だ。
その判断は正解だったとみている。というのも、再見積もりの結果、
当初の予想よりもはるかに時間がかかるであろうことが見えてきたからだ。
早いうちに打ち切ったおかげで、クライアントはそのリソースを他に振り向けることができた。

#@ But remember with tracking against plans that estimates have a limited shelf life. I once remember a gnarly project manager say that plans and estmates were like a lettuce, good for a couple of days, rather wilty after a week, and unrecognizable after a couple of months.
しかし、計画に対する実績を追うときには、見積もりには寿命があるということを忘れないようにしよう。
あるプロジェクトマネージャーが、かつてこんなことを言っていた。
「計画や見積もりっていうのは、レタスみたいなものだ。
おいしいのは数日だけ。一週間もすればしなびてくるし、数か月後には原形をとどめていない」

#@ Many teams find that estimation provides a useful forcing function to get team members to talk to each other. Estimation meetings can help get better understanding of various ways to implement upcoming stories, future architectural directions, and design problems in the code base. In this case any output estimation numbers may be unimportant. There are many ways such conversations can happen, but estimation discussions can be introduced if these kinds of conversations aren't happening. @<fn>{f06} Conversely if you're thinking of stopping estimation, you need to ensure that any useful conversation during estimation still continues elsewhere.
見積もりのおかげで、チームのメンバーどうしが有用な会話をできるようになるという面もある。
見積もりミーティングは、さまざまなことを理解する助けになる。
これから立ち向かうストーリーを実装するためのさまざまな方法や、
今後のアーキテクチャ上の判断、そしてコード上の設計の問題などに目を向けられる。
そんな場合、見積もりの数字がどうなるかは、実はあまり重要ではない。
そういった会話を引き起こすには他にもいろんなやりかたがあるが、
もしそういった会話が自然に発生しないのなら、見積もり時の議論がその助けになるだろう。@<fn>{f06}
逆に、もし見積もりをやめようというのなら、
見積もりのときの有用なやりとりが、どこか他の場所で続けられるようにしなければいけない。

#@ Go to any conference with agile leanings and you'll hear talks of teams that work effectively without estimation. Often this works because they, and their customers, understand that making estimates isn't going to affect significant decisions. An example is a small team working closely with business. If the broader business is happy with allocating some people to that business unit, then work can be carried out in priority order; often this is helped by the team breaking down work into small enough units. @<fn>{f07} A team's level in the @<href>{http://martinfowler.com/articles/agileFluency.html, agile fluency model} plays a big role here. As teams progress they first struggle with estimation, then can get quite good at it, and then reach a point where they often don't need it. @<fn>{f08}
アジャイル方面のカンファレンスに行くと、見積もりなしでうまく回しているチームの話を聴くことがある。
そういうチームがうまくいっている理由はたいてい、メンバーや顧客が、
見積もりをしても重大な決断の材料にはならないであろうことを理解しているということだ。
たとえば、小規模なチームで業務に密着した作業をしている場合がその一例だ。
幅広い業務にまたがる場合でも、業務単位に何人かを割り当てられる場合は、
作業を優先度順に行える。それを手助けするために、
作業を小さな単位に分割することが多い。@<fn>{f07}
@<href>{http://martinfowler.com/articles/agileFluency.html, agile fluency model}
におけるチームのレベルが、ここでは大きな意味を持つ。
チームの成熟とともに、見積もりに悩まされていたメンバーが見積もりをうまくできるようになり、
最終的には見積もりがいらないレベルに到達する。@<fn>{f08}

#@ Estimation is neither good or bad. If you can work effectively without estimation, then go ahead and do without it. If you think you need some estimates, then make sure you understand their role in decision making. If they are going to affect significant decisions then go ahead and make the best estimates you can. Above all be wary of anyone who tells you they are always needed, or never needed. Any arguments about use of estimation always defer to the agile principle that you should decide what are the right techniques for your particular context.
見積もり自体は、いいとか悪いとかいうものではない。
見積もりなしでもうまく作業をこなせるのなら、それでいい。見積もりなしで突っ走ればいい。
見積もりが必要だなあと思うのなら、方針を決めるにあたって自分がどんな役割を果たすのかを把握しておくことだ。
これから重大な決断を下そうとしているのなら、できる限りの見積もりをしよう。
とにかく、「見積もりはゼッタイ必要なんだ！」とか「見積もりなんてまったく無意味だね！」
なんて言う人たちには要注意だ。
見積もりの使い方についてのあらゆる議論はアジャイル原則に従う。
現状に照らし合わせて考えたときに、何が最適なテクニックなのかを判断しなければいけない。

#@ //footnote[f01][A recent read is @<href>{http://pragprog.com/magazines/2013-02/estimation-is-evil, Estimation is Evil} an excellent discussion by Ron Jeffries of the problems that estimates can cause.]
//footnote[f01][最近、@<href>{http://pragprog.com/magazines/2013-02/estimation-is-evil, Estimation is Evil}という記事を読んだ。Ron Jeffriesによるすばらしい議論で、見積もりのせいで起こり得る問題を扱っている。]

#@ //footnote[f02][I got this analogy from Ron Jeffries, although I don't have a written reference for it.]
//footnote[f02][Ron Jeffriesがかつてそう言っていたのだが、文書として書かれた出典は見つけられなかった。]

#@ //footnote[f03][This situation is an excellent example of an @<href>{http://martinfowler.com/articles/useOfMetrics.html, inappropriate use of metrics}]
//footnote[f03][これこそまさに、@<href>{http://martinfowler.com/articles/useOfMetrics.html, メトリクスの間違った使いかた}の好例だ。]

#@ //footnote[f04][Estimates and expectations: I particularly liked a comment on this by my colleague Angela Ferguson "the way that estimates set expectations is up to us - @<em>{it is poor project management (whether by project managers or other team members)} that results in a client who thinks estimates are fixed, or that raw estimates = actual effort/duration"         "I, in fact, try to practice delivery bad news on a weekly basis with my key client, even when things are travelling as expected ... 'so we're looking quite well on track now, but if we had discovered something that took longer than expected, or a requirement had blown up to be larger than expected, or we found something new and very important, what do you think the best course of action would be?' And then you explore the options - cut stories, add time, add capacity, etc. This means that when the expected unexpected thing happens (because we know it will happen), the conversation doesn't seem new and scary to the client."]
//footnote[f04][見積もりと期待値：この件に関して私が特に気に入っているのは、同僚のAngela Fergusonのこんなコメントだ。「見積もりに対してどんな期待をするのかは、その人しだい。見積もりが絶対に変わらないものだと思い込んだり、見積もりが実際の工数や所要時間と完全に一致すると思い込んでいたりするのは@<em>{プロジェクト管理が（マネージャーにとってもチームのメンバーにとっても）うまくできていない}せいよ」「私は実際のところ、週に一度のペースで顧客に悪いお知らせをしに行っているわ。たとえ万事うまく進んでいたとしてもね。『今のところは順調に進んでいます。でも、もし予想より時間がかかるような作業が見つかったり要件に変更があったり、当初の見積もりで見落としていた大事なことを発見したりしたら、どうしたらいいと思いますか？』で、選択肢を示すの。機能を削るとか、納期を延ばすとか、要員を追加するとかね。常日頃からそんなふうに接していると、想定される不測の事態（ええ、きっと発生するって知ってる）が起こったときにもお客様は慌てずに済むってわけ」]

#@ //footnote[f05][Very roughly people feel twice as much pain for a loss as pleasure for a gain.]
//footnote[f05][ざっくり言うと、うまくいかないときの残念管はうまくいっているときの満足感の倍くらいにはなる。]

#@ //footnote[f06][If you do this an approach like @<href>{http://martinfowler.com/bliki/ThrownEstimate.html, ThrownEstimates} can help the discussion move at a good pace.]
//footnote[f06][そんなときには、@<href>{http://martinfowler.com/bliki/ThrownEstimate.html, ThrownEstimates}みたいなやりかたを使えば、議論を進める助けになるだろう。]

#@ //footnote[f07][Of course breaking work down into small units requires some implicit estimation, but that's really a different animal to the more common explicit estimation activity.]
//footnote[f07][もちろん、作業を小さな単位に分割する時点で、何らかの見積もり的なものは必要になる。でもそれは、見積もりと聞いて一般的に思い浮かべるそれとはまったく異なる代物だ。]

#@ //footnote[f08][James Shore has a recent blog post that @<href>{http://www.jamesshore.com/Blog/Estimation-and-Fluency.html, details his observations} about how fluency influences estimation practice. I think a similar analysis of practices at various stages of fluency could be very useful.]
//footnote[f08][James Shore has a recent blog post that @<href>{http://www.jamesshore.com/Blog/Estimation-and-Fluency.html, details his observations} about how fluency influences estimation practice. I think a similar analysis of practices at various stages of fluency could be very useful.]

#@ Acknowledgements
== Acknowledgements

#@ I repeat myself again in thanking varous ThoughtWorkers on internal lists for their comments. In particuarly I'd like to call out Angela Ferguson, Dave Pattinson, and Pat Kua. I should also thank James Shore for responding so rapidly and well for my question about the links to the fluency model.
I repeat myself again in thanking varous ThoughtWorkers on internal lists for their comments. In particuarly I'd like to call out Angela Ferguson, Dave Pattinson, and Pat Kua. I should also thank James Shore for responding so rapidly and well for my question about the links to the fluency model.
