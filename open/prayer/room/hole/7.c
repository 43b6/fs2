///open/prayer/room/hole/7.c

inherit ROOM;

void create()
{
	set("short", "��Ѩ");
	set("long", @LONG

	Ũ���Ѫ��ζ�˱Ƕ��������㲻��Ϊ�⣬���⽭�������ߣ����
	���ߵ����Ϲ�������ӣ������㼣�ǳ����ԣ�Ѳ���㼣��֪��ͨ
	������??Խ�����ߣ��������ĸо���Խ��Խ����!!���϶�����
	��Һ�壬�������ߵ�Խ������!!

LONG	);
 
    set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/ditail-snake2" : 1,		//˫ͷ��β��
]));
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"17",
  "north":__DIR__"5",
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
	setup();
}