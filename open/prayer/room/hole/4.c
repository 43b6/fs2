///open/prayer/room/hole/4.c

inherit ROOM;

void create()
{
	set("short", "��Ѩ");
	set("long", @LONG

	�ߵ�����,Ѫ��ɫ��Ũ��Խ��ԽŨ,��ζ�˱�,����θ����ʼ����
	����!!ż����������Ϥ��Ϥ��������!!�Ѳ����ǹ���Ҫ������.
	...... 

LONG	);
	set("exits", ([ /* sizeof() == 3 */
	"south" : __DIR__"3",
	"east":__DIR__"12",
	"west":__DIR__"11",
]));
        set("objects",([ /* sizeof() == 1 */
	"/open/prayer/npc/ditail-snake2" : 1,
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
	setup();
}