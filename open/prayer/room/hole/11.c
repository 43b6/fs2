///open/prayer/room/hole/11.c

inherit ROOM;

void create()
{
	set("short", "��Ѩ");
	set("long", @LONG

	Ũ����ɢȥ��, ���Ȼ���ֵ����������ĳ���������!!������һ
	�źںڵ�����....... �߽�һ��, ����һֻ˫ͷ����β��!!����¶
	��̰�����۹�, ֱ��������......�ɶ�Ĺ���!!����ƴ��!!

LONG	);
    set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/ditail-snake" : 1,		//˫ͷ��β��
]));
	set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"13",
  "south" : __DIR__"2",
  "west" : __DIR__"6",
  "north":__DIR__"9",
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
	setup();
}