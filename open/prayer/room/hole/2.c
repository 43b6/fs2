///open/prayer/room/hole/2.c

inherit ROOM;

void create()
{
	set("short", "��Ѩ");
	set("long", @LONG

	�ߵ����ڣ�һ���������֮�����ڶ���������죬�������ͷֱ��
	��������˵��ͷħ���������ܹ�������δ���ܳ���ȥ�������ý�
	�����Ƿ�������˻�ˮ...........

LONG);
	set("exits", ([ /* sizeof() == 2 */
  "out" : __DIR__"1",
  "east":__DIR__"3",
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
	setup();
}