# caia-pitrat

The CAIA artificial intelligence system of *late* [Jacques Pitrat](https://en.wikipedia.org/wiki/Jacques_Pitrat)
[Jacques Pitrat](https://fr.wikipedia.org/wiki/Jacques_Pitrat) was the French pioneer of Artificial Intelligence.
His blog is (in Q1 2020) still available on http://bootstrappingartificialintelligence.fr/WordPress3/

His book [*Artificial Intelligence: the conscience of a conscious machine*](https://onlinelibrary.wiley.com/doi/book/10.1002/9780470611791) (2009 Wiley ISTE; Print ISBN:9781848211018)  describes in great detail the design of CAIA.

The [RefPerSys](http://refpersys.org/) system is inspired by CAIA.

The code here is published for historical references. **Don't expect bugs to be corrected** by me Basile Starynkevitch.

I [Basile Starynkevitch](http://starynkevitch.net/Basile/) made only
cosmetic improvements and don't understand in 2020 all the details of
this system. I did met the late Jacques Pitrat several times.

See also [this academic
commemoration](https://afia.asso.fr/journee-hommage-j-pitrat/) in
honor of the *late* Jacques Pitrat.

## Building CAIA on Linux 

You need [ccache](https://ccache.dev/).

A residual metabug gives a buggy generated `dx.h` (global variables should be `extern` but are not).
The hand-written C++ program `improve-generated-dx.cc` (contributed by Basile Starynkevitch) is correcting that generated header.

so `cd caia-su-24feb2016` then run `make -j` perhaps twice to build `./caia` ; there
are half a million lines of generated C code in 3834 `*.c` file, so
the initial build takes some time.

## Running CAIA

This was **work in progress by the late Jacques Pitrat**, and there is no
documentation. But the set of rulees providing the
*read-eval-print-loop* is named `EDITE` so you can try `L EDITE`
(perhaps twice) after having started `./caia` ; many names are very
short, and some are inspired by French.


## slides
See also [these PDF slides](http://refpersys.org/Starynkevitch-CAIA-RefPerSys-2020mar06.pdf) of a talk given at an [AFIA seminar](https://afia.asso.fr/journee-hommage-j-pitrat/) (march 6, 2020) in honor of J.Pitrat.
