// Room : /open/clan/sky-wu-chi/room/room114.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "cmkroom", 1 );
	set( "item_desc", ([ /* sizeof() == 1 */
  "board" : "���������� ̫��(James)�ķ���������������Ϣ..֮����
",
]) );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
  "out" : "/open/clan/sky-wu-chi/room/room113",
]) );
	set( "short", "С����������С��" );
	set( "object", ([
		"file10"   : "/open/mon/obj/ghost-legging",
		"amount2"  : 1,
		"amount4"  : 1,
		"amount5"  : 1,
		"amount1"  : 1,
		"file4"    : "/daemon/class/fighter/armband",
		"file5"    : "/daemon/class/fighter/figring",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file8"    : "/obj/gift/unknowdan",
		"file6"    : "/daemon/class/fighter/figring",
		"amount6"  : 1,
		"amount3"  : 1,
		"amount8"  : 1,
		"file3"    : "/open/port/obj/wolf_ring",
		"file9"    : "/open/mon/obj/ghost-cloak",
		"file1"    : "/obj/gift/xiandan",
		"amount7"  : 1,
		"file2"    : "/open/scholar/obj/icefan",
		"amount9"  : 1,
		"amount10" : 1,
	]) );
	set( "build", 10004 );
	set( "owner", "heronotme" );
	set( "long", @LONG
    ������������֪���켫�����������ΰ���ŵ���
�춫�ţ����켫���·���䲻������ȴҲ��һ��������
�е����õط���·�Ե���������������Ŀɰ����
���õ�������ʳ���أ���������ֻ������޼��İ�����
ϲ�������ˡ�
LONG);
	set( "no_transmit", 1 );
	setup();

	}
