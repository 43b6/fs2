// Room: /u/o/onion/room/bedroom.c

inherit ROOM;

void create()
{
	set("short", "��������");
	set("long", @LONG
���������������������ӵĵط�,����İ��貢����̫��,��������ƽ���ס������,
�����м�����������������������,�ĵ��ƺ����𾢵�����,˵�Ŀ�ĭ���...

LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"room4",
]));
        set("objects", (["/u/o/onion/npc/worker": 1, 
        		 "/u/o/onion/npc/footboy": 1 ]));
                      
	setup();
}
