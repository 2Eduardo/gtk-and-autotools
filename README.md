# First Application in GTK3

Esta é minha primeira aplicação utilizando o [widget toolkit GTK](http://gtk.org) 
a qual servirá de base para futuros projetos. Para construir o projeto é utilizado
um conjunto de ferramentas conhecidas como [Autotools](http://autotools.io).

First Application tem como objetivo demonstrar a integração de todo o ambiente de 
desenvolvimento providenciado pela [Gnome](http://gnome.org) com os métodos padrões 
de construção de um pacote GNU.

## Building

A basic autotools project is provided to facilitate the build process. To use them, 
just run the commands below in a terminal like bash:

```bash
autoreconf -iv
mkdir -p build && cd build
../configure
make
```

First the commands will generate the files needed by autoconf and automake and then 
the `../configure` command is going to check project dependencies on the system and 
generate the `Makefiles`. Finally, `make` will compile all the project sources.

- Run the program with `src/first-app` on the builder folder.
