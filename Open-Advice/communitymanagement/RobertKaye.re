#@ \chapterwithauthor{Robert Kaye}{How Not to Start a Community}
= How Not to Start a Community

@<href>{https://github.com/Open-Advice/Open-Advice/blob/master/communitymanagement/RobertKaye.tex, The original text} (licenced under CC-BY-SA)

//flushright{
Robert Kaye
//}

#@ \authorbio{Robert Kaye combines his love for music and open source into the open
#@ music encyclopedia MusicBrainz. Robert founded and leads the California-based
#@ non-profit MetaBrainz Foundation in a long term effort to improve the digital
#@ music experience. Beyond hacking on MusicBrainz, Robert seeks out interesting
#@ festivals like Burning Man and interesting side projects like hacking on
#@ drink-mixing robots. Topped with a colorful hair style at all times, you will
#@ never have a hard time picking him out of a crowd.}
//lead{
Robert Kayeは、音楽とオープンソースへの愛を、オープンな音楽百科事典であるMusicBrainzに捧げる。
Robertはカリフォルニアで非営利組織MetaBrainz Foundationを設立し、率いている。
デジタル音楽の環境を向上させようという長年にわたる動きの一環だ。
MusicBrainzをハックするだけでなく、Burning Manみたいなフェスティバルにも取り組んでおり、
さらにドリンクを混ぜるロボットをハックするなどのサイドプロジェクトにも取り組んでいる。
いつも派手なヘアスタイルをしているので、人混みの中でも決して彼を見失うことはないだろう。
//}

#@ \noindent{}In 1998, I was working at Xing Technology in San Luis Obispo, working hard on
#@ our new AudioCatalyst project. It was one of the first integrated MP3 ripping
#@ programs that made use of the CDDB database. CDDB was the CD database that
#@ allows any player to look up the title and tracklisting for any CD. If the CD
#@ was not listed, you could enter the data so that the next person could make use
#@ of the data. I loved this online collaborative project and typed in several
#@ hundred CDs over the course of a few years.
1998年当時、私はサンルイスオビスポにあるXing Technologyで、新規プロジェクトAudioCatalystに関わっていた。
初のMP3リッピング用総合プログラムで、CDDBデータベースを使うものだった。
CDDBとはCDのデータベースで、あらゆるCDのタイトルやトラックリストを検索できるものだ。
もし探しているCDが登録されていなければ、自分でそのデータを登録することもできた。
そうすれば、後に続く人がそのデータを使えるようになるってわけだ。
私はこの仕組みが大好きだった。数年間で何百枚ものCDを登録したものだ。

#@ One day we were notified that CDDB had been purchased by Escient, a company that
#@ would later become GraceNote. The CDDB database was taken private so that people
#@ could no longer download the complete database! And on top of that Escient did
#@ not compensate any of the contributors for their efforts; they were ripping off
#@ the general public with this move. I was quite angry with this move and still am
#@ to this day.
ある日のこと。CDDBがEscientという企業に買収されてしまったことを知った。後のGraceNoteだ。
CDDBデータベースは非公開になり、データベース全体の一括ダウンロードもできなくなってしまった！
しかもEscientは、これまでのCDDBへの貢献者に対して何の補償をするでもなく、ねぎらいの言葉ひとつよこさなかった。
奴らは私たちから、データベースを略奪していったんだ。
許せなかったし、今でもその思いは変わらない。

#@ A few months later we were notified by Escient that we would be required to play
#@ the Escient jingle and display the Escient logo when making a CD lookup in our
#@ products. That was it! Now I was livid! Later that week at a party with friends
#@ I was complaining about what was happening and how unhappy I was. My friend
#@ Kevin Murphy said to me: ``Why don’t you start your own open source project to
#@ compete with these bastards?''
数か月後。自分たちのアプリからCDの検索をしようとすると、強制的にEscientのジングルを聞かされるようになり、
Escientのロゴが表示されるようになってしまった。なんてこった！怒り狂ったよ。
その週末、友人たちとのパーティの場で、私はそのあたりのことをいろいろ愚痴っていた。
そのとき、友人のKevin Murphyがこんなことを言ってくれたんだ。
「自分たちでオープンソースのプロジェクトを立ち上げて、奴らを見返してやればいいんじゃね？」

#@ A few weeks later I stopped working for Xing and had a couple of weeks of spare
#@ time before I would start at EMusic. I decided to teach myself Perl and web
#@ programming and set out to create the CD Index, a non-compatible, non-infringing
#@ project to compete with CDDB. I hacked on the project during the break, but then
#@ promptly forgot it once I became a member of the FreeAmp project at EMusic.
その数週間後。私はXingを退職した。新しい職場のEMusicで働き始めるまで半月ほどの空き時間ができたので、
独学でPerlとWebプログラミングを学び、CD Indexを作った。
これは、CDDBとの互換性はないし、特にCDDBと競合するわけでもないプロジェクトだった。
休みの間にこのプロジェクトをハックし続けたけど、EMusicでFreeAmpプロジェクトに参加するようになって、
CD Indexのことはすっかり忘れてしまった。

#@ Then in March of 1999 Slashdot asked what the open replacement for CDDB was
#@ going to be. I spent the rest of that day and most of the night finishing the CD
#@ Index and deploying it. I submitted a Slashdot story about my
#@ project\footnote{\url{
#@ http://slashdot.org/story/99/03/09/0923213/OpenSource-Alternative-to-CDDB}} and
#@ it promptly posted. As expected, thousands of geeks showed up within minutes and
#@ my server tipped over and died.
1999年3月。スラッシュドットに「CDDBの後継になるオープンソースは何？」っていう質問があがった。
私はその日、一晩中欠けてCD Indexを完成させ、公開した。
そしてCD Indexについてのストーリーをスラッシュドット@<fn>{slashdot}に投稿し、すぐに記事が公開された。
予想通り、数分のうちに何千人ものギークがうちのサーバーにアクセスし、サーバーはダウンしてしまった。

//footnote[slashdot][@<href>{http://slashdot.org/story/99/03/09/0923213/OpenSource-Alternative-to-CDDB}]

#@ The masses of people who arrived immediately started shouting for things to
#@ happen. There was not even a mailing list or a bug tracker yet; they insisted on
#@ having one right now. Because I was new to open source, I did not really know
#@ what all was needed to launch an open source project, so I just did as people
#@ asked. The shouting got louder and more people insisted that I shut the service
#@ down because it was not perfect. Even amidst the mess, we received over 3000 CD
#@ submissions during the first 24 hours.
押し寄せてきた人たちは、すぐにあれこれ騒ぎ始めた。
そのころはまだメーリングリストもなかったし、バグトラッカーも用意していなかった。
彼らは「すぐにでも作るべきだ」と言ってきた。
私はオープンソースの世界にあまり詳しくなかったので、
プロジェクトを立ち上げるときに何が必要なのかもよく知らなかった。
なので、みんなの言うことを聞いて、言われたことはやっていった。
騒ぎ声はさらに大きくなってきた。中には「こんな不完全なサービスなんか、やめてしまえ」という人たちも出てきた。
そんな混乱の中、最初の24時間で3000枚を超えるCDの情報が登録されたんだ。

#@ Once things calmed down, there were still plenty of people shouting. Greg Stein
#@ proclaimed that he would write a better version immediately. Mike Oliphant,
#@ author of Grip, said he was going to work on a new version as well. Alan Cox
#@ came and loudly proclaimed that SQL databases would never scale and that I
#@ should use DNS to create a better CD lookup service. Wait, what?
#@ I was very unhappy with the community that grew out of the Slashdot posting. I
#@ did not want a place were people could treat each other without respect and
#@ people who felt entitled could shout louder until they got what they wanted. I
#@ quickly lost interest in the project and the CD Index faltered. The other
#@ projects that people promised they would start (not counting FreeDB) never
#@ materialized.
いったんは収まりかけたけど、それでもまだいろいろ口出ししてくる人はいた。
Greg Steinは、自分がもっといいやつを作ってやろうと言った。
Gripの作者であるMike Oliphantも、Gripの新しいバージョンを作ると言い出した。
Alan Coxも参入してきて、SQLデータベースを使っていてスケールするわけがないと言った。
もっとまともなCDルックアップサービスを作りたければ、DNSを使うべきだということらしい。
ねえ、ちょっと待ってよ……。
私は落ち込んだ。スラッシュドットには、こんなコメントがどんどん投稿されてきたんだ。
お互い相手を尊重せず、ただ文句を言うだけ。自分の言い分が通るまで大声で叫び続ける。
そんなのまっぴらだった。
あっという間にやる気も失せて、CD Indexは行き詰まってしまった。
「自分がもっといいものを作ってやる」とか言っていたやつらも、
（FreeDBは別として）誰一人実際に何かを作り上げることはなかった。

#@ Then when the dot com bust started, I needed to think about what I would do
#@ next. It was clear that my job at EMusic was not safe; still I was driving a
#@ Honda S2000 roadster, my dot com trophy car. With car payments double my rent, I
#@ had to decide: Work on my own stuff and sell my dream car, or move to the Bay
#@ Area and work on someone else’s dream, if I could even find a job there.
やがてドットコムバブルがはじけ、今後の身の振り方を考えざるを得なくなった。
このままEMusicに居座り続けるのはどう考えても不安だった。
当時乗っていた車はホンダのS2000ロードスター。ドットコムバブルで手に入れた勲章だ。
車のローンと家賃の二重の支払いを前に、決断を迫られた。
今の仕事を続ける代わりにこのすばらしい車を手放すか、
それともベイエリアに引っ越して新たな夢を探すか。
とは言え、ベイエリアに行って職が見つかるっていう保証もない。

#@ I decided that a comprehensive music encyclopedia that was user-generated would
#@ be the most interesting thing to work on. I sold the S2000 and hunkered down to
#@ start working on a new generation of the CD Index. At yet another party, the
#@ name MusicBrainz came to me and I registered the domain in the middle of the
#@ party. The next day, motivated by the project’s new name, I started hacking in
#@ earnest and in the Fall of 2000 I launched musicbrainz.org.
結局、総合的な音楽百科事典をユーザー主導で作るってのが、いちばんやりがいのある仕事だという結論に達した。
S2000を売却して、次世代のCD Indexを作ることに本腰を入れ始めた。
何かのパーティの最中にMusicBrainzという名前を思いついて、その場ですぐドメインを確保したんだ。
その翌日。プロジェクトに新たな名前がついたことをきっかけに、ハックを再開した。
そして2000年の秋にmusicbrainz.orgを立ち上げた。

#@ Launched is not the right term here -- I set up the site quietly and then
#@ wondered how I could avoid another Slashdot-based community of loud screaming
#@ kids. I never imported data from the CD Index, nor did I mention MusicBrainz on
#@ the CD Index mailing lists. I simply walked away from the CD Index; I wanted
#@ nothing more to do with it. In the end I decided to add one simple button to the
#@ FreeAmp web page that mentioned MusicBrainz.
いや、「立ち上げた」っていうのはちょっと違うか。
誰にも言わずにこっそりとサイトを準備してから、
前みたいにスラッシュドットのガキどもに引っかき回されないためにはどうすればいいのか考えていたんだ。
CD Indexのデータは取り込まなかったし、MusicBrainzのことはCD Indexのメーリングリストでは一切触れなかった。
単純にCD Indexからは身を引いた。もうそっとしておいて欲しかったんだ。
結局、FreeAmpのウェブページにひっそりとボタンを追加してMusicBrainzを紹介することにした。

#@ And a very strange thing happened: people came and checked out the project. It
#@ was very few people at first, but when a person mentioned something to me, I
#@ would start a conversation and gather as much feedback as I could. I would
#@ improve the software based on feedback. I also set a tone of respect on the
#@ mailing lists, and every time someone was disrespectful, I would step in and
#@ speak up. My efforts directed the focus of the project towards improving the
#@ project. I did this for over 3 years before it became clear that this approach
#@ was working. The database was growing steadily and the data quality went from
#@ abhorrent to good over a number of years. Volunteers come and go, but I am the
#@ constant for the project, always setting the tone and direction for the project.
#@ Today we have a 501(c)3 non-profit with 3.25 employees in 4 countries, Google,
#@ the BBC and Amazon as our customers and we are in the black. I doubt that could
#@ have happened with the CD Index community.
そして、不思議なことが起こった。人が集まってきて、MusicBrainzをチェックアウトしはじめたんだ。
最初はごく一部の人だけだった。だけど、その中のひとりが何かの意見をくれたのをきっかけに、
彼らと話をしてできるだけフィードバックを得るようにしはじめた。
フィードバックを元に、ソフトを改良していった。
メーリングリストの雰囲気が悪くならないように心がけ、
誰かが失礼なことを言っていたら、そんなことをやめるよう話し合った。
とにかく、プロジェクトをうまく進めていくことに注力した。
三年間続けてみて、このやり方が間違っていないことを実感した。
データベースは着々と成長していたし、最初はひどかったデータの質も年々向上していった。
新たな協力者が入ってきては出ていった。それでも私はプロジェクトに関わり続け、
いつも雰囲気を保つこととプロジェクトの進む道を定めることに注力した。
今や私たちは、501(c)(3)の非営利組織を設立して四カ国に従業員がいる。
GoogleやBBCそしてAmazonも顧客に抱え、黒字経営だ。
CD Indexのコミュニティではまず無理だっただろうね。

#@ I wish I would have known that communities need to grow over time and be
#@ nurtured with a lot of care.
コミュニティは常に成長し続けなければいけないし、そのためにはいろいろ気配りが必要になる。
もっと早く、それを知っておくべきだった。
