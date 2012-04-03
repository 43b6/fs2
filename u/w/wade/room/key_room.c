// Room: /u/w/wade/room/test.c
// ���Ӧ��Կ�׷��� /u/w/wade/obj/key.c
// ������ #include <room.h>
// �������趨 set("need_key/����", 1)
// create_door() ����� set("exits"....) ֮��
// ������������� lock/unlock, ���� help lock/unlock ȥ�õ����ѶϢ


#include <room.h>
inherit ROOM;

void create()
{
	set("short", "Կ�׷�");
	set("long", @LONG
	// ��Ҫ����, ֻҪ�� create_door() ��������, ������ʾ
	// ֵ��ע���������, һ�Ǻ�ʽ��ʽ����, �����вο�
	// ��һ��������һ��Ҫ������ͬʱ����, ��ȥ�˷������һ�߲ο�
	create_door("east", "�������", "west", DOOR_OPENED);

	// ������Ҫ��Կ��, ��ֻ��������ʾ
	// Կ������������ֲ�ͬ��ģʽ, һ���ض���, һ�����õ�
	// Ŀǰû�з�ֹ�˼�������Կ�׵Ĺ���, �����Լ��� init() ����
	// �����Լ��� open ������ʹ��, ����Կ�׷���, ��ȥ����Ŀ¼Ѱ��
	// ~wade/obj/key.c
	set ("need_key/east", 1);
LONG
	);

	set("exits", ([
	    "east"	:	"/u/w/wade/workroom"
	]));
	set ("need_key/east", 1);
	create_door("east", "�������", "west", DOOR_CLOSED);

	set("light", "1");
	setup();
}
