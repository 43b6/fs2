///open/prayer/room/hole/10.c

inherit ROOM;

void create()
{
	set("short", "��Ѩ");
	set("long", @LONG

	��һ�߽������ŵ���޹�˵Ķ����һ��һ�ѵ����û���ʬ�壬����ȫ
	����������Ż����, ���㲻֪����һ��Ҫ��ô��, Ψ�вȹ���ЩŻ��
	��������ǰ��, ����û��ǿ��߱ȽϺ�, �ٲ�����Щ��������������
	��! 

LONG	);
 
    set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/carapace-bee" : 1,		
]));
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"12",
  "south":__DIR__"8",
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
	setup();
}