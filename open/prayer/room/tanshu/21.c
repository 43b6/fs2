// Room: /open/prayer/room/tanshu/21.c

inherit ROOM;

void create()
{
	set("short", "���䳡");
	set("long", @LONG

    �����ŵ����䳡�������Ǻ���䤱��Ķ��Ŵ�̫�������ڵ�����ֻ
Ϊ��������ʥ��ľ�����ѧ����ϣ���г�һ�����ڽ��������Լ��ĵ�
λ���ɼ�Ҫѧ��ʥ��̵���ѧ�����������е����ס�

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"13.c",
  "east" : __DIR__"12.c",
]));
	set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee1.c" : 1,
]));
	set("no_clean_up", 0);

	setup();
	}
