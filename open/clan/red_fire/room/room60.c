inherit ROOM;
void create() {
	set( "short", "$HIC$��$NOR$��$HIY$����$NOR$" );
	set( "owner", "lauwei" );
	set( "object", ([
		"file1"    : "/open/magic-manor/obj/hwa-je-icer",
		"file9"    : "/daemon/class/fighter/ywhelme",
		"file2"    : "/open/mogi/castle/obj/ninepill",
		"amount8"  : 1,
		"amount4"  : 1,
		"file5"    : "/open/fire-hole/obj/p-pill",
		"amount5"  : 17,
		"amount1"  : 1,
		"file8"    : "/obj/gift/unknowdan",
		"file10"   : "/obj/gift/unknowdan",
		"amount9"  : 1,
		"amount2"  : 40,
		"file3"    : "/open/magic-manor/obj/fire-ball",
		"amount6"  : 1,
		"file4"    : "/obj/gift/xiandan",
		"amount3"  : 1,
		"file6"    : "/open/capital/obj/4-4",
		"amount7"  : 1,
		"file7"    : "/open/ping/obj/cloud_fan",
		"amount10" : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 11520 );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room87.c",
	]) );
	set( "long", @LONG

��һ���žͿ���һ��$HIC$���Ҷ�$NOR$-----$HIR$��$HIG$��$HIY$��$HIC$ˮ$NOR$-----
�����￴��ֻ������һ������һ��Ҳ����������
��$HIY$ɳ��$NOR$���Ͽ�����ʮ���$HIC$�����$NOR$....����....��
Ƥ$HIY$ɳ��$NOR$Ү�͸߼�$HIC$����$NOR$Ү�����ɼ���һ�һ���ǳ�
��Ǯ����ô����$HIM$��������$NOR$����������Ľ......


LONG);
	setup();
	replace_program(ROOM);
}
