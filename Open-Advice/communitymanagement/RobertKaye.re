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
A few weeks later I stopped working for Xing and had a couple of weeks of spare time before I would start at EMusic. I decided to teach myself Perl and web programming and set out to create the CD Index, a non-compatible, non-infringing project to compete with CDDB. I hacked on the project during the break, but then promptly forgot it once I became a member of the FreeAmp project at EMusic.

#@ Then in March of 1999 Slashdot asked what the open replacement for CDDB was
#@ going to be. I spent the rest of that day and most of the night finishing the CD
#@ Index and deploying it. I submitted a Slashdot story about my
#@ project\footnote{\url{
#@ http://slashdot.org/story/99/03/09/0923213/OpenSource-Alternative-to-CDDB}} and
#@ it promptly posted. As expected, thousands of geeks showed up within minutes and
#@ my server tipped over and died.
Then in March of 1999 Slashdot asked what the open replacement for CDDB was going to be. I spent the rest of that day and most of the night finishing the CD Index and deploying it. I submitted a Slashdot story about my project@<fn>{slashdot} and it promptly posted. As expected, thousands of geeks showed up within minutes and my server tipped over and died.

//footnote[slashdot][@<href>{http://slashdot.org/story/99/03/09/0923213/OpenSource-Alternative-to-CDDB}]

#@ The masses of people who arrived immediately started shouting for things to
#@ happen. There was not even a mailing list or a bug tracker yet; they insisted on
#@ having one right now. Because I was new to open source, I did not really know
#@ what all was needed to launch an open source project, so I just did as people
#@ asked. The shouting got louder and more people insisted that I shut the service
#@ down because it was not perfect. Even amidst the mess, we received over 3000 CD
#@ submissions during the first 24 hours.
The masses of people who arrived immediately started shouting for things to happen. There was not even a mailing list or a bug tracker yet; they insisted on having one right now. Because I was new to open source, I did not really know what all was needed to launch an open source project, so I just did as people asked. The shouting got louder and more people insisted that I shut the service down because it was not perfect. Even amidst the mess, we received over 3000 CD submissions during the first 24 hours.

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
Once things calmed down, there were still plenty of people shouting. Greg Stein proclaimed that he would write a better version immediately. Mike Oliphant, author of Grip, said he was going to work on a new version as well. Alan Cox came and loudly proclaimed that SQL databases would never scale and that I should use DNS to create a better CD lookup service. Wait, what? I was very unhappy with the community that grew out of the Slashdot posting. I did not want a place were people could treat each other without respect and people who felt entitled could shout louder until they got what they wanted. I quickly lost interest in the project and the CD Index faltered. The other projects that people promised they would start (not counting FreeDB) never materialized.

#@ Then when the dot com bust started, I needed to think about what I would do
#@ next. It was clear that my job at EMusic was not safe; still I was driving a
#@ Honda S2000 roadster, my dot com trophy car. With car payments double my rent, I
#@ had to decide: Work on my own stuff and sell my dream car, or move to the Bay
#@ Area and work on someone else’s dream, if I could even find a job there.
Then when the dot com bust started, I needed to think about what I would do next. It was clear that my job at EMusic was not safe; still I was driving a Honda S2000 roadster, my dot com trophy car. With car payments double my rent, I had to decide: Work on my own stuff and sell my dream car, or move to the Bay Area and work on someone else’s dream, if I could even find a job there.

#@ I decided that a comprehensive music encyclopedia that was user-generated would
#@ be the most interesting thing to work on. I sold the S2000 and hunkered down to
#@ start working on a new generation of the CD Index. At yet another party, the
#@ name MusicBrainz came to me and I registered the domain in the middle of the
#@ party. The next day, motivated by the project’s new name, I started hacking in
#@ earnest and in the Fall of 2000 I launched musicbrainz.org.
I decided that a comprehensive music encyclopedia that was user-generated would be the most interesting thing to work on. I sold the S2000 and hunkered down to start working on a new generation of the CD Index. At yet another party, the name MusicBrainz came to me and I registered the domain in the middle of the party. The next day, motivated by the project’s new name, I started hacking in earnest and in the Fall of 2000 I launched musicbrainz.org.

#@ Launched is not the right term here -- I set up the site quietly and then
#@ wondered how I could avoid another Slashdot-based community of loud screaming
#@ kids. I never imported data from the CD Index, nor did I mention MusicBrainz on
#@ the CD Index mailing lists. I simply walked away from the CD Index; I wanted
#@ nothing more to do with it. In the end I decided to add one simple button to the
#@ FreeAmp web page that mentioned MusicBrainz.
Launched is not the right term here -- I set up the site quietly and then wondered how I could avoid another Slashdot-based community of loud screaming kids. I never imported data from the CD Index, nor did I mention MusicBrainz on the CD Index mailing lists. I simply walked away from the CD Index; I wanted nothing more to do with it. In the end I decided to add one simple button to the FreeAmp web page that mentioned MusicBrainz.

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
And a very strange thing happened: people came and checked out the project. It was very few people at first, but when a person mentioned something to me, I would start a conversation and gather as much feedback as I could. I would improve the software based on feedback. I also set a tone of respect on the mailing lists, and every time someone was disrespectful, I would step in and speak up. My efforts directed the focus of the project towards improving the project. I did this for over 3 years before it became clear that this approach was working. The database was growing steadily and the data quality went from abhorrent to good over a number of years. Volunteers come and go, but I am the constant for the project, always setting the tone and direction for the project. Today we have a 501(c)3 non-profit with 3.25 employees in 4 countries, Google, the BBC and Amazon as our customers and we are in the black. I doubt that could have happened with the CD Index community.

#@ I wish I would have known that communities need to grow over time and be
#@ nurtured with a lot of care.
I wish I would have known that communities need to grow over time and be nurtured with a lot of care.
