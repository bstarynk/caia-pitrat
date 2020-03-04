# caia-pitrat
The CAIA artificial intelligence system of late Jacques Pitrat (1934- oct. 2019)

Jacques Pitrat was the French pioneer of Artificial Intelligence.
His blog is (in Q1 2020) still available on http://bootstrappingartificialintelligence.fr/WordPress3/

His book [*Artificial Intelligence: the conscience of a conscious machine*](https://onlinelibrary.wiley.com/doi/book/10.1002/9780470611791) (2009 Wiley ISTE; Print ISBN:9781848211018)  describes in great detail the design of CAIA.

The [RefPerSys](http://refpersys.org/) system is inspired by CAIA.

## Building CAIA

A residual metabug gives a buggy generated `dx.h` (global variables should be  ̀ extern` but are not).
The hand-written C++ program `improve-generated-dx.cc` (contributed by Basile Starynkevitch) is correcting that generated header.

so `cd caia-su-24feb2016` then run `make -j` to build `./caia` ; there
are half a million lines of generated C code in 3834 `*.c` file, so
the initial build takes some time.

## Running CAIA

This was work in progress by the late Jacques Pitrat, and there is no
documentation. But the set of rulees providing the
*read-eval-print-loop* is named `EDITE` so you can try `L EDITE` after
having started `./caia` ; many names are very short, and some are
inspired by French.



