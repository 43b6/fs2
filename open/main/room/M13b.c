// Room: /open/main/room/M13b.c

inherit ROOM;

void create()
{
	set("light_up",1);
	set("short", "��ɽ����");
	set("long", @LONG
	���ʵ��������˷ֲ���ʱ���뷽����Ҫ������
	���ߣ�ֻ������ɽ�ڵķ������������ˡ�


	
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "westup" : __DIR__"M12b",
  "eastdown" : __DIR__"M14a",
]));

	setup();
}
