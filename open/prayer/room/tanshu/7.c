// Room: /open/prayer/room/tanshu/7.c

inherit ROOM;

void create()
{
	set("short", "ƫ��");
	set("long", @LONG

    ����վ��λ���������ŵ�ƫ��,ͨ��һ����ͽ������ϰ��,�����
��ϰ��֮��,���Ժ������д�����,�������һ��������,�е�,��,ǹ,
��,�...�ȸ�ʽ����.

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"8.c",
  "north" : __DIR__"15.c",
  "east" : __DIR__"4.c",
]));
	set("light_up", 1);
	set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/general-officer.c" : 1,
]));
	set("no_clean_up", 0);

	setup();
	}
