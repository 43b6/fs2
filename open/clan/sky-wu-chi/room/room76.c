// Room : /open/clan/sky-wu-chi/room/room76.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "short", "��ɫˮ�����" );
	set( "owner", "sski" );
	set( "object", ([
		"file3"    : "/open/capital/room/king/obj/dagger1",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"file6"    : "/open/mon/obj/ghost-cloak",
		"amount2"  : 1,
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount4"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/prayer/obj/boris-cloth",
		"file10"   : "/open/sky/obj/lucky_grasslink",
		"amount3"  : 1,
		"amount10" : 1,
		"file1"    : "/open/mogi/castle/obj/lochagem",
		"amount7"  : 1,
		"file9"    : "/open/dancer/obj/yuawaist",
		"amount6"  : 1,
		"amount1"  : 1,
		"file4"    : "/open/mon/obj/ghost-legging",
		"file2"    : "/open/mon/obj/ghost-cloak",
		"amount8"  : 1,
		"amount9"  : 1,
	]) );
	set( "build", 12321 );
	set( "long", @LONG
���߽�����ʱ���㷢��������ط���ô���������ģ�����������
���������������ľ����������ֻ�����ܻ���һ����δ�����о���
������һЩ���������Һ÷����������������ߣ����Ĳ������Լ���
������ж�ȥ�о����������ı䶯��ͻȻ���㷢���˳�ʱ�յ������
�����������ܵ�����֮�У�ֻ�ǵ������������ͬʱ������������ʱ
��һ��ʮ�����ﳯ����˹�����

LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"east"      : "/open/clan/sky-wu-chi/room/room78.c",
		"south"     : "/open/clan/sky-wu-chi/room/room50.c",
		"west"      : "/open/clan/sky-wu-chi/room/room213",
		"north"     : "/open/clan/sky-wu-chi/room/room145.c",
]) );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "����޼�" );
	setup();

	}
