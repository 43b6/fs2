///open/prayer/room/hole/16.c

inherit ROOM;

void create()
{
	set("short", "��Ѩ");
	set("long", @LONG

	�˴�������ɫ����������������ã���ʹ����ѣ����ԣ����˷���
	��˼���ǣ�����������ͣ���ڰ�ղ�ɢ!!һЩ����ɢɢ�İ׹ǳ���
	������ǰ��������Щħ�޲�ֻ���⣬��ϲ���й�ͷ������ûʮ�ֱ�
	�£���һ��ʬ�׺ܿ��ܻ����Լ�......

LONG	);
 
    set("objects", ([ /* sizeof() == 2 */
   "/open/prayer/npc/crab-ox" : 1,		
   "/open/prayer/npc/carapace-bee" : 1,		
]));
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"14",
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
	setup();
}