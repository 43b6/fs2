inherit ROOM;
void create() {
	set( "short", "空瓶子EQ收藏室" );
	set( "object", ([
		"amount9"  : 1,
		"file5"    : "/open/magic-manor/obj/fon-sky-sword",
		"amount2"  : 1,
		"file7"    : "/open/magic-manor/obj/evil-kill-claw",
		"file2"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount10" : 1,
		"amount6"  : 1,
		"file4"    : "/open/magic-manor/obj/fon-sky-sword",
		"amount3"  : 1,
		"file3"    : "/open/magic-manor/obj/maun-shadow-blade",
		"amount8"  : 1,
		"amount7"  : 1,
		"file1"    : "/open/magic-manor/fire/obj/fire-fan",
		"file6"    : "/open/magic-manor/obj/hwa-je-icer",
		"file10"   : "/open/magic-manor/obj/lin-cloud-fan",
		"amount4"  : 1,
		"file9"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount5"  : 1,
		"amount1"  : 1,
		"file8"    : "/open/magic-manor/obj/evil-kill-claw",
	]) );
	set( "light_up", 1 );
	set( "owner", "ywarter" );
	set( "build", 10228 );
	set( "exits", ([
		"out"       : "/open/clan/sky-wu-chi/room/room117.c",
		"east"      : "/open/clan/sky-wu-chi/room/room125",
	]) );
	set( "long", @LONG
这里的防具和兵器数量之多可真是让你感到不可思议,感觉就是要把
这个FS的所有有名的EQ及WP都收集起来了..你看ㄚ看的你看到了一个指
引..要看兵器的往东边要看防具的往西边..要看宝物的就往北边..至
于一些不知名的东西时就也许要让你猜猜了..因为连主人也不知道有啥
么用处 ...

LONG);
	setup();
	replace_program(ROOM);
}
