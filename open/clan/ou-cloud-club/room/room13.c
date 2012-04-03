// Room : /open/clan/ou-cloud-club/room/room13.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIC$����$HIR$��$NOR$" );
	set( "object", ([
		"amount4"  : 1,
		"amount6"  : 1,
		"amount7"  : 1,
		"file5"    : "/open/prayer/obj/boris-cloth",
		"file3"    : "/daemon/class/fighter/armband",
		"file2"    : "/open/sky/obj/lucky_grasslink",
		"amount9"  : 1,
		"file7"    : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"file8"    : "/open/mon/obj/ghost-cloak",
		"amount8"  : 1,
		"file1"    : "/open/dancer/obj/yuawaist",
		"file6"    : "/open/scholar/obj/s_hands",
		"amount5"  : 1,
		"amount2"  : 1,
		"file9"    : "/open/magic-manor/fire/obj/fire-fan",
		"file4"    : "/open/mon/obj/ghost-claw",
		"amount3"  : 1,
	]) );
	set( "owner", "enter" );
	set( "build", 10529 );
	set( "no_transmit", 1 );
	set( "exits", ([ /* sizeof() == 1 */
		"east"      : "/open/clan/ou-cloud-club/room/room180",
		"west"      : "/open/clan/ou-cloud-club/room/room119.c",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "long", @LONG
���������Է���ֻ�����ǽ�Ϸ���һ������ŵĹ���
ƴͼ��ͼ��С������ɰ����ұ�ǽ�Ϲ����������Ĵ���ս
����õ�ս��Ʒ��һЩ�����м���ϡ�е��������߾���ǽ
�ϣ����з���һ�ź����񴲣��������ӹ�Ĺ��ȡ������һ
�������������滳����Ҫ��ô˯�ˣ�

LONG);
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "light_up", 1 );
	setup();

	}
