// Room: /open/prayer/room/tanshu/13.c

inherit ROOM;

void create()
{
	set("short", "ƫ��");
	set("long", @LONG

    ����������������Ľк���,"ɱ��ɱ��",�����Ƕ��Ŵ�̫������
������,���������г�����־������,�޷���Ҫ�г�һ����ѧ�������
����,����������.

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"21.c",
  "east" : __DIR__"11.c",
]));
	set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee2.c" : 1,
]));
	set("light_up", 1);
	set("no_clean_up", 0);

	setup();
	}
