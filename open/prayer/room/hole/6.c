///open/prayer/room/hole/6.c

inherit ROOM;

void create()
{
	set("short", "��Ѩ");
	set("long", @LONG

	�ߵ��˴�����Ȼ�����Ĵ�а�����󣬵���Ѫ��δ�ɣ���Ȼ������
	��һ����ɱ��ǿ�ҵ�ɱ������е�Σ������������С��Ϊ��....
        �ڶ�Ѩ��һ��������һλ�������˵�����������Ƿ�Ҫ��ȥ��
	����??

LONG	);
 
    set("objects", ([ /* sizeof() == 2 */
  "/open/prayer/npc/crab-ox" : 1,		
  "/open/prayer/npc/hurter" : 1,		

]));
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"8.c",
  "south":__DIR__"4.c",
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
	setup();
}