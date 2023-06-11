# **Git**

### **Co je dobré vědět**

#### **K čemu git používáme?**
```
Git je verzovací systém, který nám umožňuje sledovat změny v kódu a vracet se k předchozím verzím. Zjednodušuje spolupráci více lidí na jednom projektu. 
```
#### **Co je to repozitář?**
```
Repozitář je místo, kde se ukládají soubory, které jsou verzovány.
```
#### **Co je to commit?**
```
Commit je základní jednotka verzování. Commit je vždy označený nějakým názvem a popisem. Commit obsahuje všechny změny, které jsme udělali od posledního commitu.
```
#### **Co je to branch?**
```
Branch je větev, která se odvětvuje od hlavní větve (master). Větve se používají pro vývoj nových funkcí, které nejsou ještě hotové. Když je funkce hotová, tak se větev sloučí zpět do hlavní větve.
```

## **Co potřebuji**
- [git](https://git-scm.com/download/)  
- Hosting repozitáře [Github](https://github.com) / [GitLab](https://about.gitlab.com/) a další

### *volitelné* 
- editor - [Visual Studio Code](https://code.visualstudio.com/)
- grafické rozhraní - [Github Desktop](https://desktop.github.com/) nebo jenom rozšíření do VS Code [Git Graph](https://marketplace.visualstudio.com/items?itemName=mhutchie.git-graph)
- Sledování času na projektech - [WakaTime](https://wakatime.com/), [Codetime](https://codetime.dev)

## **Nezapomeňte**
Nastavte si uživatelské jméno a email, které budete používat při commitu.
[Více informací](https://git-scm.com/docs/git-config)
```
git config --global user.name "Jan Novák"
git config --global user.email "jan.novak@email.cz"
```

## **Jak začít**
- [Vytvoření repozitáře](https://github.com/new)
    - Popis repozitáře
    - Public / Private
    - Readme
    - [.gitignore](##**.gitignore**) - soubor, který říká, které soubory se mají ignorovat při commitu
    - Licence

- inicializace gitu v repozitáři
```
git init
```
(vytvoří se složka .git, která obsahuje všechny informace o repozitáři)

- nastavení vzdáleného repozitáře
```
git remote add origin git@github.com:Robot7769/test.git
```
(vytvoří se vzdálený repozitář, který se bude jmenovat **origin**)
- nastavení výchozí větve
```
git branch -M main
```
(vytvoří se větev **main**, která bude výchozí) <br>
Pro vytvoření nové větve se používá příkaz [` git branch nazev_vetve `]()

### **Co je dobré udělat ještě před prvním commitem**
- zkontrolovat [`git config`](##**Nezapomeňte**)
- zkontrolovat soubor [.gitignore](##**.gitignore**)
- vytvoření popisu [README.md](##**README.md**)
- vytvoření souboru [LICENSE](##**LICENSE**)
- vytvoření souboru [.editorconfig](##**.editorconfig**)



#### **Práce s repozitářem**
- přidání souborů do commitu
```
git add soubor_ktery_chci_pridat.txt
```
- vytvoření commitu
```
git commit -m "Popis commitu"
```
(vytvoří se commit, který obsahuje všechny změny, které jsme přidali pomocí [` git add file `]())
- odeslání commitu na vzdálený repozitář
```
git push -u origin main
```
(odeslání commitu na vzdálený repozitář, **-u** nastaví větev **main** jako výchozí) (při dalších odesláních stačí pouze [` git push `]())


## **.gitignore**
Do gitignore chceme přidat všechny soubory/složky, které se v projetu vytváří automaticky (např. složka .pio, build atd.). <br>
Všechny soubory/složky, které se mají ignorovat, se přidávají na nový řádek. <br>
Přidáváme sem i soubory které nechceme, aby se nahrávali na vzdálený repozitář. <br>
Generátor gitignore souboru pro dané programovací jazyky [zde](https://www.toptal.com/developers/gitignore)
příklad:
```
.pio
.vscode
soubor_ktery_nebude_na_gitu.md

```

## **README.md**
Základní popis projektu a struktura s odkazy na různé části projektu.

## **LICENSE**
V souboru LICENSE je definována licence, pod kterou je projekt uvolněn. <br>
Více informací o licencích [zde](https://choosealicense.com/)

## **.editorconfig**
V souboru .editorconfig jsou definována pravidla pro formátování kódu, která se vztahují na soubory.
příklad:
```c
root = true

[*]
charset = utf-8
trim_trailing_whitespace = true
end_of_line = lf
insert_final_newline = true

[Makefile]
indent_style = tab

[*.{c,h,cpp,hpp}]
indent_style = tab
indent_size = 1

```
