#@# \chapterwithauthor{Evan Prodromou}{Everyone Else Might Be Wrong, But Probably Not}
= Everyone Else Might Be Wrong, But Probably Not

@<href>{https://github.com/Open-Advice/Open-Advice/blob/master/ideasinnovation/ArmijnHemel.tex, The original text} (licenced under CC-BY-SA)

//flushright{
Evan Prodromou
//}

#@# \authorbio{Evan Prodromou is the founder of Wikitravel, StatusNet and the Open Source social
#@# network Identi.ca. He has participated in Open Source software for 15 years as a
#@# developer, documentation writer, and occasional bomb-throwing crank. He lives in
#@# Montreal, Quebec.}
//lead{
Evan Prodromouは、WikitravelやStatusNet、そしてオープンソースのソーシャルネットワークであるIdenti.caを立ち上げた。
15年にわたり、開発者やドキュメント書きとしてオープンソースソフトウェアに関わっている。時には炎上の種となることもある。
ケベック州モントリオール在住。
//}

#@# \noindent{}The most important characteristic of the Open Source project founder, in the
#@# first weeks or months before releasing their software into the world, is
#@# mule-headed persistence in the face of overwhelming factual evidence. If your
#@# software is so important, why has someone else not written it already? Maybe it is not even possible. Maybe nobody else wants what you are making. Maybe you are not good enough to make it. Maybe someone else already did, and you are just not good enough at Googling to find it.
//noindent
オープンソースプロジェクトのトップが、ソフトウェアを世に送り出す直前に考えなければいけないことがある。
どうしようもない現実を前にした、頑固なまでのこだわりだ。
こいつがそんなにすばらしいソフトウェアなのだとしたら、いったいなぜ他の人はこれまで手がけなかったんだろう？
他の人たちにはそもそも不可能だったのかもしれない。
こんなソフト、誰も欲しがっていないのかもしれない。
そもそも自分にもうまく作れていないのかもしれない。
あるいは、他の人がもう作っているけど、自分のググり力が弱いせいで発見できていないだけかもしれない。

#@# Keeping the faith through that long, dark night is hard; only the most
#@# pig-headed, opinionated, stubborn people make it through. And we get to exercise
#@# all our most strongly-held programmer's opinions. What is the best programming
#@# language to use? Application architecture? Coding standards? Icon colors?
#@# Software license? Version control system? If you are the only one who works on
#@# (or knows about!) the project, you get to decide, unilaterally.
長く辛い夜、信念を貫き続けるのはたいへんで、頑固で意固地な、強い人だけが成し遂げられることだ。
そして私たちは、頑固なプログラマーたちのいろんな意見に振り回されることになる。
最高のプログラミング言語はどれ？
アプリケーションのアーキテクチャは？
コーディング規約は？
アイコンの色は？
ライセンスはどうする？
バージョン管理システムは？
もしそのプロジェクトの中で自分だけが作業をしている（自分だけしかわからない）のなら、これらはすべて自分で決めなければいけない。

#@# When you eventually launch, though, that essential characteristic of stubborn
#@# determination and strong opinion becomes a detriment, not a benefit. Once you have launched, you will need exactly the opposite skill to make compromises to make your software more useful to other people. And a lot of those compromises will feel really wrong.
笑ってるかもしれないけど、本質的に頑固で意地っ張りという性質は、害になりこそすれ得になることはない。
いざプロジェクトが立ち上がったら、必要なのはその正反対のスキルだ。みんなにとって使いやすいソフトウェアにするためには、妥協が必要になる。
妥協するって、ホントに気分が悪いものだよ。

#@# It is hard to take input from ``outsiders'' (e.g., people who are not you). First, because they focus on such trivial, unimportant things -- your variable naming convention, say, or the placement of particular buttons. And second, because they are invariably wrong -- after all, if what you have done is not the right way to do it, you would not have done it that way in the first place. If your way was not the right way, why would your code be popular?
「外部の人たち」（要するに、他人）の声を取り入れるのって、難しい。
だってあいつらって、ホントにどうでもいいことばっかり気にするんだから。
ほら、変数の命名規則だとかボタンを表示する場所だとかさ。
それにあいつらって、いつも間違ったことを言う。
「そのやり方っておかしいんじゃない？」とか言ってくるけど、やり方がおかしかったのならそもそもここまでできあがらなかったはずじゃないか。

#@# But ``wrong'' is relative. If making a ``wrong'' choice makes your software more
#@# accessible for end users, or for downstream developers, or for administrators or
#@# packagers, is that not really right?
でも「間違い」って、相対的なものなんだ。
もし「間違った」選択をしたせいで、エンドユーザーや開発者やパッケージ作者などにとってそのソフトウェアが使いやすくなるのだとしたら、
それって本当に「間違い」なのだろうか？

#@# And the nature of these kind of comments and contributions is usually negative.
#@# Community feedback is primarily reactive, which means it is primarily critical.
#@# When was the last time you filed a bug report to say, ``I really like the
#@# organization of the hashtable.c module.'' or ``Great job on laying out that
#@# sub-sub-sub-menu.''? People give feedback because they do not like the way things work right now with your software. They also might not be diplomatic in
#@# delivering that news.
この手のコメントや貢献って、本質的にネガティブなものだ。
コミュニティからのフィードバックはそもそも受け身なもの。つまり、批判的なものだということだ。
自分がバグレポートをするときのことを思い起こしてみよう。
「このhashtable.cの構造って、最高にイカしているよなあ」とか「このメニュー項目をこんな奥深くの階層に置いたのは、すばらしい判断だなあ」
などと思ったことが、一度でもあっただろうか。
人がフィードバックを送るときっていうのは、基本的にそのソフトウェアについて気に入らないところがあるときだろう。
気を遣ってやわらかい言い回しで報告してくれるとも限らない。

#@# It is hard to respond to this kind of feedback positively. Sometimes, we flame
#@# posters on our development mailing lists, or close bug reports with a sneer and
#@# a WONTFIX. Worse, we withdraw into our cocoon, ignoring outside suggestions or
#@# feedback, cuddling up with the comfortable code that fits our preconceptions and
#@# biases perfectly.
この手のフィードバックに、前向きに対応するのは難しい。
開発者向けメーリングリストでちょっとした炎上を引き起こしたり、
バグレポートに対して、あざ笑いながら「WONTFIX」と対応したりしてしまうこともある。
さらにまずいのは、自分の殻に引きこもってしまって一切の提案やフィードバックを無視し、
自分の期待通りのコードを必死で守ろうとしてしまうことだ。

#@# If your software is just for you, you can keep the codebase and surrounding
#@# infrastructure as a personal playground. But if you want your software to be
#@# used, to mean something to other people, to (maybe) change the world, then
#@# you are going to need to build up a thriving, organic community of users, core
#@# committers, admins and add-on developers. People need to feel like they own the
#@# software, in the same way that you do.
もしそのソフトウェアが自分専用なのだったら、コードベースや基盤まわりを自分好みに保てる。
でも、もしそのソフトウェア他の人につかってもらいたいとか、それで世界を変えたいとか思っているのなら、
コミュニティを育てる必要がある。ユーザーやコアコミッター、管理者、そしてアドオンの開発者などをまとめていくわけだ。
彼らもまた、自分たちがそのソフトウェアを育てているのだと考えたいものだ。

#@# It is hard to remember that each one of those dissenting voices is the tiny
#@# corner of the wedge. Imagine all the people who hear about your software and
#@# never bother to try it. Those who download it but never install it. Those who
#@# install it, get stuck, and silently give up. And those who do want to give you
#@# feedback, but can not find your bug-report system, developers mailing list, IRC
#@# channel or personal email address. Given the barriers to getting a message
#@# through, there are likely about 100 people who want to see change for
#@# every one person to get the message through. So listening to those voices, when
#@# they do reach you, is critical.
なかなか意識しづらいことだが、こういった批判的なフィードバックは、実は大勢のうちのほんの一握りでしかない。
あなたのソフトウェアの噂を聞いたけれど、結局試そうともしなかった人だっているだろう。
とりあえずダウンロードして、それで満足してしまっている人だっている。
インストールしてはみたものの、うまく使いこなせなくて、それっきりほったらかしの人もいるだろう。
フィードバックをしようとしているのに、バグ報告システムやメーリングリスト、IRCなどの連絡先を見つけられない人もいる。
こういった障害があることを考えると、手元に届いた意見のそれぞれについて、同じことを考えている人が
少なくとも100人くらいはいると見ておくべきだ。
なので、手元に届いた声にはきちんと耳を傾けることが大切だ。

#@# The project leader is responsible for maintaining the vision and purpose of the
#@# software. We can not vacillate, swinging back and forth based on this or that
#@# email from random users. And if there is a core principle at stake, then, of
#@# course, it is important to hold that core steady. No one else but the project
#@# leader can do that.
プロジェクトリーダーには、ソフトウェアのビジョンや目的を維持し続けるという任務がある。
あちこちのいろんなユーザーからのメールに振り回されて、土台が揺らいでしまってはいけない。
そして、もし中核となる原則が脅かされているのならば、もちろんそれを守ることが重要だ。
それができるのは、プロジェクトリーダーをおいて他にいない。

#@# But we have to think: are there non-core issues that can make your software more
#@# accessible or usable? Ultimately the measure of our work is in how we reach people, how our software is used, and what it is used for. How much does our personal idea about what is ``right'' really matter to the project and to the community? How much is just what the leader likes, personally? If those non-core issues exist, reduce the friction, respond to the demand, and make the changes. It is going to make the project better for everyone.
でも、考えないといけない。中核となる課題以外のものの中に、ソフトウェアをより使いやすくできるものがないだろうか？
結局のところ、私たちの作業の評価基準は、それがどれだけ人々に届いたのかやそのソフトウェアがどれだけの人にどのように使われたのかということだ。
「こうあるべき」みたいなアイデアが、いったいそのプロジェクトやコミュニティに対してどれだけ影響するものなのだろう？
リーダーの個人的な好みにすぎないのでは？
もし中核となる課題以外のものの中にそういったものがあれば、摩擦を減らして要求に応え、変化させていこう。
そうすることで、みんなにとってよりよいプロジェクトになるだろう。
