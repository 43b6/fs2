// Room : /open/clan/demon_castle/room/hall.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "��ħ��" );
	set( "build", 93 );
	set( "light_up", 1 );
	set( "no_transmit", 1 );
	set( "long", @LONG

    �����Ƕ�ħ�ǵ�����һ���Ӵ�ĵ�������������ǰ��ֻ����
���˫����Լ͸¶��а���ɱ��������ħ���ʸ��ŵ������Х����
����ħ���������ֵ�һаħ -- ������һ�ִ����ģ������¾ۼ�һ��
�Ӵ�Ķ�����������֮ɥ�������Զ�ħ��Ҳ����Ϊ���ֽ��أ������
������������Ϊ��ħ����

LONG);
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 4 */
		"up"        : "/open/clan/demon_castle/room/room5.c",
		"north"     : "/open/clan/demon_castle/room/room3.c",
		"west"      : "/open/clan/demon_castle/room/room2.c",
]) );
	setup();
	call_other( "/obj/board/demon_castle_b.c", "???" );

	}
