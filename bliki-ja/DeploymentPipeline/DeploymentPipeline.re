#@ -*- mode: review; coding: utf-8 -*-
#@ DeploymentPipeline
= デプロイメントパイプライン

#@ http://martinfowler.com/bliki/DeploymentPipeline.html

//lead{
Martin Fowler's blikiの"@<href>{http://martinfowler.com/bliki/DeploymentPipeline.html, DeploymentPipeline}"の翻訳。
//}

#@ 30 May 2013
2013/5/30

//flushright{
tags: @<href>{http://martinfowler.com/tags/delivery.html, delivery} @<href>{http://martinfowler.com/tags/build%20scripting.html, build scripting}
//}

#@ <p>One of the challenges of an automated build and test environment
#@   is you want your build to be fast, so that you can get fast
#@   feedback, but comprehensive tests take a long time to run. A
#@   deployment pipeline is a way to deal with this by breaking up your
#@   build into stages. Each stage provides increasing confidence,
#@   usually at the cost of extra time. Early stages can find most
#@   problems yielding faster feedback, while later stages provide slower
#@   and more through probing. Deployment pipelines are a central part
#@   of <a href = 'ContinuousDelivery.html'>ContinuousDelivery</a>.</p>
自動ビルドやテスト環境を構築するときに問題になることのひとつは、
ビルドを高速にしてフィードバックをすぐに得られるようにしたいけれども、包括的なテストをしようとすると時間がかかるということだ。
デプロイメントパイプラインは、この問題に対処するために、ビルドをいくつかの段階に分割する。
ひとつのステージを通過するごとに信頼性が増すが、それぞれにステージにはそれなりの時間がかかる。
初期段階で大半の問題をあぶり出してしまって素早くフィードバックし、
後半ではじっくり時間をかけた調査をする。
デプロイメントパイプラインは@<href>{http://martinfowler.com/bliki/ContinuousDelivery.html, ContinuousDelivery}の肝となるところだ。

#@ <p>Usually the first stage of a deployment pipeline will do any
#@   compilation and provide binaries for later stages. Later stages may
#@   include manual checks, such as any tests that can't be automated.
#@   Stages can be automatic, or require human authorization to proceed,
#@   they may be parallelized over many machines to speed up the build.
#@   Deploying into production is usually the final stage in a pipeline.
#@   </p>
Usually the first stage of a deployment pipeline will do any compilation and provide binaries for later stages. Later stages may include manual checks, such as any tests that can't be automated. Stages can be automatic, or require human authorization to proceed, they may be parallelized over many machines to speed up the build. Deploying into production is usually the final stage in a pipeline.

#@ <p>More broadly the deployment pipeline's job is to detect any
#@   changes that will lead to problems in production. These can include
#@   performance, security, or usability issues. A deployment pipeline
#@   should enable collaboration between the various groups involved in
#@   delivering software and provide everyone visibility about the flow
#@   of changes in the system, together with a thorough audit trail.</p>
More broadly the deployment pipeline's job is to detect any changes that will lead to problems in production. These can include performance, security, or usability issues. A deployment pipeline should enable collaboration between the various groups involved in delivering software and provide everyone visibility about the flow of changes in the system, together with a thorough audit trail.

#@ <p>A good way to introduce continuous delivery is to model your
#@   current delivery process as a deployment pipeline, then examine this
#@   for bottlenecks, opportunities for automation, and collaboration points.</p>
A good way to introduce continuous delivery is to model your current delivery process as a deployment pipeline, then examine this for bottlenecks, opportunities for automation, and collaboration points.

#@ <p>For more information see chapter 5 of the <a href = '/books/continuousDelivery.html'>Continuous Delivery book</a>,
#@   available as a <a href = 'http://www.informit.com/articles/article.aspx?p=1621865'>free
#@   download</a>.
#@   </p>
For more information see chapter 5 of the @<href>{http://martinfowler.com/books/continuousDelivery.html, Continuous Delivery book}, available as a @<href>{http://www.informit.com/articles/article.aspx?p=1621865, free download}.

#@ <div class = 'acknowledgements'>
#@ <h2>Acknowledgements</h2>
#@ <a href = 'http://continuousdelivery.com/'>Jez Humble</a> provided detailed help with this page.</div>
#@ </div>
== Acknowledgements
@<href>{http://continuousdelivery.com/, Jez Humble} provided detailed help with this page.
