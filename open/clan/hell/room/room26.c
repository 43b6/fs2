inherit ROOM;
void create() {
	set( "short", "地狱的审判" );
	set( "long", @LONG
这是住在地府的冤魂在犯错的时候需要接受审问的地方,也是俗仔
地狱的俗仔凯林最常来的地方,他每天几乎都会因为做了不同的蠢
事而被关到这来,如果你在这里遇到他的话,劝你不要问他为何又被
关,毕竟人的脑细胞不是无限的,听太多蠢事也是会死光

LONG);
	setup();
	replace_program(ROOM);
}
