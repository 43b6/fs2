///open/prayer/room/hole/18.c

inherit ROOM;

void create()
{
	set("short", "��Ѩ");
	set("long", @LONG

	����һЩħ�޵�צӡ��һ���˵���������֮����һ��צ�Ӵ�����
	�����ϣ��ɲ���"�絾�ݰ�ɳ�ȥ"���ѣ��㲻��ͷƤ���飬���˸�
	���£����벻�뻢Ѩ���ɵû��ӣ����ӻ��ȥ��.....

LONG	);
    set("objects", ([ /* sizeof() == 2 */
   "/open/prayer/npc/cuirass-dragon" : 1,		
   "/open/prayer/npc/carapace-bee" : 1,		
]));
	set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"9",
  "west" : __DIR__"8",
  "south":__DIR__"20",
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
	setup();
}