// Room : /open/clan/sky-wu-chi/room/room112.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
�������̫�ӵ�����С����..���������װ�Σ�ʹ��о�����һ
�ɺ����ص������Ƶģ�������俴��ǽ��������һ��$HIY$��ʾ�� (Board)$NOR$
�����������߿������������ֵֹ���Ʒ�����㿴��������..������
ͷ�����͵ĺܲ�������޲��øϽ��뿪�˵�..
����������������$HIC$(�˵�����һ�ɺ�ǿ��ĺ���)$NOR$

LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
  "out" : "/open/clan/sky-wu-chi/room/room111",
]) );
	set( "clan_room", "����޼�" );
	set( "item_desc", ([ /* sizeof() == 1 */
  "board" : "���������� ̫��(James)�ķ���������������Ϣ..֮����
",
]) );
	set( "short", "���ˣ�����С�� " );
	set( "owner", "lazycancer" );
	set( "object", ([
		"file10"   : "/open/mon/obj/ghost-cloak",
		"file3"    : "/obj/gift/unknowdan",
		"amount6"  : 1,
		"file2"    : "/obj/gift/hobowdan",
		"amount10" : 1,
		"amount3"  : 1,
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount5"  : 1,
		"amount1"  : 1,
		"file8"    : "/open/mon/obj/ghost-helmet",
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount9"  : 1,
		"amount7"  : 1,
		"amount8"  : 1,
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount2"  : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/open/killer/obj/k_ring",
		"amount4"  : 1,
	]) );
	set( "build", 10068 );
	set( "light_up", 1 );
	setup();

	}
