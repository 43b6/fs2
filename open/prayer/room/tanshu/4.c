// Room: /open/prayer/room/tanshu/4.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG

    �����������Ӽ����͵ĵط�,��ͷ�Ǹ�ԵĻ�Ƥ����,����������
�Ǻ�̴ľ������,ǽ��һ����ɫ��ͷ�ıڻ�,ʹ�ø�Բ�ʧһ�ɰ���,
�����߸�����,�Ը�����ְ��

LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"3.c",
  "west" : __DIR__"7.c",
  "east" : __DIR__"5.c",
  "enter" : __DIR__"16.c",
]));
	set("light_up", 1);
	set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/tanshu" : 1,
]));
	set("no_clean_up", 0);
	set("valid_startroom", 1);

	setup();
	}
