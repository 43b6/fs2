///open/prayer/room/hole/12.c

inherit ROOM;

void create()
{
	set("short", "��Ѩ");
	set("long", @LONG

	����ǽ�ڿӿӶ���������һЩ����ı��в������棬��Ȼ��������
	�й����ҵĴ򶷣�����ȫ��һ��һ���ĵķ�㣬������ֲֿ̹���
	���찡!!�ѵ���Щ�����ж�??��Ӵ!!���������Ѿ��ж���??

LONG	);
 
    set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/ditail-snake2" : 1,		//˫ͷ��β��
]));

	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"5",
  "south" : __DIR__"9",
  "west":__DIR__"10",
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
	setup();
}