#@# \chapterwithauthor{Thom May}{Packaging - Providing a Great Route into Free Software}
= Packaging - Providing a Great Route into Free Software

@<href>{https://github.com/Open-Advice/Open-Advice/blob/master/packaging/ThomMay.tex, The original text} (licenced under CC-BY-SA)

//flushright{
Thom May
//}

#@# \authorbio{Thom May is a Debian Developer, an emeritus Member of the Apache
#@# Software Foundation and was one of the first hires for Canonical, Ubuntu's
#@# parent company. He currently lives in London and is Head of DevOps for Macmillan
#@# Digital Science.}
//lead{
Thom MayはDebian Developerで、Apache Software Foundationの名誉メンバーだ。
また、Ubuntuの親会社であるCanonicalの創業メンバーの一員でもある。
現在はロンドン在住で、Macmillan Digital ScienceでDevOps部隊を率いている。
//}

#@# \section*{Introduction}
== はじめに

#@# I started out in Free Software over a decade ago. I had been using Debian for
#@# some years through university, and decided that I wanted to give something back.
#@# So I started the long journey through the Debian New Maintainer's process, never
#@# having really contributed to Free Software before, and concerned that a lack of
#@# experience with C would prove to be a major problem.
フリーソフトウェアの世界に関わるようになってから、既に十年以上が経過した。
大学時代にDebianを使っていて、自分も何か恩返しをしたいと思ったのがきっかけだった。
どいうわけで、最初はDebian新規メンテナプロセスに沿って進めるところから始まった。
それまではフリーソフトウェアに貢献するなんて経験はなかったし、C言語のプログラミング経験がないのは大問題じゃないのかと心配していた。

#@# As it turned out, this concern was mostly unfounded. By starting out working
#@# with packages that I used regularly I was able to contribute effectively. As my
#@# experience with the myriad of tools and systems that Debian provides to its
#@# maintainers grew, I became more efficient with my time, and was able to take on
#@# a wider range of packages.
後にわかったことだが、それはまったくの杞憂だった。
私が常用していたパッケージに関する作業を始めたが、十分に貢献できた。
Debianがメンテナに提供するツールやシステム群に慣れ親しむにつれて、私の経験も増し、
時間をより効率的に使えるようになった。そして、より数多くのパッケージに関われるようになった。

#@# Taking on more packages increased my exposure to a range of build systems,
#@# programming languages and toolkits, and also helped to bring me into the Debian
#@# community. Abrasive and opinionated though it is, Debian's community of skilled
#@# and experienced maintainers is one of the main reasons Debian has maintained its
#@# technical excellence over such a long period.
より多くのパッケージに関わることで、いろいろなビルドシステムやプログラミング言語そしてツールキットを経験できた。
そして、私がDebianコミュニティに加わる際の太助にもなった。
気むずかしくて意地っ張りなところもあるが、
優秀なメンテナが集まったDebianのコミュニティは、
Debianが長期にわたって技術的な卓越を保ち続けている理由のひとつでもある。

#@# At about this time the Apache httpd project was finally closing in on the first
#@# beta releases of httpd 2.0, which had been several years in the making and was
#@# going to be a massive upgrade. Debian's Apache team had been fairly inactive for
#@# some time -- the 1.3 packages were stable and changed infrequently -- and had no
#@# plans for packaging 2.0.
#@# I had a strong interest in ensuring that the httpd packages were well maintained
#@# -- I was working as a sysadmin in charge of numerous Apache web servers -- so it
#@# made a lot of sense to take on the challenge of producing packages for the new
#@# release.
Apache httpdプロジェクトがhttpd 2.0の最初のベータリリースを目前に控えたころのことを振り返る。
数年がかりのリリースで、かなり大きなアップグレードになりそうだった。
当時のDebianのApacheチームはあまり活発ではなく（1.3のパッケージは安定していたし、めったに変更が加わることがなかった）、
2.0のパッケージングを作る予定は何もなかった。
私は、httpdパッケージのメンテナンスが続くかどうかを気にかけていた。
というのも、自分自身、システム管理者としてあちこちでApache Webサーバーを管理していたからだ。
この新しいリリース用のパッケージの作成にチャレンジするのは、理にかなったことだった。

#@# A friend and I started work on the packages and quickly discovered that while
#@# the code was approaching an early beta quality, the tooling around the build and
#@# customization of httpd was sadly lacking, which is fairly typical for many
#@# complex software projects.
私は友人と作業を始めた。
コード自体はベータ版の品質に達していたが、httpdのビルドやカスタマイズに関するツール群が決定的に欠けていることに気づいた。
それは、複雑なソフトウェアプロジェクトでは、よくある光景だった。

#@# Over the course of the best part of a year -- whilst upstream stabilised their
#@# code and an increasing number of early adopters began to test and deploy the new
#@# release -- we worked hard to ensure that the build system was sufficiently
#@# flexible and robust to cope with the stringent requirements of Debian's policy.
#@# As well as ensuring that our packages were technically correct, we had to ensure
#@# that our relationship with upstream allowed us to get patches back upstream
#@# whenever possible, and to get a heads up whenever security issues arose and for
#@# early testing of release candidates.
ほぼ一年を費やして
（その間、アップストリームはコードを安定化させ、アーリーアダプターたちは新しいリリースを試し始めるようになっていた）
必死で作業をした結果、ビルドシステムは十分に柔軟で堅牢なものとなり、Debianの厳しいポリシーを満たすようになった。
私たちのパッケージが技術的に正確であることを保証するだけではなく、
アップストリームとの関係を良好にして、
アップストリームへのパッチをすぐに反映させてもらえたり、
セキュリティ問題や初期のリリース候補についての通知をもらえたりすることを示す必要もあった。

#@# My interactions with Apache in the course of packaging and maintaining httpd 2.0
#@# led me to become an upstream committer on the project, meaning I could
#@# contribute code directly. This is generally the final step in moving from
#@# packaging software to actively developing it for a wider audience than your
#@# distribution. On a personal level, this recognition gave me the confidence to
#@# contribute to far more Free Software projects, since I knew that my code was of
#@# sufficient quality to be welcomed.
httpd 2.0のパッケージ作成やその保守に当たる上でのApacheとのやりとりを経て、
私はアップストリームのコミッターになった。つまり、コアに直接貢献できるようになったというわけだ。
ソフトウェアのパッケージングから実際のソフトウェア開発へと進むことで、自分たちのディストリビューションだけではなく、より幅広い人たちのために役立てるようになった。
個人レベルでは、アップストリームのコミッターになったおかげで自信もつき、その他のフリーソフトウェアプロジェクトでの活動もやりやすくなった。
自分のコードが、他に受け入れられるだけのものであることがわかったからだ。

#@# \section*{Evolution - from packager to developer}
== 進化 - パッケージャーから開発者へ

#@# So how did this happen? Packaging in its simplest form ensures that a given
#@# software project complies with the policy of the distribution; in my case
#@# Debian. Generally, this means configuring the software at build time so that
#@# files are placed in the correct directory locations (specified by the File
#@# Hierarchy Standard, or FHS), that dependencies on other packages are correctly
#@# specified, and that the software runs successfully on the distribution.
どういう経緯で、パッケージャーから開発者になったのかって？
パッケージングとは、簡単に言うと、何らかのソフトウェアプロジェクトが、ディストリビューションのポリシーを満たすことを保証する作業だ。
私の場合、そのディストリビューションはDebianだった。
パッケージング作業は一般に、ソフトウェアのビルド時の設定から始まる。適切な場所（FHS：File Hierarchy Standardに沿った場所）
にファイルが収まるようにしたり、他のパッケージとの依存関係を正しく指定したりして、
対象のディストリビューション上でそのソフトウェアが正しく動くようにする。

#@# More complex packaging can require splitting an upstream project into multiple
#@# packages, for example libraries and the header files that allow the user to
#@# compile software against that library are shipped in separate packages, and
#@# platform dependent files can be shipped separately from platform independent
#@# ones. Ensuring that the upstream software correctly deploys in these situations will often require changes to the code. These changes are the first step into active work on a project, rather than the sometimes passive act of packaging.
より複雑なものになると、アップストリームのプロジェクトを複数のパッケージに分割することも必要になってくる。
たとえば、開発者向けのライブラリやヘッダファイル群だけを個別のパッケージにしたり、
プラットフォームに依存するファイルを、全プラットフォーム共通のファイルとは別のパッケージにしたりといった作業だ。
こういった場合にアップストリームのソフトウェアを正しくデプロイできるようにするには、コードに手を加える必要が出てくることが多い。
パッケージングは基本的に受け身の作業だが、このときのコードの変更は、プロジェクトに能動的に関わり始める第一歩になる。

#@# Once your package is available in the distribution it is exposed to millions of
#@# potential users. These users are guaranteed to run your software in ways that
#@# neither you, as packager, nor your upstream expected. Unsurprisingly, with many
#@# eyes come many bug reports. Debian, in common with most distributions,
#@# encourages its users to submit bug reports directly to Debian, rather than to
#@# the individual upstream projects. This allows maintainers to triage bug reports
#@# and ensure that the changes made during the packaging process are not the cause
#@# of the reported problem. Often there can be considerable interaction between the
#@# reporter of the problem and the package maintainer before the upstream
#@# developers become involved.
ひとたびパッケージが何らかのディストリビューションで公開されると、そのパッケージは何百万もの潜在ユーザーに晒されることになる。
ユーザーはきっと、パッケージャーであるあなたやアップストリームの開発者たちが思いもよらない方法で、そのソフトウェアを使おうとするだろう。
いろんな人たちの目にとまることで、バグレポートの数も増える。
他の多くのディストリビューションと同様に、Debianでも、バグレポートは（アップストリームではなく）Debianに直接送るよう推奨している。
そうしておけば、メンテナがそのバグをトリアージして、パッケージングの際に加えた変更がそのバグの原因なのかどうかを判断できる。
問題の報告者とパッケージのメンテナの間で十分なやりとりを繰り返してから、必要ならアップストリームの開発者にもそこに加わってもらう。

#@# As the package maintainer increases their knowledge of the project, they will be
#@# able to solve most problems directly. The maintainer will often release bug
#@# fixes directly into Debian in parallel with feeding them back upstream, allowing
#@# for swift problem resolution and considerable testing of fixes. Once a fix is
#@# confirmed the maintainer will then work with the upstream project to ensure that
#@# the required changes happen in the upstream, definitive project, so that they
#@# are available to other users of the software.
パッケージのメンテナがそのプロジェクトに関する知識を積み重ねていくと、たいていの問題は自分で解決できるようになる。
バグフィックスを直接Debianでリリースした上で、同時にそれをアップストリームにフィードバックすることも多い。
そうすれば、問題はすばやく解決できるし、バグ修正のテストも十分にできる。
その修正が妥当だと確認できたら、メンテナとアップストリームが協力して、アップストリームで必要となる変更を確認する。
これで、Debian以外の他のユーザーにも、その修正が行き渡るようになる。

#@# Providing successful bug fixes on distributions such as Debian is often a
#@# complex art form. Debian runs on many platforms, from IBM mainframes to smart
#@# phones, and the range and breadth of these platform swiftly reveals assumptions
#@# in the code. More often than not the packager has easier access to a broader
#@# range of platforms than upstream does, and so is the first port of call when a
#@# knotty porting problem does come up. One quickly learns to recognise the symptoms of pointer size assumptions, endianness problems, and many other esoteric issues; this experience makes one a more versatile and cautious programmer.
バグフィックスをDebianのようなディストリビューションで提供するのは、複雑な作業になることが多い。
Debianは、IBMのメインフレームからスマートフォンまでのさまざまなプラットフォーム上で動いている。
その幅広いプラットフォームのせいで、思い込みで書いてしまったコードはすぐ化けの皮がはがれてしまう。
たいていの場合、アップストリームよりもパッケージャーのほうが、幅広いプラットフォームを利用できる。
各種プラットフォームに固有の問題が見つかりやすいのは、パッケージャーの環境だ。
ポインタのサイズやエンディアンの問題、そしてその他細々した問題などが、ここで表出する。
これを経験すると、万能かつ用心深いプログラマーに近づけるだろう。

#@# As a package collects bug fixes and improvements, it is essential to feed those
#@# changes back upstream. Too often the delta between a package and the definitive,
#@# upstream software can grow enormously, with the effect that the two become
#@# almost entirely separate code bases. Not only does this increase the maintenance
#@# burden on both sides, but it can cause huge frustration and waste large amounts
#@# of time for your upstream should a user of your package report a bug related to
#@# one of the changes in the packaged version to the upstream. To this end, a close
#@# working relationship with upstream and an understanding of the best way for both
#@# parties to collaborate is vital.
バグ修正や改良をパッケージ側でとりまとめたら、それをアップストリームにもフィードバックすることが大切だ。
パッケージとアップストリームとの差分が大きくなってしまうことがありがちで、
まるでその二つが別々のコードベースであるかのようになっていることすらある。
これは、どちら側にとっても保守の負担が増すだけでなく、イライラの元にもなってしまう。
パッケージ側で加えた変更のせいで発生したバグの報告が、アップストリーム側に届いてしまったりすると、時間の無駄だ。
アップストリームとは良い関係を築き、お互いが協力し合う道を探っていこう。

#@# Collaboration between upstream and packager can take many forms. Whether it be
#@# finding the correct way to communicate bug reports, making sure you use the
#@# correct coding style, or ensuring that you both use the same version control
#@# system in the same way, making sure that your interactions are as friction-free
#@# as possible, makes for a far better relationship with upstream and a greatly
#@# increased likelihood that your upstream will take the time to help you when you
#@# need it.
アップストリームとの協力には、いろんなやりかたがある。
バグレポートをうまくやりとりする方法を見つけ出したり、
パッケージャー側が適切なコーディングスタイルを使うことを心がけたり、
両者が同じバージョン管理システムを同じ方法で使うようにしたりして、
お互いのやりとりで摩擦が発生しないようにしよう。
そうすれば、アップストリームとの関係はずっとすっきりしたものとなり、
助けが必要になったときにもアップストリームが手をさしのべてくれるようになることだろう。

#@# Once the working relationship between you and your upstream is established, it
#@# becomes an easy step to contribute more directly to upstream. This, too, can
#@# take many forms. Simple first steps can involve synchronising any upstream bug
#@# reports with the ones from your distribution, making sure that duplicate effort
#@# is not expended to root cause and fix bugs. More direct involvement entails
#@# feature development and changes with a wider scope than would be palatable when
#@# made in a packaged version.
あなたとアップストリームとの間の関係をうまく確立できれば、直接アップストリームに貢献するのも、より楽になる。
アップストリームへの直接の貢献についても、いろんなやりかたがある。
最初の一歩としてお手軽なのは、アップストリームへのバグレポートに、ディストリビューション側へのバグレポートの内容を反映させることだ。
根本的な原因の追及や、その修正のために、あちこちを見て回らなくても済むようにするのが目的だ。
もっとつっこんだかかわりかたとしては、自分のパッケージだけに閉じずに、もっと広い範囲での機能開発や変更をやってみるという手もある。

#@# \section*{Conclusion}
== 結論

#@# I think the two core things I wish I had known when starting out are the sense
#@# of community that Free Software engenders, and the fantastic route that
#@# packaging of Free Software provides into the wider Free Software world.
あのころの自分が知っておきたかったことが二つある。
フリーソフトウェアを生み出すコミュニティの感覚と、
フリーソフトウェアのパッケージングからフリーソフトウェアの幅広い世界に向かうすばらしい道筋だ。

#@# Community is critical to the success of Free Software. It comes in many forms,
#@# from the legion of users willing to invest time in making your software better,
#@# to one’s peers in a distribution or software project who invest their time and
#@# energy into honing your skills and ensuring that your contributions are as good
#@# as possible.
コミュニティは、フリーソフトウェアの成功のために不可欠だ。
コミュニティにはさまざまな形式がある。
そのソフトウェアを少しでもよいものにしようと自らの時間を捧げる人たちの集まりもあれば、
自分のスキルを磨き、少しでもよい貢献ができるようにしたいと考えている人たちもいる。

#@# The route from packaging into development is one often traveled. It provides a
#@# learning curve less steep than entering a development community cold, and allows
#@# one to develop skills at a more gradual rate than would otherwise be the case.
パッケージングから開発者へという道をたどるのは、よくあることだ。
開発者のコミュニティにいきなり参加するよりも学習曲線が緩やかになるし、
他の場合に比べても着実にスキルを伸ばしていけることだろう。
