// Room: /open/prayer/room/tanshu/3.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG

    �����������ŵ�������,ÿ���岽����һյ�͵�,���͵�վ������
�����ĳ߸�,�ҵ�̵ĺò�ϸ��,ǽ��һ�������Ĵ�ڻ�ֱ����������
վ������������,ԭ��������Ե�Ʒζֻ�����,��ǰ�߾��Ǵ����ˡ�

LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"8.c",
  "south" : __DIR__"2.c",
  "north" : __DIR__"4.c",
  "east" : __DIR__"6.c",
]));
	set("light_up", 1);
	set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/servant" : 1,
]));
	set("no_clean_up", 0);
	set("", "");

	setup();
	}
