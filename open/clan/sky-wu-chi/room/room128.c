inherit ROOM;
void create() {
	set( "short", "$HIC$˼��֮��$HIW$�ؽ�$NOR$" );
	set( "light_up", 1 );
	set( "build", 10937 );
	set( "object", ([
		"file5"    : "/open/capital/guard/gring",
		"amount9"  : 1,
		"file2"    : "/obj/gift/shenliwan",
		"amount4"  : 1,
		"amount8"  : 1,
		"file1"    : "/open/fire-hole/obj/b-pill",
		"file9"    : "/obj/gift/xiandan",
		"amount10" : 1,
		"file6"    : "/obj/gift/unknowdan",
		"file8"    : "/open/scholar/obj/icefan",
		"amount3"  : 1,
		"file7"    : "/open/capital/room/king/obj/dagger1",
		"amount6"  : 1,
		"amount1"  : 7,
		"amount7"  : 1,
		"file10"   : "/open/mon/obj/ghost-claw",
		"amount5"  : 1,
		"file4"    : "/open/mogi/dragon/obj/scale",
		"amount2"  : 1,
		"file3"    : "/daemon/class/bonze/puty_pullium",
	]) );
	set( "owner", "salicili" );
	set( "exits", ([
		"up"        : "/open/clan/sky-wu-chi/room/room41.c",
	]) );
	set( "long", @LONG
�ؽ���һ��,���󴼺�Ĵ�������˱Ƕ���,
�����˵ľ�����ʹ��һ̽����,
��Ȼһ�󺮷����·�ӿ��,
���ߵ����½ײŷ��ֵذ廬��ʪʪ��,
������һ��,�ŷ����Ǳ���,
������ϰ��صĳ���þ�,���㲻����Ľ��˼����ԣ������,
$HIC$����$NOR$�����Ļ�����ð��,
˫��һ�� �ȵ�{�㼸ʱ͵����Щ�þ�?������͵�����Ѱ�?}
LONG);
	setup();
	replace_program(ROOM);
}
