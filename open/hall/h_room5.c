// Room: /open/hall/h_room5.c
inherit ROOM;

void create()
{
        set("short","�����ߵ�");
        set("long",@LONG
�����ǻ���ǰ���ߵ������������Լ�����������������������
�������������һ�ȣ��ԵĻ������ˣ�����ľ���Ƶ�������ɢ��������
���ŵĵ�����������������Ϊ֮һ��
LONG);
        set("exits",([
  "west":__DIR__"hall_3",
  "north":__DIR__"h_room4",
  "east":__DIR__"h_room6",
]));

        setup();
}
