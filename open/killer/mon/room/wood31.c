//written by wataru...../open/killer/mon/room/wood31.c
inherit ROOM;

void create()
{
        set("short", "����");
        set("long", @LONG
	����������֮���㷢����һ����ʵ��̫����.......
	�벻����������ʮ�ߣ���Ȼ����û�п������������ڴ���
	���Σ�ֻ�þ�����������.........

LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "up" : "/open/killer/mon/room/g1.c",
        "down" : "/open/killer/mon/room/wood20.c",
   ]));
        set("no_clean_up", 0);

        setup();
        }
