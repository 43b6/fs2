// Room: /open/prayer/room/tanshu/18.c

inherit ROOM;

void create()
{
	set("short", "��Ժ");
	set("long", @LONG

    �����㳯���˱Ƕ����������Ļ������ڻ����У������������
�ˣ���ݺ��֦ͷ�ϳ�����������ĸ������������ﻨ��ľ��أ�����
�벻��һ��ç��Ҳ���д����ˣ������Ǽ�é�ޣ������ǲ񷿡�

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"19.c",
  "west" : __DIR__"17.c",
  "east" : __DIR__"20.c",
]));
	set("no_clean_up", 0);

	setup();
	}
