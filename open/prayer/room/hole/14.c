///open/prayer/room/hole/14.c

inherit ROOM;

void create()
{
	set("short", "��Ѩ");
	set("long", @LONG

	����ʹ��е��ǳ�������ǰ������쬲�ͣ����������������¶�
	�������ħ�޵���Х����ͣ������ʻص������������������Ķ���
	ħ�����ϰ�����������Ƭ!!

LONG	);
    set("objects", ([ /* sizeof() == 2 */
   "/open/prayer/npc/lion" : 1,		
   "/open/prayer/npc/carapace-bee" : 1,		
]));
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"16",
  "east":__DIR__"19",
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
	setup();
}