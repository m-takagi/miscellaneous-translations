#@ -*- mode: review; coding: utf-8 -*-
#@ ContinuousDelivery
= 継続的デリバリー

#@ http://martinfowler.com/bliki/ContinuousDelivery.html

//lead{
Martin Fowler's blikiの"@<href>{http://martinfowler.com/bliki/ContinuousDelivery.html, ContinuousDelivery}"の翻訳。
//}

#@ 30 May 2013
2013/5/30

//flushright{
tags: @<href>{http://martinfowler.com/tags/delivery.html, delivery} @<href>{http://martinfowler.com/tags/version%20control.html, version control} @<href>{http://martinfowler.com/tags/continuous%20integration.html, continuous integration}
//}

#@ <p>Continuous Delivery is a software development discipline where
#@   you build software in such a way that the software can be released
#@   to production at any time. </p>
継続的デリバリーはソフトウェア開発における規律のひとつだ。
この規律に従ってソフトウェアを作れば、いつでも本番環境にリリースできるようになる。

#@ <p>You&#x2019;re doing continuous delivery when: <a href = '#footnote-when'>[1]</a></p>
継続的デリバリーをしているといえるのは、これらを満たしているときだ。@<fn>{footnote-when}

#@ <ul>
#@ <li>Your software is deployable throughout its lifecycle</li>

#@ <li>Your team prioritizes keeping the software deployable over working on new features</li>

#@ <li>Anybody can get fast, automated feedback on the production readiness of their systems any time somebody makes a change to them</li>

#@ <li>You can perform push-button deployments of any version of the software to any environment on demand</li>
#@ </ul>
 * そのライフサイクルを通して、どの場面でもソフトウェアをデプロイできる
 * チーム内で、新たな機能を追加することよりもソフトウェアをデプロイできるようにすることを重視している
 * 誰かがシステムに手を加えたときに、それが本番環境にリリースできるかどうかを、誰でもすぐに自動的にチェックできる
 * どのバージョンでもどんな環境向けでも、必要に応じてボタンひとつでデプロイできる

#@ <p>You achieve continuous delivery by
#@   continuously integrating the software done by the development team,
#@   building executables, and running automated tests on those
#@   executables to detect problems. Furthermore you push the executables
#@   into increasingly production-like environments to ensure the
#@   software will work in production. To do this you use a
#@   <a href = 'DeploymentPipeline.html'>DeploymentPipeline</a>.</p>
継続的デリバリーを実現するには、開発チームがソフトウェアを継続的に統合し、実行ファイルをビルドして、
さらにそれを自動的にテストして問題を検出すればいい。
さらに、その実行ファイルを疑似本番環境に置いて、本番環境でもきちんと動作することを確かめる。
そのために使うのが@<href>{http://martinfowler.com/bliki/DeploymentPipeline.html, デプロイメントパイプライン}だ。

#@ <p>The key test is that a business sponsor could request that <b>the
#@   current development version of the software can be deployed into
#@   production at a moment's notice</b> - and nobody would bat an eyelid,
#@   let alone panic.</p>
重要なポイントは、顧客から
@<em>{今開発中のそのバージョンを、すぐに本番環境にデプロイするよう}
言われても対応できるかどうか、そして誰もパニックに陥らずに済むかどうかということだ。

#@ <p>To achieve continuous delivery you need:</p>
継続的デリバリーを実現するために必要なことは、次の二点だ。

#@ <ul>
#@ <li>a close, collaborative working
#@   relationship between everyone involved in delivery (often referred
#@   to as a "DevOps culture" <a href = '#footnote-devops'>[2]</a>). </li>

#@ <li>extensive automation of all possible parts of the delivery
#@     process, usually using a <a href = 'DeploymentPipeline.html'>DeploymentPipeline</a></li>
#@ </ul>
 * デリバリーにかかわるすべての人たちの間できちんと連携し、共同で作業を進める（いわゆる「DevOps」ってやつだ）@<fn>{footnote-devops}。
 * デリバリープロセスを、可能な限り自動化する。一般的には@<href>{http://martinfowler.com/bliki/DeploymentPipeline.html, デプロイメントパイプライン}を使う

#@ <p>Continuous Delivery is sometimes confused with Continuous
#@   Deployment. <b>Continuous Deployment</b> means that every change goes
#@   through the pipeline and automatically gets put into production,
#@   resulting in many production deployments every day. Continuous
#@   Delivery just means that you are able to do frequent deployments but
#@   may choose not to do it, usually due to businesses preferring a
#@   slower rate of deployment. In order to do Continuous Deployment you
#@   must be doing Continuous Delivery.</p>
たまに、継続的デリバリーと継続的デプロイメントをごっちゃにしている人がいる。
@<em>{継続的デプロイメント}とは、すべての変更がパイプラインを通り、自動的に本番環境まで行くということだ。
結果的に、一日に何度も本番環境へのデプロイが発生する。
継続的デリバリーとは、単に「やろうと思えばいつでもデプロイできるようにしておく」というだけのことで、
実際のデプロイはそんなに頻繁にはしないという選択肢もある。
業務的に、あまり頻繁なデプロイが好ましくないなどの理由であることが多い。
つまり、継続的デプロイメントをするためには継続的デリバリーが必須だということだ。

#@ <p><a href = '/articles/continuousIntegration.html'>Continuous
#@   Integration</a> usually refers to integrating, building, and testing
#@   code within the development environment. Continuous Delivery builds
#@   on this, dealing the the final stages required for production
#@   deployment.</p>
@<href>{http://martinfowler.com/articles/continuousIntegration.html, 継続的インテグレーション}
は、開発環境の中での統合やビルドそしてテストを指すという考えかたが一般的だ。
継続的デリバリーはこれをベースにしたもので、最終段階を本番環境へのデプロイまでにするというものだ。

#@ <p>For more information see the resources on my <a href = '/delivery.html'>guide page</a>, in particular <a href = '/books/continuousDelivery.html'>the book</a>.</p>
詳しい情報は、@<href>{http://martinfowler.com/delivery.html, ガイドページ}からたどれる資料をあたって欲しい。
特に@<href>{http://martinfowler.com/books/continuousDelivery.html, この本}を読もう。

#@ <h2>Acknowledgements</h2>
#@ <a href = 'http://continuousdelivery.com/'>Jez Humble</a> provided
#@   detailed help with this page.
== 謝辞

このページを書くにあたり、@<href>{http://continuousdelivery.com/, Jez Humble}にいろいろ助けてもらった。

#@ <div class = 'footnote-list-item' id = 'footnote-when'>
#@ <p><span class = 'num'>1: </span>
#@       These indicators were developed by the Continuous Delivery
#@       working group at ThoughtWorks
#@     </p>
#@ </div>
//footnote[footnote-when][これらの指標は、ThoughtWorksの継続的デリバリーワーキンググループが考えたものだ。]

#@ <div class = 'footnote-list-item' id = 'footnote-devops'>
#@ <p><span class = 'num'>2: </span>
#@       Despite the name "devops" this should extend beyond developers
#@       and operations to include testers, database teams, and anyone
#@       else needed to get software into production.
#@     </p>
#@ </div>
//footnote[footnote-devops][名前こそ「devops」だが、開発者と運用担当者だけが協力すればいいってわけじゃない。テスターとかデータベースチームとか、ソフトウェアを本番環境に載せるために必要なメンバー全員が参加しなければいけない。]
