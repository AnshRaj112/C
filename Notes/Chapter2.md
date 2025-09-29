# Chapter 2: Comments

COmments are treated like a blank by the compier and do not change anything in the code's actual meaning. The original format for commenting is ```/* */``` and the lightly newer one is ``` // ```. Some documentation systems use specially formatted comments to help produce the documentation for code.

## Section 2.1: Commenting using the preprocessor

`// Single-line comment`

`/* Multi-line comment */`

**Multi-line comment don't nest**. IF we already have code with `/*...*/` inside it, we can't wrap whole bock in another `/*...*/`

To avoid this we preprocessor directives: 
```
#if 0 // "False condition" - preprocessor will ignore everything until the matching #endif

/* A large amount of code with multi-line comments */

int foo() {
    /* lots of code */
    ...
    /* ... some comment describing the if statement ... */
    if (someTest) {
        /* some more comments */
        return 1;
    }
    return 0;
}

#endif // ends the skipped section

```

How it works:

* The preposessor runs before compilation.

* The preprocessor removes everything `#if 0` and `#endif` before the compiler even sees it.

* So the whole block of code is skipped entirely, as if it was commented out. 

* Unlike `/* ... */`, you can nest `/* ... */` inside this block safely because the preprocessor just deletes the whole region. 

## Section 2.2: Possible pitfall due to trigraphs

While writing `//` delimited comments, it is possible to make a typographical error that affects their expected operations.

For example:
```
int x = 10; // Why did I do this ??/
```
The `/` at the was a typo but now the compiler will interpret it into `\`. This is because the `??/` from a trigraph.

The trailing `\` says: *"This line continues onto the next line."*

So the next lines gets swallowed into the comment: 
```
int foo = 10; // Why did I do this ??/
int bar = 0;
```
...becomes effectively:
```
int foo = 10; // Why did I do this int bar = 0;
```

meaning `int bar = 0;` is no longer code - it is a part of the comment

Now when we will write 
```
bar += foo;
```

The compiler complains: 
```
error: 'bar' undeclared (first use in this function)
```


