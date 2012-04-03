inherit ROOM;
void create() {
	set( "short", "������һ��֮���칤��" );
	set( "owner", "biwem" );
	set( "object", ([
		"amount7"  : 1,
		"amount10" : 1,
		"amount1"  : 1,
		"amount3"  : 1,
		"amount6"  : 1,
		"file1"    : "/open/capital/room/king/obj/km-belt",
		"file4"    : "/open/tendo/obj/chaosbelt",
		"amount2"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/capital/room/king/obj/km-belt",
		"file10"   : "/open/mon/obj/ghost-claw",
		"amount4"  : 1,
		"file9"    : "/open/capital/room/king/obj/km-cloak",
		"amount9"  : 1,
		"file5"    : "/open/capital/room/king/obj/km-belt",
		"amount5"  : 1,
		"file7"    : "/open/capital/room/king/obj/km-belt",
		"file6"    : "/open/capital/room/king/obj/km-belt",
		"file8"    : "/open/capital/room/king/obj/km-boots",
		"amount8"  : 1,
	]) );
	set( "build", 10029 );
	set( "exits", ([
		"up"        : "/open/clan/sky-wu-chi/room/room278.c",
		"north"     : "/open/clan/sky-wu-chi/room/room279.c",
		"south"     : "/open/clan/sky-wu-chi/room/room70.c",
		"enter"     : "/open/clan/sky-wu-chi/room/room272.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
		"east"      : "/open/clan/sky-wu-chi/room/room280.c",
		"down"      : "/open/clan/sky-wu-chi/room/room176",
		"west"      : "/open/clan/sky-wu-chi/room/room281.c",
	]) );
	set( "long", @LONG
�ؽ���һ��,���󴼺�Ĵ�������˱Ƕ���,
���䱻��ǰ�ĺڰ�������,
�������˵ľ�����ʹ��һ̽����,
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
