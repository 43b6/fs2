// Room: /open/su/room/hall_2.c

inherit ROOM;

void create()
{
        set("short", "����ǰ��");
        set("long", @LONG
վ�������Լ������������׳�����ƺ����޳������������á���
�����ǰ��֮�󣬾Ϳ��Ե������ô����ˡ�
LONG);
        set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"hall",
  "north" : __DIR__"hall_3",
]));

        setup();
}
