// Room : /open/clan/sky-wu-chi/room/room23.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "long", @LONG
���ߵ�ת�����������ÿռ������ʮ����խ����Ȼ�㿴��һ��СС�ţ�
����д�Ű˸�СС�֡��ӭ����СС�����������Ĵ�������ͷ��ȥ����
�����һƬ��Ҳ����������ڣ�������Ū��һЩ������ȴ�漴���ڰ����ɣ����ǿ�
��֮���վ��в�����������������԰����϶���Ķ�������СС���ԱߵĹ����
��������������δ֪��ͨ���߽�ȥ������

                $BLU$�� �� ��   �����~�~�}�}�|�|�{�{    �� �� ��$NOR$

��Ȼ�Ĺ�������һʱ�޷����ܣ������漴�㷢����ߵĶ����·�С�˺ü��ţ���
�������˺�ͯ������һ�㣬��Ȼ��СС���硣

LONG);
	set( "short", "$HIW$��СС������ڡ�$NOR$" );
	set( "object", ([
		"file10"   : "/open/mon/obj/ghost-cloak",
		"file5"    : "/open/sky/obj/lucky_grasslink",
		"file1"    : "/open/killer/obj/k_ring",
		"file4"    : "/open/scholar/obj/icefan",
		"amount8"  : 1,
		"file2"    : "/daemon/class/bonze/puty_pullium",
		"amount1"  : 1,
		"amount6"  : 1,
		"amount10" : 1,
		"amount9"  : 1,
		"amount4"  : 1,
		"amount7"  : 1,
		"amount3"  : 1,
		"file9"    : "/daemon/class/fighter/armband",
		"file3"    : "/open/mon/obj/ghost-helmet",
		"amount5"  : 1,
		"file8"    : "/open/mon/obj/ghost-legging",
		"file7"    : "/open/dancer/obj/yuawaist",
		"amount2"  : 1,
		"file6"    : "/open/dancer/obj/maple_ribbon",
	]) );
	set( "build", 10175 );
	set( "owner", "peiyi" );
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
		"enter"     : "/open/clan/sky-wu-chi/room/room74.c",
		"west"      : "/open/clan/sky-wu-chi/room/room12.c",
]) );
	set( "no_clean_up", 0 );
	set( "clan_room", "����޼�" );
	set( "no_transmit", 1 );
	setup();

	}
