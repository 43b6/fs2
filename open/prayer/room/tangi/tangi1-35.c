// Room: /open/prayer/room/tangi/tangi1-35.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG

    ��һ�����,����ŵĳ�ʦ���ú���Ϣ�ĵط�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"tangi1-36.c",
]));
	set("no_clean_up", 0);

	setup();
	}
