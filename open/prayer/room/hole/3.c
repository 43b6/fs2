///open/prayer/room/hole/3.c

inherit ROOM;

void create()
{
	set("short", "��Ѩ");
	set("long", @LONG

	��ǰ�ƺ���Ƭ�����Ĵ���ɢ����֪������ô����������ھ����
	�������ʲ��У�ֻ��ǽ��ģģ�����Ŀ��м�����"Σ��!Ī��!"����
	����Χɱ��Ѹ�����ͣ�����������һ��ֻ�и�������!!

LONG	);
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"4",
  "south":__DIR__"5",
  "west":__DIR__"2",
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
	setup();
}