// Room : /open/clan/sky-wu-chi/room/room88.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "����޼�" );
	set( "short", "ͨ����ͷ" );
	set( "object", ([
		"file6"    : "/daemon/class/bonze/puty_pullium",
		"file2"    : "/open/ping/obj/chilin_legging",
		"file4"    : "/open/port/obj/wolf_ring",
		"amount3"  : 1,
		"amount2"  : 1,
		"file1"    : "/open/gsword/obj/boots",
		"amount1"  : 1,
		"amount6"  : 1,
		"amount4"  : 1,
		"file3"    : "/open/ping/obj/gold_hand",
		"amount5"  : 1,
		"file5"    : "/open/gsword/obj/yuskirt",
	]) );
	set( "light_up", 1 );
	set( "owner", "aow" );
	set( "build", 10400 );
	set( "long", @LONG
������ͨ���ľ�ͷ����������㲻����ס�������񾭽�
�ŵĶ����������·���ʲô������ͻȻ�Ӿ�ͷð����������
������ȥ���Ǿ�ͷȴ��ɢ���ź���Ĺ�â����������ɶ���
�ְ�������ͷ���ˡ������ͷ�����Ų���������С������
������ͷ����ȥ��һ�������л�һ�߆��Ű����ӷ𣬺޲���
��ʱ�����������ߡ�

LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
		"south"     : "/open/clan/sky-wu-chi/room/room84",
]) );
	set( "cmkroom", 1 );
	setup();

	}
