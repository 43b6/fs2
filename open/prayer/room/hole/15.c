///open/prayer/room/hole/15.c

inherit ROOM;

void create()
{
	set("short", "��Ѩ");
	set("long", @LONG

	����ȸո��߹���ͨ��������ǽ��ȫ��ħ�������Һ��Ҳ��֪��
	��û�ж�??��������Σ�������������ĵط�Ҳû�취ʩչ�书����
	�ǸϿ��뿪�����ط���!!���ϵ�ҩ��Ҳ��Ҫ������....ϣ������
	����������ƽ���뿪�˵�!!

LONG	);
    set("objects", ([ /* sizeof() == 2 */
   "/open/prayer/npc/emery-giant" : 1,		
   "/open/prayer/npc/bird" : 1,		
]));
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"4",
  "east" : __DIR__"14",
  "west":__DIR__"13",
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
	setup();
}