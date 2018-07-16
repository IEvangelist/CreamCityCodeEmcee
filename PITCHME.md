---
@size[2.7em](@css[wasm](WebAssembly))
### The New Endgame?
<img src="assets/me.jpg" height="250" />
<br />
[@davidpine7 @fa[twitter]](https://twitter.com/davidpine7) | [davidpine.net @fa[globe]](http://davidpine.net/)

---

# Thank You
### Sponsors & @css[that](THAT Conference)
### @color[red](@fa[heart]) #DeveloperCommunity @color[#0084b4](@fa[twitter])

---

### @color[fuchsia](Unpublished Podcast Bits)
<img class="headshot" src="assets/scott.png" height="300" />
@css[flash](@color[whitesmoke](&nbsp; @fa[ellipsis-h] &nbsp; @fa[microphone] &nbsp; @fa[ellipsis-h] &nbsp;))
<img class="headshot" src="assets/steve.png" height="300" />
##### @css[scott](Scott Hanselman) @css[steve](Steve Sanderson)

---

### An Interview With Steve


---

# Wat?!

---

> @fa[quote-left] @css[wasm](WebAssembly) is a binary instruction format for a stack-based virtual machine.
>
> @fa[hand-o-right] <cite>https://webassembly.org/</cite>

---?image=assets/wtf.webp&size=auto 90%
---

# Runtime

<img class="headshot" src="assets/mono-gorilla.svg" style="min-height: 300px; min-width: 300px; height: 250px; width: 250px;" />

---

# Decompose @css[that](THAT)

---
> Binary Instruction Format
---
@transition[none]
> Stack-Based Virtual Machine
---
@transition[none]
> Stack-Based implies Last In First Out (LIFO) Semantics. Values are pushed onto the stack and popped off of the stack.
---
@transition[none]
> A virtual machine (VM) is a high-level abstraction on top of the native operating system, that emulates a physical machine
---

### Today, _binary execution format_ for the @color[magenta](web)
<br/>
### There _future_ is for @color[orange](mobile) and @color[blue](IoT)!

---

> @fa[quote-left] @css[wasm](Wasm) is designed as a @css[underline,red](portable target) for compilation of high-level languages like
<img class="pop-img" src="assets/c-logo.png" height="140" />
<img class="pop-img" src="assets/cpp-logo.png" height="140" />
<img class="pop-img" src="assets/csharp-logo.png" height="140" />
<img class="pop-img" src="assets/rust-logo.png" height="140" />
<img class="pop-img" src="assets/go-logo.png" height="140" />
> <br/> @fa[hand-o-right] <cite>https://webassembly.org/</cite>

---?image=assets/target.webp&size=auto 90%

# @css[shadow](Compilation) @css[target](Target @fa[dot-circle-o])

---

# Example
@ul[none]
 - @size[2.2em](@css[bold]( <span id="code"></span> ) &nbsp; @color[darkgreen](@fa[plus-circle]))
 - @size[2.2em](@color[grey](@fa[cogs]) compile  &nbsp; @color[darkgreen](@fa[arrow-circle-right]))
 - @size[2.2em](@css[wasm](`*.wasm`) @color[darkgreen](@fa[check-circle]))
@ulend

---?image=assets/magic.webp&size=auto 90%
---

## Angry Bots

https://files.unity3d.com/jonas/AngryBots/

---

## Tanks

https://webassembly.org/demo/Tanks/

---

## Funky Karts

https://www.funkykarts.rocks/demo.html

---

https://caniuse.com/#search=webassembly

https://blazor.net/

https://learn-blazor.com/


---

# Open and Debuggable

---

# Safe

---

Same security sandbox as JavaScript's VM today

---


# Fast and Efficient

---

# Open web platform

---

W3C

![W3C](assets/w3c.png)

---

Not versioned!

---

### @css[wasm](WebAssembly) Support!

<div class="grid">
    <div class="top-left">
        <img src="https://raw.githubusercontent.com/IEvangelist/WebAssemblyTheNewEndgame/master/assets/chrome.svg?sanitize=true" height="200" width="200" />
    </div>
    <div class="top-right">
        <img src="https://raw.githubusercontent.com/IEvangelist/WebAssemblyTheNewEndgame/master/assets/firefox.svg?sanitize=true" height="200" width="200" />
    </div>
    <div class="bottom-left">
        <img src="https://raw.githubusercontent.com/IEvangelist/WebAssemblyTheNewEndgame/master/assets/safari.svg?sanitize=true" height="200" width="200" />
    </div>
    <div class="bottom-right">
        <img src="https://raw.githubusercontent.com/IEvangelist/WebAssemblyTheNewEndgame/master/assets/edge.svg?sanitize=true" height="200" width="200" />
    </div>
</div>

---

# What it<br/>@color[red](is not!)

---

> @fa[quote-left] @css[wasm](WebAssembly) is @color[red](not) a @css[js](JavaScript) replacement!

---

> @fa[quote-left] @css[wasm](WebAssembly) is @color[red](not) a programming language!

---

> @fa[quote-left] @css[wasm](WebAssembly) is @color[red](not) the ideal tool @fa[wrench] for every web project!

---

# @css[js](JavaScript)
### @color[magenta](HTTP GET Request)

```javascript
fetch("http://api.icndb.com/jokes/random?limitTo=[nerdy]")
    .then(r => r.json())
    .then(json => console.log(json.value.joke));

// Chuck Norris is the ultimate mutex, all threads fear him.
```

---

# @css[c](C Lang)
### @color[magenta](HTTP GET Request)

---?code=source/hello.c&lang=c

@[1-7](LOL: Headers @css[shaking](@fa[meh-o]))
@[9](Ugh: `main` @css[shaking](@fa[meh-o]))
@[11-17](Declarations & Memory Sets @css[shaking](@fa[meh-o]))
@[18-22](Open Socket @css[shaking](@fa[meh-o]))
@[24-25](Connect to Socket @css[shaking](@fa[meh-o]))
@[27-29](Send Request @css[shaking](@fa[meh-o]))
@[31-34](Receive Response @css[shaking](@fa[meh-o]))

---


---?image=assets/logo-winner.png&size=contain


---



---

# Why

---

## Use Cases (1 of 4)

@ul
- Better execution for languages and toolkits that are currently cross-compiled to the Web (C/C++, GWT, ...)
- Image / video editing
- __Games:__
  - Casual games that need to start quickly
  - AAA games that have heavy assets
  - Game portals (mixed-party/origin content)
@ulend

---
@transition[none]
## Use Cases (2 of 4)

@ul
- Interactive educational software, and news articles
- Platform simulation / emulation (ARC, DOSBox, QEMU, MAME, ...)
- Language interpreters and virtual machines
- POSIX user-space environment, allowing porting of existing POSIX applications
- Developer tooling (editors, compilers, debuggers, ...)
@ulend

---
@transition[none]
## Use Cases (3 of 4)

@ul
- Peer-to-peer applications (games, collaborative editing, decentralized and centralized)
- Music applications (streaming, caching)
- Image recognition
- Live video augmentation (e.g. putting hats on people’s heads)
- VR and augmented reality (very low latency)
- CAD applications
@ulend
---
@transition[none]
## Use Cases (4 of 4)

@ul
- Scientific visualization and simulation
- Remote desktop
- VPN
- Encryption
- Local web server
- Common NPAPI users, within the web's security model and APIs
- Fat client for enterprise applications (e.g. databases)
@ulend

---

# How

---

# @css[bz](Blazor)

@ul[none]
- @size[2.2em](@color[cyan](Browser))
- @size[2.2em](@color[grey](+) @color[lime](Razor))
- @size[2.2em](@color[grey](=) @css[bz](Blazor!))
@ulend

---

## @color[yellow](@fa[exclamation-triangle]) Disclaimer @color[red](@fa[ban])

> @fa[quote-left] @css[bz](Blazor) is an experiment! It is @css[bold](not) yet a committed product.

---?image=assets/interpreted-mode.png&size=contain
---?image=assets/aot-mode.png&size=contain


---

## Thank you
<img src="assets/me.jpg" height="300" />
<br/>
[@davidpine7 @fa[twitter]](https://twitter.com/davidpine7) | [davidpine.net @fa[globe]](http://davidpine.net/)