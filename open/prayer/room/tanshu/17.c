// Room: /open/prayer/room/tanshu/17.c

inherit ROOM;

void create()
{
	set("short", "��Ժ");
	set("long", @LONG

    �����㳯���˱Ƕ����������Ļ������ڻ����У������������
�ˣ���ݺ��֦ͷ�ϳ�����������ĸ������������ﻨ��ľ��أ�����
�벻��һ��ç��Ҳ���д����ˡ�

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"15.c",
  "east" : __DIR__"18.c",
]));
	set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/gardener1.c" : 1,
]));
	set("no_clean_up", 0);

	setup();
	}
