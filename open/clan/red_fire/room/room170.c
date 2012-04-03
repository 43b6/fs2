inherit ROOM;
void create() {
	set( "short", "$HIM$�� $HIR$���� $HIY$�뷿 $HIM$��$NOR$" );
	set( "owner", "fsmud" );
	set( "object", ([
		"file5"    : "/open/evil-area/water/npc/obj/ice",
		"amount5"  : 1,
		"file10"   : "/open/killer/headkill/obj/world_dag",
		"file3"    : "/open/evil-area/water/npc/obj/cloth",
		"file4"    : "/open/evil-area/water/npc/obj/bag",
		"amount3"  : 1,
		"amount8"  : 1,
		"amount4"  : 1,
		"file8"    : "/open/killer/obj/dagger",
		"amount6"  : 1,
		"file6"    : "/open/evil-area/npc/obj/damage_pill",
		"amount2"  : 1,
		"amount1"  : 1,
		"file2"    : "/open/evil-area/water/npc/obj/cap",
		"file7"    : "/open/evil-area/npc/obj/enemy_pill",
		"amount7"  : 1,
		"file9"    : "/open/killer/headkill/obj/world_dag",
		"amount10" : 1,
		"file1"    : "/open/evil-area/water/npc/obj/dagger",
		"amount9"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10002 );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room173",
		"north"     : "/open/clan/red_fire/room/room171.c",
		"south"     : "/open/clan/red_fire/room/room110.c",
		"west"      : "/open/clan/red_fire/room/room172.c",
	]) );
	set( "long", @LONG
�˵س���, ����һ�
LONG);
	setup();
	replace_program(ROOM);
}
