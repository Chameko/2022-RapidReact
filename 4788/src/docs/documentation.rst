=============
Documentation
=============

To doucment our code I have provided some resources, both internal and external, to help you learn how our system works and how to use it.


Documentation generation
========================

Dependencies
------------

We use **doxygen** to generate documentation from code comments, sphinx to format and produce the final html and breathe to bridge between the two as well as a nifty theme :D.

::

        commented code --> doxygen --> breathe --> sphinx --> DOCUMENTATION
                                                 ^
                             documentation ------^

Windows
```````
To install doxygen navigate to https://www.doxygen.nl/download.html and scroll down untill you see *A bindary distrabution for Windows*. Download and run the installer

**Sphinx**, **breathe** and the theme can be installed via pip, python's package manager, which can be found on https://pypi.org/project/pip/
|
``pip install sphinx breathe sphinx_rtd_theme``

Linux
`````
If able, I recommend installing **doxygen** and **pip** throught your distro's package manager.

After install **sphinx**, **breathe** and the theme via pip.
|
``pip install sphinx breathe sphinx_rtd_theme``

Build
-----

To generate the documentation run ``./gradlew doc``

This will generate the **doxygen** doc templates from the comments in our code and place it in *build/docs/doxygen/*

.. note:: Doxygen generates both xml, which is used by sphinx to construct our final html, and its own html which we don't use, but can be useful when trying to figure out how **doxygen** defines a particular piece of you code.

It will then give it to **sphinx**, which generates the documentation using the .rst files found in *4788/src/docs*

Writing documentation
========================

To generate the documentation you have two ways of doing it. The first way is commenting you code and having **doxygen** generate documentation from that.

.. tip:: You can see doxygen's way of interpreting comments `here <https://www.doxygen.nl/manual/docblocks.html>`_

This documentation however isn't very pretty nor organised. And what is the point of documentation if it isn't *Beautiful*? So we use **sphinx** to write our actual documentation and **breathe** to insert the nifty **doxygen** code snippets.

**Sphinx** uses a markup format called reStructuredText. Its a way of writing text so that certain symbols influence text in different ways. For example, putting \*'s around a word \*\*like so\*\* makes it **bold**.
Here's a list of resources to help you get familier:

- https://docutils.sourceforge.io/docs/user/rst/quickref.html#literal-blocks
- http://udig.refractions.net/files/docs/latest/user/docguide/sphinxSyntax.html
- https://learnxinyminutes.com/docs/rst/
- https://www.sphinx-doc.org/en/master/usage/restructuredtext/basics.html

.. note::
    To insert those special **doxygen** snippets you'll need **breathe**'s commands. They can be found `here <https://breathe.readthedocs.io/en/latest/directives.html#doxygenclass>`_

I recommend you look at the example subsystem documentation I've created as well as the commented source code to get a good idea of how everything works.
