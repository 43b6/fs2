// Room: /open/hall/way2.c

inherit ROOM;

void create()
{
        set("short", "�����ߵ�");
        set("long", @LONG
�����һ������ʯ�ӵ��ߵ����ߵ����Ը���һ�����ԣ���ͷ�Ӳݴ�
�����ƺ��ܾ�û�����톪......
LONG);
        set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"way3",
  "east" : __DIR__"hall.c",
]));

        setup();
}
