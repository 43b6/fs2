// Room: /open/prayer/room/tanshu/15.c

inherit ROOM;

void create()
{
	set("short", "ƫ��");
	set("long", @LONG

    һЩ�����ڴ����������������������æµ�����ӣ�Ϊ��ֻ�ǰ�
��̳����������������ɣ���һ��ʲô��ʧ�����˿ɵ�����������
�߾��Ǻ�Ժ�ˡ�

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"7.c",
  "north" : __DIR__"17.c",
]));
	set("light_up", 1);
	set("no_clean_up", 0);

	setup();
	}
