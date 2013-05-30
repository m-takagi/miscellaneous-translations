#@ -*- mode: review; coding: utf-8 -*-
#@ ContinuousDelivery
= ContinuousDelivery

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
Continuous Delivery is a software development discipline where you build software in such a way that the software can be released to production at any time.

#@ <p>You&#x2019;re doing continuous delivery when: <a href = '#footnote-when'>[1]</a></p>
You're doing continuous delivery when: @<fn>{footnote-when}

#@ <ul>
#@ <li>Your software is deployable throughout its lifecycle</li>

#@ <li>Your team prioritizes keeping the software deployable over working on new features</li>

#@ <li>Anybody can get fast, automated feedback on the production readiness of their systems any time somebody makes a change to them</li>

#@ <li>You can perform push-button deployments of any version of the software to any environment on demand</li>
#@ </ul>
 * Your software is deployable throughout its lifecycle
 * Your team prioritizes keeping the software deployable over working on new features
 * Anybody can get fast, automated feedback on the production readiness of their systems any time somebody makes a change to them
 * You can perform push-button deployments of any version of the software to any environment on demand

#@ <p>You achieve continuous delivery by
#@   continuously integrating the software done by the development team,
#@   building executables, and running automated tests on those
#@   executables to detect problems. Furthermore you push the executables
#@   into increasingly production-like environments to ensure the
#@   software will work in production. To do this you use a
#@   <a href = 'DeploymentPipeline.html'>DeploymentPipeline</a>.</p>
You achieve continuous delivery by continuously integrating the software done by the development team, building executables, and running automated tests on those executables to detect problems. Furthermore you push the executables into increasingly production-like environments to ensure the software will work in production. To do this you use a @<href>{http://martinfowler.com/bliki/DeploymentPipeline.html, DeploymentPipeline}.

#@ <p>The key test is that a business sponsor could request that <b>the
#@   current development version of the software can be deployed into
#@   production at a moment's notice</b> - and nobody would bat an eyelid,
#@   let alone panic.</p>
The key test is that a business sponsor could request that @<em>{the current development version of the software can be deployed into production at a moment's notice} - and nobody would bat an eyelid, let alone panic.

#@ <p>To achieve continuous delivery you need:</p>
To achieve continuous delivery you need:

#@ <ul>
#@ <li>a close, collaborative working
#@   relationship between everyone involved in delivery (often referred
#@   to as a "DevOps culture" <a href = '#footnote-devops'>[2]</a>). </li>

#@ <li>extensive automation of all possible parts of the delivery
#@     process, usually using a <a href = 'DeploymentPipeline.html'>DeploymentPipeline</a></li>
#@ </ul>
 * a close, collaborative working relationship between everyone involved in delivery (often referred to as a "DevOps culture" @<fn>{footnote-devops}.
 * extensive automation of all possible parts of the delivery process, usually using a @<href>{http://martinfowler.com/bliki/DeploymentPipeline.html, DeploymentPipeline}

#@ <p>Continuous Delivery is sometimes confused with Continuous
#@   Deployment. <b>Continuous Deployment</b> means that every change goes
#@   through the pipeline and automatically gets put into production,
#@   resulting in many production deployments every day. Continuous
#@   Delivery just means that you are able to do frequent deployments but
#@   may choose not to do it, usually due to businesses preferring a
#@   slower rate of deployment. In order to do Continuous Deployment you
#@   must be doing Continuous Delivery.</p>
Continuous Delivery is sometimes confused with Continuous Deployment. @<em>{Continuous Deployment} means that every change goes through the pipeline and automatically gets put into production, resulting in many production deployments every day. Continuous Delivery just means that you are able to do frequent deployments but may choose not to do it, usually due to businesses preferring a slower rate of deployment. In order to do Continuous Deployment you must be doing Continuous Delivery.

#@ <p><a href = '/articles/continuousIntegration.html'>Continuous
#@   Integration</a> usually refers to integrating, building, and testing
#@   code within the development environment. Continuous Delivery builds
#@   on this, dealing the the final stages required for production
#@   deployment.</p>
@<href>{http://martinfowler.com/articles/continuousIntegration.html, Continuous Integration} usually refers to integrating, building, and testing   code within the development environment. Continuous Delivery builds   on this, dealing the the final stages required for production deployment.

#@ <p>For more information see the resources on my <a href = '/delivery.html'>guide page</a>, in particular <a href = '/books/continuousDelivery.html'>the book</a>.</p>
<p>For more information see the resources on my @<href>{http://martinfowler.com/delivery.html, guide page}, in particular @<href>{http://martinfowler.com/books/continuousDelivery.html, the book}.

#@ <h2>Acknowledgements</h2>
#@ <a href = 'http://continuousdelivery.com/'>Jez Humble</a> provided
#@   detailed help with this page.
== Acknowledgements

@<href>{http://continuousdelivery.com/, Jez Humble} provided detailed help with this page.

#@ <div class = 'footnote-list-item' id = 'footnote-when'>
#@ <p><span class = 'num'>1: </span>
#@       These indicators were developed by the Continuous Delivery
#@       working group at ThoughtWorks
#@     </p>
#@ </div>
//footnote[footnote-when][These indicators were developed by the Continuous Delivery working group at ThoughtWorks]

#@ <div class = 'footnote-list-item' id = 'footnote-devops'>
#@ <p><span class = 'num'>2: </span>
#@       Despite the name "devops" this should extend beyond developers
#@       and operations to include testers, database teams, and anyone
#@       else needed to get software into production.
#@     </p>
#@ </div>
//footnote[footnote-devops][Despite the name "devops" this should extend beyond developers and operations to include testers, database teams, and anyone else needed to get software into production.]
