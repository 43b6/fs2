// Room: /open/hall/way1.c

inherit ROOM;

void create()
{
        set("short", "�����ߵ�");
        set("long", @LONG
�����һ������ʯ�ӵ��ߵ����ߵ����Ը���һ�����ԣ���ͷ�Ӳݴ�
�����ƺ��ܾ�û�����톪......
LONG);
        set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/hall/jail/jail1",
  "west" : __DIR__"hall.c",
]));

        setup();
}
