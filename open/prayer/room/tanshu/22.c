// Room: /open/prayer/room/tanshu/22.c

inherit ROOM;

void create()
{
	set("short", "���䳡");
	set("long", @LONG

    ���ȡ��ȡ���������ĵ�������ϰ�Դ���������Ϲ��򵽼ң�
    ���Կ��ǿ�����ȥ��һ�ţ�����Ҫ�ǵô����˿ɲ�����Ŷ��

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"12.c",
  "north" : __DIR__"14.c",
]));
	set("objects", ([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee1.c" : 2,
]));
	set("no_clean_up", 0);

	setup();
	}
