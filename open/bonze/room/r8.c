// Room: /open/soulin/room/r8.c

inherit ROOM;

void create()
{
	set("short", "���ͤ");
	set("long", @LONG
	�����������������ƣ�����Ů�����ý�������
	�ȣ�����˺��ͤ������Ѱ�˵�ʩ�����и���Ϣ
	�Ⱥ�ĵط���
	�����������žͽ����������¡�

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r2",
  "north" : __DIR__"D01",
]));
	set("light_up", "1");

	setup();
}
