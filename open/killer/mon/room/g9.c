//written by wataru...../open/killer/mon/room/g9.c
inherit ROOM;

void create()
{
        set("short", "�������ڲ�");
        set("long", @LONG

	������һ�����񹤰����Ȼͨ����

	�������ƺ���һ��ͨ�����ǣ����ֿ�������

	���Ϸ��������������ģ��ƺ����ر��

	��֪������������鳤�ܰ˲��ǲ���������ѽ....

	�����ƺ���ֵ��������һ̽.............
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"g8.c",
       "east" : __DIR__"g6.c",
       "eastsouth" : __DIR__"g10.c",
   ]));
   set("objects", ([ /* sizeof() == 1 */
       "/open/killer/mon/npc/grnnpc4.c":1,
       "/open/killer/mon/npc/spy5.c":1,
   ]));

        setup();
}
