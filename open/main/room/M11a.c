// Room: /open/main/room/M11a.c

inherit ROOM;

void create()
{
	set("light_up",1);
	set("short", "��ɽ����");
	set("long", @LONG
	�����ǻ��Խ��Խ���ˣ���ȴ�о������ǻ��ȵ���Ϣ��
	�����Ǹ���һ����͵ĸо������˾���ʮ�ֵ���ů��


LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "westup" : __DIR__"M10",
  "eastdown" : __DIR__"M12b",
]));

	setup();
}
