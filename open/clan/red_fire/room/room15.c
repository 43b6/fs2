// Room : /open/clan/red_fire/room/room15.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_clean_up", 0 );
	set( "light_up", 1 );
	set( "cmkroom", 1 );
	set( "no_transmit", 1 );
	set( "clan_room", "������" );
	set( "short", "$HIR$��$NOR$$HIG$��$NOR$$HIC$��$NOR$$HIM$��$NOR$$MAG$�鷿$NOR$" );
	set( "owner", "borchin" );
	set( "object", ([
		"amount8"  : 1,
		"file1"    : "/open/ping/obj/poison_pill",
		"amount10" : 1,
		"amount3"  : 1,
		"file9"    : "/open/dancer/obj/yuawaist",
		"file8"    : "/obj/gift/xiandan",
		"amount4"  : 101,
		"amount1"  : 38,
		"amount9"  : 1,
		"file3"    : "/obj/gift/shenliwan",
		"amount7"  : 1,
		"file6"    : "/open/sky/obj/lucky_grasslink",
		"file2"    : "/open/fire-hole/obj/b-pill",
		"amount5"  : 15,
		"amount6"  : 1,
		"file7"    : "/obj/gift/unknowdan",
		"file10"   : "/obj/gift/bingtang",
		"amount2"  : 553,
		"file4"    : "/open/mogi/castle/obj/ninepill",
		"file5"    : "/open/fire-hole/obj/r-pill",
	]) );
	set( "exits", ([
		"north"     : "/open/clan/red_fire/room/room104",
	]) );
	set( "build", 10440 );
	set( "long", @LONG

��������������鼮�����˻�����$HIM$�����徭$NOR$֮�⣬���ռ�
$YEL$��$NOR$$HIC$��$NOR$$HIM$����$NOR$�ĸ��ֵ伮����������һ����������$HIC$��ɢ��ѧ$NOR$��
����������д�ľ���һЩ����Ѷ��ķ��ţ�����������һ
���飬��$HIR$���Դ���$NOR$��������ʲô��������ֻ������һ����
Ī����������Щ��Ī�����Ѿ�ʧ����$RED$����$NOR$$HIB$�书$NOR$$HIC$����$NOR$��


LONG);
	setup();

	}
