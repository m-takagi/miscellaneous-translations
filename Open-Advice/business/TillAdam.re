#@# \chapterwithauthor{Till Adam}{Free Software in Public Administrations}
= 行政におけるフリーソフトウェア

@<href>{https://github.com/Open-Advice/Open-Advice/blob/master/business/TillAdam.tex, The original text} (licenced under CC-BY-SA)

//flushright{
Till Adam
//}

#@# \authorbio{Originally from a liberal arts and music background, Till Adam has spent the
#@# last decade or so in software. He works at KDAB where he directs services, including
#@# the company's Free Software activities. Till also serves on the board of directors
#@# of Kolab Systems AG, a company with a pure Free Software business model.
#@# He lives with his wife and daughter in Berlin.}
//lead{
リベラルアーツや音楽の背景を持つTill Adamは、この10年ほどはソフトウェアに関わっている。
KDABに勤務する彼は、同社のフリーソフトウェア活動を含むサービスを指揮している。
Tillはまた、Kolab Systems AGの役員も務める。同社は、純粋にフリーソフトウェアのビジネスモデルだけで活動している企業だ。
妻と娘とともに、ベルリンに住んでいる。
//}

#@# \section*{Introduction}
== Introduction

#@# Like, I imagine, many of the other authors in this collection of essays I
#@# started contributing to Free Software when I was a student. I had decided
#@# relatively late in life to pursue a degree in Computer Science (having failed
#@# to become rich and famous as a musician) and was expecting to be quite
#@# a bit older than my peers when I graduated. So I thought it would be good
#@# to teach myself programming, which I was not getting much of at
#@# school, to become more attractive to future employers, despite my age.
#@# After some forays into various smaller communities I eventually found my way
#@# into KDE and started working on the email application. Thanks to
#@# the extremely helpful and technically brilliant group of people I met there I
#@# was able to learn quickly and contribute meaningfully to the code base, getting
#@# sucked more and more into both the social circle and the fascinating technical
#@# problem space of personal information management.
他の寄稿者の多くもきっと同じだろうが、私が最初にフリーソフトウェアに関わり始めたのは、学生のころだった。
私が計算機科学を専攻することを決めたのは、他の人に比べると少し遅めだった（ミュージシャンになって大もうけするっていう夢が絶たれた後だった）ので、
周りの人たちよりも卒業が遅れるであろうことが予想できた。
そこで、プログラミングを自習することを思いついた。学校ではあまりプログラミングを教わっていないし、
就職活動を進めるためには、もっとプログラミングを勉強しておいたほうがいいと思ったんだ。
小さめのコミュニティでの活動を積み重ねた後、最終的にKDEのコミュニティに参加して、メールアプリケーションに関わるようになった。
そこで出会った人たちはみな親切で、技術的にも優れていた。彼らからいろいろ学んだおかげで、すぐにコードベースに貢献できるようになった。
そして、ソーシャルなつながりや、個人情報管理に関する技術的な問題空間に、より深くのめり込むことになった。

#@# When KDAB, a company full of KDE people, asked me whether I wanted to help out
#@# with some commercial work that was being done, as a student job, I was of
#@# course thrilled to be able to combine making a living with my hobby of hacking
#@# on KDE software. Over the years I then witnessed the adoption of KDE's personal
#@# information management frameworks and applications by the public sector,
#@# particularly in Germany, first hand and saw KDAB's business in this area grow.
#@# As I transitioned into more coordinative roles it eventually became part of my
#@# job to effectively sell and deliver services based on Free Software including KDE's products
#@# to large organizations, particularly in the public sector.
KDABは、KDEに関わる人たちだけでできた会社だった。
商用事業の手伝いをするアルバイトをKDABから紹介されたとき、それはもう興奮した。
KDEのソフトウェアをハックしながら生活できるなんて、夢のような環境じゃないか。
それから時を経て、私はKDEの個人情報管理フレームワークやアプリケーションが行政に採用されていく様を目の当たりにした。
特にドイツでの採用が広まり、KDABも行政分野での業績を伸ばしていった。
私の業務が諸々の調整に関わることに変わっていたこともあり、
KDEのプロダクト群を含むフリーソフトウェアを使ったサービスを、行政などの大規模組織に売り込むのが私の仕事のひとつとなった。

#@# It should be noted that much of the project work this text reflects upon was done in
#@# cooperation with other Free Software businesses, namely g10code, the
#@# maintainers of GNUPG and cryptography specialists, and Intevation, a consultancy focused
#@# entirely on Free Software and its strategic challenges and opportunities. Especially
#@# Bernhard Reiter, one of Intevation's founders, was instrumental to the selling and
#@# running of many of these projects and whatever morsels of wisdom this text might contain
#@# are likely products of his analysis and my many conversations with him over the years.
特筆すべき点は、この文でとりあげているプロジェクトの多くが、他のフリーソフトウェア企業との共同ビジネスだったということだ。
GNUPGのメンテナや暗号学のスペシャリストを抱えるg10code、そしてフリーソフトウェアとその戦略的な挑戦や機会に主眼を置くコンサルタント業であるIntevationなどだ。
特に、Intevationの創業者のひとりであるBernhard Reiterには助けられた。
この文で紹介するプロジェクトやさまざまな知恵は、彼による分析や、彼との長年の会話の産物だといってもいいだろう。

#@# So if Bernhard and I could travel back in time and share insights with our younger, more
#@# naïve selves, what would those insights be? Well, it turns out they all start with the
#@# letter 'P'.
Bernhardと私がその当時に戻って、若い人たちに自分たちの経験を伝えられるとしたら、いったいどんなことを話すだろうか？
たぶん、こんなことだろう。全部、「P」から始まるものだ。

#@# \section*{People}
== People（人）

#@# As things stand today it is still harder for IT operations people and decision
#@# makers to use Free Software than it is to use proprietary alternatives. Even in
#@# Germany, where Free Software has relatively strong political backing, it is
#@# easier and safer to suggest the use of something that is perceived as ``industry
#@# standard'' or ``what everyone else does''; proprietary solutions, in other words.
#@# Someone who proposes a Free Software solution will likely face opposition by
#@# less adventurous (or more short-sighted) colleagues, close scrutiny by
#@# superiors, higher expectations with respect to the results and unrealistic
#@# budget pressure. It thus requires a special breed of person willing to take
#@# personal risks, go out on a limb, potentially jeopardize career progress and
#@# fight an uphill battle. This is of course true in any organization, but in a
#@# public administration special persistence is required because things move
#@# generally more slowly and an inflexible organizational hierarchy and limited
#@# career options amplify the issue.
今もなお、IT運用担当者や意思決定者たちにとって、フリーソフトウェアの採用はプロプライエタリな製品に比べてハードルが高い。
フリーソフトウェアを政府が強く後押ししているドイツでさえ、「業界標準の」「みんなが使っている」
（要するに、プロプライエタリな）ソリューションの採用に流れてしまいがちだ。
フリーソフトウェアのソリューションを誰かが提案すると、きっと、冒険心がない（というか、長期的な視点に欠けた）同僚からの反対を受けることになる。
非現実的な予算で結果を出すよう迫られている上司からは、厳しいチェックが入るだろう。
フリーソフトウェアの導入には、特殊な人種が求められる。
個人的にリスクをとって、不利な状況に負けず、
自分のキャリアに傷が付くのも恐れずに戦えるような人たちだ。
どんな組織でも同様だろうが、行政の分野では、特に粘り強さが求められる。
ものごとを進める速度が全般的に遅めだし、組織体系も硬直しているし、
組織内でのキャリアパスも限られているからだ。

#@# Without an ally on the inside it can be prohibitively difficult to get
#@# Free Software options seriously considered. If there is such a person, it is important
#@# to support them in their internal struggles as much as possible. This
#@# means providing them with timely, reliable and verifiable information about
#@# what goes on in the community the organization intends to interface with,
#@# including enough detail to provide a full picture but reducing the
#@# complexity of the communication and planing chaos that is part of the Free
#@# Software way of working, at times, such that it becomes more manageable and
#@# less threatening. Honesty and reliability help to build strong
#@# relationships with these key people, the basis of longer term success. As
#@# their interface to the wondrous and somewhat frightening world of Free
#@# Software communities they rely on you to find the paths that will carry
#@# them and their organization to their goals and they make decisions largely
#@# based on personal trusts. That trust has to be earned and maintained.
内部に仲間がいなければ、フリーソフトウェアを使うという選択肢はとても検討しづらいかもしれない。
もし仲間になってくれそうな人がいたら、その人がうまく動けるように、可能な限り手助けをしてやることが大切だ。
その組織がかかわろうとしているコミュニティの動きに関する、信頼できる検証可能な情報をタイムリーに提供したりするのも、その手助けのひとつだ。
詳細な情報が伝われば、その全体像が把握できるようになる。
また、フリーソフトウェアの世界でありがちな、複雑なコミュニケーションや無秩序な状態を、平坦にすることもできる。
より扱いやすくなり、恐れずに済むようになるのだ。
正直であること、そして誠実であることが、こういった人たちとの良好な関係を築くための鍵になる。長期的な成功には、良好な関係を築くことが欠かせない。
驚くべき（そして、多少得体の知れない）世界であるフリーソフトウェアコミュニティとの架け橋として、彼らはあなたを頼ることになる。
彼らが目標に向かうための判断を下す基準は、結局のところは個人的な信頼だ。
信頼を勝ち得て、それを手放さないようにしたい。

#@# In order to achieve this, it is important to focus not only on achieving
#@# the technical results of projects, but also keep in mind the broader personal and organizational
#@# goals of those one is dealing with. Success or failure of the current
#@# project might not depend on whether an agency's project manager can show off
#@# only marginally related functionality to superiors at seemingly random points
#@# in the schedule, but whether the next project happens or not might. When you have
#@# few friends, helping them be successful is a good investment.
そのために重要なのは、プロジェクトの技術的な目標を達成することだけを目指すのではなく、
人的な目標や組織的な目標についても常に気に掛けておくということだ。
現在のプロジェクトの成否は、プロジェクトマネージャーが上司に対して、
一見ランダムに見えるものの間に少しでも関連のあるような機能を、
スケジュール内に提示できるか否かに関わっているわけではない。
成否の鍵になるのは、次のプロジェクトが立ち上がるか否かだ。
組織内に友人がいるのなら、彼らが成功するように手助けをすると、後で役立つだろう。

#@# \section*{Priorities}
== Priorities（優先順位）

#@# As technologists, Free Software people tend to focus on the things that are
#@# new, exciting and seemingly important at a technology level. Consequently we
#@# put less emphasis on things that are more important in the context of an (often
#@# large) public administration. But consider someone wanting to roll out a
#@# set of technologies in an organization that intends to stick with it for a long
#@# time. Since disruptive change is difficult and expensive, it is far more
#@# important to have documentation of the things that will not work, so they can
#@# be avoided or worked around, than it is to know that some future version will
#@# behave much better. It is unlikely that that new version will ever be
#@# practically available to the users currently under consideration, and it is far
#@# easier to deal with known issues pro-actively than to be forced to react to
#@# surprises.  Today's documented bug is, ironically, often preferable to
#@# tomorrow's fix with unforeseeable side effects.
技術者として、フリーソフトウェア界の人たちの多くは、
目新しくてわくわくする、技術面で重要だと思われるようなものを重視する傾向がある。
そのため、行政の分野においてはもっと重要だとされるものを、軽視してしまうことがある。
しかし、長期にわたってその技術を使おうとしている組織に向けて、技術を広めようとしている人のことを考えてみよう。
段階を踏まない一気の変更は難しいし高くつくので、
うまく動かないことについてもきちんとしたドキュメントを作ることが重要だ。そうすれば、回避策をとることもできる。
将来のバージョンではきちんと動くはずと知らされるよりも、そのほうが重要である。
新しいバージョンを、いま採用を検討中のユーザーが実際に使えるようになることはほとんどない。
それよりは、既知の問題を把握した上で対処していくほうが、ずっと楽だ。
皮肉なことだが、今のバグについてきちんと文書化されていることのほうが、
予測不能な副作用つきで明日そのバグが修正されるよりも、ずっと好ましい。

#@# In a large organization that uses software for a long time, the cost of acquiring
#@# the software, be it via licenses or as part of contracted custom development of
#@# Free Software, pales in comparison to the cost of maintaining and supporting it.
#@# This leads to the thinking that fewer, more stable features, which cause less load
#@# on the support organization and are more reliable and less maintenance intensive
#@# are better than new, complex and likely less mature bells and whistles.
大規模な組織で長期間にわたってソフトウェアを使用する場合、そのソフトウェアを入手するためのコスト
（ライセンス料金、あるいはフリーソフトウェアのカスタム開発の契約など）は、
その後の保守やサポートのコストに比べると、取るに足らないものだ。
そのため、目新しくて複雑だが成熟していない機能だらけなものよりも、
機能は限られていてもより安定したもののほうが好まれる。
そのほうがサポート部門の負荷も減るし、信頼性が高くなって、保守について余計な心配がいらなくなる。

#@# While both of these sentiments run counter to the instincts of Free Software
#@# developers, it is these same aspects that make it very attractive for the
#@# public sector to contract the development of Free Software, rather than
#@# spending the money on licenses for off-the-shelf products. Starting from a
#@# large pool of freely available software, the organization can invest the
#@# budgets it has into maturing exactly those parts that are relevant for its own
#@# operations. It thus does not have to pay (via license costs) for the development of
#@# market driven, fancy features it will not need. By submitting all of that work
#@# back upstream into the community, the longer term maintenance of these
#@# improvements and of the base software is shared amongst many. Additionally,
#@# because all of the improvements become publicly available, other
#@# organizations with similar needs can benefit from them with no
#@# additional cost, thus maximizing the impact of tax payer money,
#@# something any public administration is (or should be) keen to do.
これらの感情はどちらも、フリーソフトウェア開発者の本能には反する。
しかし、これらの側面のおかげで、行政にとってフリーソフトウェア開発者との契約が魅力的なものとなる。
パッケージ製品のライセンスに金を出すよりも、そのほうが価値があると感じるからだ。
自由に使えるソフトウェア群を元に、
自分たちの業務に関連する部分に資金をつぎ込んで、成熟させていくことができる。
マーケット主導で開発された、誰も使わないような機能の開発のために、（ライセンス料金という形で）金を払う必要はない。
フリーソフトウェアに関する作業をアップストリームのコミュニティに還元すれば、
その改修部分の長期的なメンテナンスも多くの人たちと共有できる。
さらに、改修した部分はすべて一般に公開されるので、同じようなニーズのある他の組織は、
コストをかけずにそれを活用できる。納税者たちから集めた資金を最大限に活用できるというわけだ。
これは、あらゆる行政組織が求めていることだろう。

#@# \section*{Procurement}
== Procurement（調達）

#@# So, if it is so clearly better use of IT budgets for government agencies to invest
#@# into the improvement of Free Software and into the tailoring of it to its needs, why is it
#@# so rarely done? Feature parity for many of the most important kinds of software has
#@# long been reached, usability is comparable, robustness and total cost of ownership
#@# as well. Mindshare and knowledge are of course still problems, but the key practical obstacle
#@# for procurement of Free Software services lies in the legal and administrative
#@# conditions under which it must happen. Changing these conditions requires work
#@# on a political and lobby level. In the context of an individual project it is
#@# rarely possible. Thankfully organizations like the Free Software Foundation Europe and
#@# its sister organization in the US are lobbying on our behalf and slowly effecting
#@# change. Let's look at two central, structural problems.
政府機関によるIT予算の使い道は、フリーソフトウェアの改良に投資して、自分たちのニーズにあわせて手を加えるのがよさそうだ。
それははっきりしているのに、なぜ実際にそうしているところが少ないのだろう？
機能的には十分なレベルに到達しているし、使い勝手も見劣りしない。
堅牢性や総所有コストもしかり。
もちろん意識共有や知識の面ではまだ問題はあるが、
フリーソフトウェアのサービスを調達する際に現実的な障害となるのは、
法的・制度的な問題だ。これは避けられない。
こういった状況を変えるには、政治的な活動やロビー活動も必要だ。
個々のプロジェクトレベルでは実現できない。
ありがたいことに、Free Software Foundation Europeや、米国にあるその姉妹組織のようなところが私たちにかわってロビー活動を行っており、
徐々に動きは出始めている。
ここでは、主要な構造的問題を二つ見ていこう。

#@# \paragraph*{Licenses, not Services}
=== サービスではなく、ライセンス

#@# Many IT budgets are structured such that part of the money is set aside
#@# for the purchase of new software or the continued payment for the use of software
#@# in the form of licenses. Since it was unimaginable to those who structured these
#@# budgets that software could ever be anything but a purchasable good, represented
#@# by a proprietary license, it is often difficult or impossible for the IT decision
#@# makers to spend that same money on services. Managerial accounting will simply not hear of it.
#@# This can lead to the unhappy situation that an organization has the will and the
#@# money to improve a piece of Free Software to exactly suit its needs, deploy and run
#@# it for years and contribute the changes back to community, yet the plan can not
#@# go forward unless the whole affair is wrapped in an artificial and unnecessary sale
#@# and purchase of an imaginary product based on the Free Software license.
IT関連の予算の多くは、新しいソフトウェアを購入したり、
ソフトウェアの使用料金をライセンス料などの形で支払ったりといったことにつぎ込まれている。
予算を立てる人たちは、何かを買ったりライセンス料金を支払ったりといったこと以外でソフトウェアにお金がかかるなんて、
思ってもいないことが多い。サービスに対してお金を出すという概念がないんだ。
決算でも、そんなことが出てきたためしがない。
これは、あまり好ましくない状況につながる。
組織がフリーソフトウェアに資金を投入して、自分たちのニーズにあわせ、
その成果をコミュニティに還元したいところだが、そのためには、
フリーソフトウェアライセンスに基づいた仮想的な製品の購入と販売といった形をとる必要がある。

#@# \paragraph*{Legal Traps}
=== 法律の罠

#@# Contractual frameworks for software providers often assume
#@# that whoever signs up to provide the software fully controls all of the involved
#@# copyrights, trademarks and patents. The buying organization expects to be indemnified against various
#@# risks by the provider. In the case of a company or an individual providing a solution
#@# or service based on Free Software that is often impossible since there are other
#@# rights holders that can not reasonably be involved in the contractual arrangement.
#@# This problem appears most pointedly in the context of software patents. It is practically
#@# impossible for a service provider to insure against patent litigation risks which makes
#@# it very risky to take on the full responsibility.
ソフトウェアを提供する側にとっての契約の枠組みでは、
ソフトウェアを提供する側が、著作権や商標そして特許などを完全にコントロールすることが前提になっていることが多い。
購入側の組織は、さまざまなリスクを提供側が保証してくれることを期待ししている。
フリーソフトウェアを使ったソリューションやサービスを提供している企業（あるいは個人）の場合は、それが無理であることが多い。
契約に組み込めないような第三者が権利を持っていることが多いからだ。
この問題は、ソフトウェア特許の面で現れることが多い。
サービスプロバイダにとって、特許に関する訴訟リスクに備えるのはほぼ不可能だ。
すべての責務を負うのは非常にリスキーである。

#@# \section*{Price}
== Price（価格）

#@# Historically, the key selling point of Free Software that has been communicated
#@# to the wider public has been its potential to save money.
#@# Free Software has indeed made large scale cost
#@# saving possible in many organizations and for many years now.
#@# The GNU/Linux operating system has spearheaded this development.
#@# Because of its free availability for download was perceived in stark contrast
#@# to the expensive licenses of its main competitor, Microsoft Windows.
#@# For something as
#@# widely used and useful as an operating system, the structural cost benefit of
#@# development cost put onto many shoulders is undeniable.  Unfortunately the
#@# expectation that this holds true for all Free Software products has led to the
#@# unrealistic view that using it will always, immediately and greatly reduce
#@# cost. In our experience, this is not true. As we have seen in earlier sections
#@# it does make a lot of sense to get more out of the money spent using Free
#@# Software and it is likely that over time and across multiple organizations
#@# money can be saved, but for the individual agency looking to deploy a piece of
#@# Free Software there will be an upfront investment and cost associated with
#@# getting it to the point of maturity and robustness required.
歴史的に見て、フリーソフトウェアを広めるときの売り文句としてポイントなのは、お金を節約できるかもということだ。
実際、フリーソフトウェアのおかげで大幅なコスト削減を果たした組織も、これまでに多い。
GNU/Linuxは、その最大の原動力だろう。
自由にダウンロードして使えるという点が、競合であるMicrosoft Windowsの高価なライセンスとは対象的だった。
幅広く使われている有用なオペレーティングシステムを使うことによる、
開発の構造的な費用便益は、否定できない。
残念なことに、すべてのフリーソフトウェアに対して、同じように期待されてしまっていて、
コストをすぐにでも大幅に減らせると思い込んでしまっている。
経験上、さすがにそれはない。
先ほど見たように、フリーソフトウェアを使うことで様々なものを得られることは確かだし、
これまでにもさまざまな組織が資金の節約を実現してきた。
しかし、これからフリーソフトウェアを導入しようと考えている機関は、
求められる成熟度や堅牢性を得るために、先行投資のコストがかかる。

#@# While this seems entirely reasonable to IT operations
#@# professionals it is often harder to convince their superiors with budget power
#@# of this truth. Especially when potential cost saving has been used as an
#@# argument to get Free Software in the door initially it can prove very
#@# challenging to effectively manage expectations down the road. The earlier the
#@# true cost and nature of the investment is made transparent to decision makers,
#@# the more likely they are to commit to it for the long haul.
#@# High value for money is still attractive and a software services provider that will
#@# not continue to be available because the high price pressure does not yield
#@# sufficient economic success is as unattractive in Free Software as it is in
#@# proprietary license based business models. It is thus also in the interest of the
#@# customers that cost estimations are realistic and the economic conditions of the
#@# work being done are sustainable.
IT部門の関係者にとっては極めてまっとうなことだと思えるのだが、上司を説得して予算を確保するのはとても難しい。
特に、「コストを削減できるから」という名目でフリーソフトウェアを導入した場合などは、
その期待をうまく軟着陸させるのはたいへんだ。
ほんとうのコストやその投資の性質を意思決定者に見せるのが早ければ早いほど、長期的なことを考えて受け入れてくれる可能性も高くなる。
お金の価値は魅力的であり、高値をつけるプレッシャーに迫られて存続できなくなるソフトウェアサービスプロバイダーは、
経済的にあまり魅力のないフリーソフトウェアよりもプロプライエタリなライセンスベースのモデルに走ってしまう。
コストの見積もりが現実的であること、そして作業を持続可能な経済的条件であることは、顧客にとっても大切なこととなる。

#@# \section*{Conclusion}
== 結論

#@# Our experience shows that it is possible to convince organizations in
#@# the public sector to spend money on Free Software based services. It is
#@# an attractive proposition that provides good value and makes political
#@# sense. Unfortunately structural barriers still exist, but with the help
#@# of pioneers in the public sector they can be worked around. Given
#@# sufficient support by us all, those working for Free Software on a political
#@# level will eventually overcome them. Honest and clear
#@# communication of the technical and economic realities can foster
#@# effective partnerships that yield benefits for the Free Software community,
#@# the public administrations using the software and those providing them
#@# with the necessary services in an economically viable, sustainable way.
私たちの経験は、行政分野の組織で会っても、フリーソフトウェアベースのサービスに資金を投入させることが可能だということを示している。
フリーソフトウェアベースのサービスは、魅力的な提案であり、価値があって、政治的にも理にかなっている。
残念ながら、組織的な障壁は残っている。しかし、先駆者達の力を借りれば何とか対応できる。
私たちが十分なサポートを提供すれば、政治的なレベルでフリーソフトウェア活動をしている人たちも、その障壁を乗り越えられるだろう。
技術的にも経済的にも、正直で明確なコミュニケーションを心がければ、よい関係を築ける。
そしてそれは、フリーソフトウェアコミュニティにも利益をもたらすだろうし、
フリーソフトウェアを利用する行政や、行政にサービスを提供する人たちにとっても、
経済的に理にかなった、持続可能な方法で進められるようになる。

