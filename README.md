Pipe rot n
===

A dead-simple rotation algorithm.  Reads from `stdin` and writes to `stdout`.

Install
---

Compile and put it into your path.

```
gcc -o pipe-rot pipe-rot.c
sudo cp pipe-rot /usr/local/bin
```

It's probably better to put it into `~/bin/` and include that into
your `$PATH` but you probably already now that.

Usage
---

```
cat file.txt | pipe-rot 13
```

or readirect output to a file if you want to save it.

```
cat file.txt | pipe-rot 14 >> super-encrypted-file
```

Disclaimer
---

It's obviously very weak encryption.  I wrote it to test out these
simple cipher on an assignment.

License
---

Why would you want to use this?

Anyways, it's MIT-licensed so you can do whatever with it.
