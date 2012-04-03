inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIG$��$HIY$��$HIR$ʹ$NOR$��$HIM$��$NOR$" );
	set( "owner", "fsfs" );
	set( "object", ([
		"file4"    : "/open/killer/obj/s_pill",
		"amount10" : 1,
		"file6"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"amount7"  : 1,
		"amount2"  : 1,
		"file8"    : "/daemon/class/bonze/puty_pullium",
		"amount9"  : 1,
		"file7"    : "/open/mon/obj/ghost-cloak",
		"file3"    : "/open/killer/headkill/obj/world_dag",
		"amount8"  : 1,
		"amount6"  : 1,
		"file5"    : "/open/killer/obj/dagger",
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file1"    : "/open/killer/obj/black",
		"amount3"  : 1,
		"amount4"  : 463,
		"file2"    : "/open/killer/headkill/obj/world_dag",
		"file10"   : "/open/mon/obj/ghost-legging",
		"amount1"  : 30,
	]) );
	set( "light_up", 1 );
	set( "build", 10740 );
	set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room162",
		"west"      : "/open/clan/red_fire/room/room85.c",
		"east"      : "/open/clan/red_fire/room/room161",
		"north"     : "/open/clan/red_fire/room/room160",
	]) );
	set( "long", @LONG

        $HIW$�j�j�j���j�j�j���j�j�j$HIR$���j�j�j��$HIW$�j�j�j���j�j�j���j�j�j
                       $HIC$�̹ǵĺ��磬����ƬƬѩ��

                         ��ѩ������������Ѫӡ
        $HIW$�j�j�j���j�j�j���j�j�j$HIR$���j�j�j��$HIW$�j�j�j���j�j�j���j�j�j

$NOR$����һ������ʱ��ͷ�������$HIC$����$HIY$��$HIW$��$NOR$,
����ͻȻ�뵽�����ѵ�����$HIR$��$HIG$��$HIC$��$HIY$ʹ$NOR$˯���ĵط���??
������һ�����$HIM$��̬$NOR$...
Ҫ˯�����������һ��ĵط�˯ŷ...


LONG);
	setup();
	replace_program(ROOM);
}
