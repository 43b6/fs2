// Room : /open/clan/sky-wu-chi/room/room104.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "����޼�" );
	set( "short", " ��ʯС· 1" );
	set( "light_up", 1 );
	set( "build", 93 );
	set( "object", ([
		"amount1"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/wu/npc/obj/armband",
		"file1"    : "/open/dancer/obj/yuaboots",
		"amount2"  : 1,
		"file2"    : "/open/gsword/obj/yugem",
	]) );
	set( "long", @LONG
������������֪���켫�����������ΰ���ŵ���
�����ţ����켫���·���䲻������ȴҲ��һ��������
�е����õط���·�Ե���������������Ŀɰ����
���õ�������ʳ���أ���������ֻ������޼��İ�����
ϲ�������ˡ�

LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
		"east"      : "/open/clan/sky-wu-chi/room/room103.c",
]) );
	set( "cmkroom", 1 );
	setup();

	}
