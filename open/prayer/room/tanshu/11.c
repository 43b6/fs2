// Room: /open/prayer/room/tanshu/11.c

inherit ROOM;

void create()
{
	set("short", "���䳡");
	set("long", @LONG

    �����������ŵ����䳡,�������������ۼ�����ϰ��,�������
�Ժ������д�����,�����߾��������ŵ����ſ�. 

LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"13.c",
  "south" : __DIR__"12.c",
  "north" : __DIR__"1.c",
  "east" : __DIR__"14.c",
]));
	set("light_up", 1);
	set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/general" : 1,
]));
	set("no_clean_up", 0);

	setup();
	}
