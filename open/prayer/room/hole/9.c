///open/prayer/room/hole/9.c

inherit ROOM;

void create()
{
	set("short", "��Ѩ");
	set("long", @LONG

	�ߵ�������е�һ��ϻ̣�������������Ũ�������޷������
	�򣬻���ʱ�ŵ�һ��ǿ�ҵ���ζ�����˲�����Ż������ɢ���ź�
	ɫ�����㿪ʼ�����Լ�������ǿ������ͷ��������ɽ�ڣ���
	��û����......

LONG	);
 
    set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/room/npc/crab-ox" : 1,		
]));
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"11",
  "north":__DIR__"7",
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
	setup();
}