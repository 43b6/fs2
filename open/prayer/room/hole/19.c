///open/prayer/room/hole/19.c

inherit ROOM;

void create()
{
	set("short", "��Ѩ");
	set("long", @LONG

	��ǽ�ڳ�������̦����������������ط����ĳ�ʪ������Ҳ����
	���࣬�������ʯ����һ֦��ֱû��ʸ���㲻����̾���֮�˹�
	��������...

LONG	);
    set("objects", ([ /* sizeof() == 2 */
   "/open/prayer/npc/emery-giant" : 1,		
   "/open/prayer/npc/lion" : 1,		
]));
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"20",
  "west":__DIR__"18",
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
	setup();
}