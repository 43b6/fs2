inherit ROOM;
void create() {
	set( "short", "$HIC$����¥$NOR$" );
	set( "owner", "borkiller" );
	set( "object", ([
		"file5"    : "/open/killer/obj/s_pill",
		"amount9"  : 1,
		"file7"    : "/open/killer/obj/kill_yar_head",
		"amount2"  : 1,
		"amount10" : 1,
		"amount6"  : 1,
		"file2"    : "/open/mogi/dragon/obj/sunblade",
		"file4"    : "/daemon/class/blademan/obj/shield",
		"amount3"  : 180,
		"file3"    : "/open/killer/obj/bellstar",
		"amount8"  : 1,
		"amount7"  : 1,
		"file1"    : "/open/magic-manor/obj/fire-color-ribbon",
		"file6"    : "/open/sky/obj/lucky_grasslink",
		"file10"   : "/obj/gift/hobowdan",
		"amount4"  : 1,
		"file9"    : "/daemon/class/fighter/figring",
		"amount5"  : 268,
		"amount1"  : 1,
		"file8"    : "/open/tendo/obj/chaosbelt",
	]) );
	set( "build", 10050 );
	set( "light_up", 1 );
	set( "exits", ([
		"up"        : "/open/clan/sky-wu-chi/room/room161.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
		"south"     : "/open/clan/sky-wu-chi/room/room21.c",
		"north"     : "/open/clan/sky-wu-chi/room/room350",
	]) );
	set( "long", @LONG
$HIC$
              ϲ  ��  ��  ��
              ŭ  ��  ��  ��
              ��  ��  ��  ��
              ��  ��  ��  ң
              ��  ��  ��  ��
              ƾ  ��  ��  ��
              ��  ��  ��  ��$NOR$
                              $HIM$by borbear$NOR$


LONG);
	setup();
	replace_program(ROOM);
}
