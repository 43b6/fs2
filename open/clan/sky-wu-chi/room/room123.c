inherit ROOM;
void create() {
	set( "short", "浧慕澐小房" );
	set( "object", ([
		"amount1"  : 19,
		"file1"    : "/open/fire-hole/obj/p-pill",
	]) );
	set( "owner", "miffy" );
	set( "light_up", 1 );
	set( "build", 10035 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room228",
		"east"      : "/open/clan/sky-wu-chi/room/room50",
	]) );
	set( "long", @LONG
在这个小房里并没有什么样的东西...有的只是他轻遍的一些小衣
但是你想要在这里看到什么东西的话,也许是要你失望了..因为这里没
有你所想要看到的东西..突然间你看到了一些装备..看起来是非常豪
华的..有
王母腰带(Girl belt)宝莲靴(Girl boots)晓月披肩(Girl cloak)凤袍(Girl cloth)
哇..真是给他有够好的装备呢...

LONG);
	setup();
	replace_program(ROOM);
}
