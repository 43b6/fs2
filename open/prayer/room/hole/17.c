///open/prayer/room/hole/17.c

inherit ROOM;

void create()
{
	set("short", "��Ѩ");
	set("long", @LONG

	����������֩�������������ǰ��Ҳ�ȸոտտ����ˣ������Ƚ�
	���£���ΧҲ�Ƚϸɾ���������������ϲ�������ǲ��ܴ��⣬����
	��ʬ��Ұ..

LONG	);
 
    set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/bird" : 1,		
]));
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"3",
  "west":__DIR__"16",
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
	setup();
}