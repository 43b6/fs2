// Room: /open/prayer/room/tanshu/5.c

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
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"4.c",
  "south" : __DIR__"6.c",
]));
	set("light_up", 1);
	set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/general-manager" : 1,
]));
	set("no_clean_up", 0);

	setup();
	}
