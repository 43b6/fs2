//written by wataru...../open/killer/mon/room/g8.c
inherit ROOM;

void create()
{
        set("short", "�������ڲ�");
        set("long", @LONG

	ǰ����һ�������֦Ҷ�����ɵ���Ȼͨ����

	Ҫ��������ϸ�����㻹�޷�������һ��ͨ���Ĵ��ڡ�

	���㲻����̾���˴�����������һ��.......
	
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"g7.c",
       "south" : __DIR__"g9.c",
   ]));
        setup();
}
