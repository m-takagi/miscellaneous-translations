#@ -*- mode: review; coding: utf-8 -*-
#@ TransparentCompilation
= 透過的コンパイル

//lead{
Martin Fowler's blikiの"@<href>{http://martinfowler.com/bliki/TransparentCompilation.html, TransparentCompilation}"の翻訳。
//}

#@ 12 February 2013
2013/2/12

//flushright{
tags: @<href>{http://martinfowler.com/tags/language%20feature.html, language feature}
//}

#@ Increasingly web developers are using languages like <a href = 'http://coffeescript.org'>CoffeeScript</a> and <a href = 'http://sass-lang.com'>SCSS</a> that compile to other textual source
#@   languages that execute in the browser. Such source-to-source
#@   compilers (also called transpilers <a href = '#footnote-transpiler'>[1]</a>) are not new, <a href = 'http://en.wikipedia.org/wiki/Cfront'>Cfront</a> was widely used in
#@   the early days of C++ to generate target C code. But for me there is
#@   a difference that picks out CoffeeScript and SCSS as
#@   <i>transparent</i> compilers
Web開発者たちの間で、@<href>{http://coffeescript.org, CoffeeScript}や@<href>{http://sass-lang.com, SCSS}といった言語の人気が高まりつつある。
コンパイルして別言語のテキストに変換し、それをブラウザで実行させるというものだ。
ソースコードからソースコードを生成するコンパイラ（またの名をトランスパイラ@<fn>{f01}）は別に目新しいものではない。
C++が登場したころによく使われていた@<href>{http://ja.wikipedia.org/wiki/Cfront, Cfront}は、
C++からCのコードを生成するものだった。
しかし私に言わせると、CoffeeScriptやSCSSはそんなのとは違う。
@<em>{透過的な}コンパイラだ。

#@ With most compilers, you don't care very much about what is
#@   generated downstream. As long as it follows the semantics of the
#@   source language it's effectively a big lump of bits. But if you're
#@   going to generate JavaScript for the browser, this ignorance is hard
#@   to live with. Debugging environments are getting pretty nifty these
#@   days, but they are all in terms of the HTML/CSS/JavaScript triad. So
#@   it's important that you understand how your input language
#@   translates to its executable target.
コンパイラを使うとき、ふつうははコンパイラの生成結果をあまり気にしない。
ソース言語で書いた内容に従って動く限り、生成結果は単なるビットの塊みたいなものだ。
でも、ブラウザで動かすJavaScriptを生成するのなら、そんな無関心ではやっていけない。
最近は気のきいたデバッグ環境も出てきたようだが、結局のところは
HTML/CSS/JavaScriptの三要素になる。
なので、ソース言語で書いた内容がどんなふうにターゲットに変換されるのかを知っておくことが大切だ。

#@ This constraint has a big effect upon the source language. You
#@   need to ensure that the output corresponds very clearly to the
#@   source. When I write this CoffeeScript
この制約は、ソース言語に大きな影響を及ぼす。
出力結果とソース言語との対応が明確になっていなければいけない。
たとえば、こんなCoffeeScriptを書いたとする。

//emlist{
$(window).on 'touchTap', (event) ->
  window.touchPanel.tap(event)
//}

#@ I can easily recognize the resulting JavaScript in my browser debugger
コンパイルしてできあがったJavaScriptは、ブラウザのデバッガで簡単に確認できる。

//emlist{
$(window).on('touchTap', function(event) {
  return window.touchPanel.tap(event);
});
//}

#@ This remains true even for more complicated bits of CoffeeScript's
#@  transformation, such as turning
もう少し込み入ったCoffeeScriptを考えてみよう。たとえば、

//emlist{
runSetupBuild: (slide, positionClass) ->
  switch positionClass
    when 'current', 'next'
      @buildsFor(slide)?.setupBuild?.forwards()
      # ...
//}

#@ into
は次のようになる。

//emlist{
Infodeck.prototype.runSetupBuild = function(slide, positionClass) {
  var _ref, _ref1, _ref2, _ref3;
  switch (positionClass) {
    case 'current':
    case 'next':
      return (_ref = this.buildsFor(slide)) != null ?
           (_ref1 = _ref.setupBuild) != null ? _ref1.forwards() : void 0
           : void 0;
    /* ... */
//}

#@ There's a lot going on in that transformation - but still the
#@  correspondence is pretty clear. If I need to debug in that code, I
#@  can easily see how it matches up to the source CoffeeScript. This is
#@  the essence of what makes the compilation process <i>transparent</i> - the
#@  intention that you will work in the output language <a href = '#footnote-output'>[2]</a>.
この変換ではいろんなことが行われているけれど、変換前後の対応関係は明確だ。
デバッグする必要に迫られたとしても、ひとつひとつのコードが
CoffeeScriptのどの部分に対応するのかはすぐにわかる。
これこそが、コンパイルプロセスが@<em>{透過的}であるということの本質である。
つまり、出力結果の言語を使って作業できるということだ@<fn>{f02}。

#@ In contrast, there are source-to-source compilers that don't
#@  expect you to work in the output language, or see visibility of the
#@  output language as an unfortunate temporary mechanism. These can
#@  still be useful, and you see them in the javascript world with
#@  languages like Dart, GWT, and ClojureScript. It's this difference in
#@  <i>intention</i> which is what separates the transparant style of
#@  transpilation from the more common approach. <a href = '#footnote-sourcemaps'>[3]</a>
それとは対照的に、ソースからソースへのコンパイラの中には変換後の言語をあまりいじってほしくなさげなものもある。
出力結果をあまり見られたくなさそうなもの、とでも言えばいいだろうか。
それはそれで便利で、JavaScriptの世界でも
DartやGWTそしてClojureScriptといった実例がある。
この@<em>{意図}の違いこそが、トランスパイルと一般的な手法とを分ける決め手だ。@<fn>{f03}

#@ The fact that you have to work at keeping the compilation
#@  transparent puts limits on what you can do in the source
#@  language. You don't have the degree of freedom in your language
#@  constructs that you get with a more unconstrained form of
#@  compilation. You have to follow the basic semantics of the target
#@  language, and keep to much the same program structure. These
#@  constraints haven't been widely talked about as a feature of language
#@  design.
コンパイルの透過性を保つために何らかの作業が必要になるというなら、
ソース言語でできることに何らかの制約が課されることになる。
もっと制約の少ないコンパイル形式なら得られたであろう、言語構造の自由度が下がってしまう。
ターゲット言語の基本構文に従う必要があり、同じような構造のプログラムを書かなければいけない。
こういった制約は、言語設計の特徴としてあまり話題に上らない。

#@ CoffeeScript illustrates that despite these constraints you can
#@  get a considerable difference in syntax between source and target
#@  languages. CoffeeScript feels much more like Python in syntax than
#@  the C-like JavaScript. Such syntactic variation isn't always the
#@  case, indeed there is an important subset of transparent compilation
#@  languages that strive to be a superset of the target language. SCSS
#@  and <a href = 'http://www.typescriptlang.org'>TypeScript</a> fit into
#@  this category - any CSS expression is valid in SCSS. Using a superset
#@  language makes the correspondence even clearer and I feel works well
#@  for CSS where CSS's syntax works well but the language misses some
#@  handy features.
CoffeeScriptは、こういった制約があったとしてもソース言語とターゲット言語の構文を大きく変えられるというよい例だ。
CoffeeScriptの構文はPythonに似ており、JavaScriptがC言語風なのとは違っている。
ただ、こんなふうに構文的に手を加えている言語ばかりだというわけでもない。
実際、透過型のコンパイル言語の中では、ターゲット言語のスーパーセットであろうとする勢力も見逃せない。
SCSSや@<href>{http://www.typescriptlang.org, TypeScript}がこのタイプで、
あらゆるCSSの式はSCSSとしても妥当な形式になる。
スーパーセット言語を使えば対応関係はより明確になるし、CSSがより使いやすくなるだろう。
個人的に、CSSの構文はよくできているけれども便利な機能に欠けるところがあるなと感じていたからだ。

#@ Some say there's little point in using transparent
#@  compilation - if you have to understand the target code for
#@  debugging, what's the value in using a different source? For me, the
#@  value lies in a couple of directions. First off it's a way of getting
#@  useful language features that are missing in the target language.
#@  SCSS gives me handy capabilities such as variables (so I can say
#@  <code>$light-purple</code> instead of <code>#f8c8fe</code> and change
#@  it in only one place should I want to tweak it).
透過的なコンパイルには意味がないという人もいる。
デバッグのためにターゲット言語を理解する必要があるのなら、
わざわざ別のソース言語を使う意味があるの？という意見だ。
私にとっての透過的コンパイルの価値は、いくつかの方面に渡る。
まず、ターゲット言語に欠けている便利な言語機能を手に入れる手段として使える。
たとえばSCSSなら、変数のような便利な機能が使えるようになる
（@<code>{#f8c8fe}の代わりに@<code>{$light-purple}などのように指定できて、
色を変更するにも一箇所だけいじれば済む）。

#@ More drastic syntax changes, such as CoffeeScript, require
#@  stronger justification. One of my colleagues put it very well after finishing a
#@  project. He's an experienced JavaScript programmer and the project
#@  wrote well-disciplined JavaScript from the beginning. As a result he
#@  was very happy with the quality of the JavaScript codebase. However
#@  he still concluded that they would have been better off working in
#@  CoffeeScript, because it's easier to understand what is going on when
#@  you're reading the CoffeeScript, even when you're debugging in the
#@  generated JavaScript code. The transformation may not look like such
#@  a big deal for small fragments, such as those I show above. But it
#@  makes a big difference once you're up to hundreds of lines of code,
#@  let alone beyond.<a href = '#footnote-recommend'>[4]</a>
CoffeeScriptのように構文を劇的に変えるには、それなりの理由が必要だ。
One of my colleagues put it very well after finishing a project. He's an experienced JavaScript programmer and the project wrote well-disciplined JavaScript from the beginning. As a result he was very happy with the quality of the JavaScript codebase. However he still concluded that they would have been better off working in CoffeeScript, because it's easier to understand what is going on when you're reading the CoffeeScript, even when you're debugging in the generated JavaScript code. The transformation may not look like such a big deal for small fragments, such as those I show above. But it makes a big difference once you're up to hundreds of lines of code, let alone beyond.@<fn>{f04}

#@ Hunting around usage, it seem to me that the the term "transpiler" is used as a synonym for source-to-source compiler. So transpilers may or may not be transparent. I've also seen the term "source-to-source translation" used equivalently to "source-to-source compilation".
#@ Even with opaque compilation there are cases when people study the outputs. Occasionally there are odd behaviors or bugs that do require you to dig into the compiler outputs. Some programmers like to understand what the compiler is doing, although that's got less common as compilers and virtual machines get more sophisticated. But such activity is an exception.
#@ It's interesting to see whether the development of @<href>{http://www.html5rocks.com/en/tutorials/developertools/sourcemaps/, sourcemaps} will shift languages like coffeescript away from transparency.
#@ I've only done a few hundred lines of coffeescript while working on my infodecks, but I agree with him and will continue to use coffeescript for any non-trivial amounts of javascript.
//footnote[f01][実際に使われている場面を見る限り、「トランスパイラ（transpiler）」という用語は「ソースからソースへのコンパイラ」と同義だと思われる。なので、「透過的（transparent）」であるかどうかは関係ない。またこれ以外にも、「ソースからソースへの変換」という言い回しも見たことがある。「ソースからソースへのコンパイル」と同じ意味で使われていた。]
//footnote[f02][透過的でないコンパイラであっても、その生成結果を吟味する場合がある。奇妙な挙動やバグなどの原因をつきとめるため、コンパイラの生成結果を調べてみるといった場面だ。コンパイラが実際に何をしているのかを把握しようとするプログラマも中にはいる。でもそんなのはごく一部だ。]
//footnote[f03][@<href>{http://www.html5rocks.com/en/tutorials/developertools/sourcemaps/, sourcemaps}が開発されたおかげでcoffeescriptのような言語から透過性がなくなってしまうのかどうか、興味深いところだ。]
//footnote[f04][私のcoffeescript歴は、自分のインフォデッキを作るときにほんの数百行ほど書いただけだ。でも、彼の意見には同意する。ちょっとしたコードは別として、ある程度の規模のJavaScriptを書くことになったらこれからもcoffeescriptを使い続けるだろう。]
