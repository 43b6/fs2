// Room: /open/hall/h_room11.c

inherit ROOM;

void create()
{
        set("short","�᷿�ߵ�");
        set("long",@LONG
�˴����᷿ǰ���ߵ�����������һյ�󴰻�������ʮ����ͨ������
�����գ�ʹ�˸е�������泩������Ϸ�������ͷ����  ��֮�᷿����
�����Ƕ���ͷ�������֮�᷿��
LONG);
        set("exits",([
  "east":__DIR__"h_room10",
  "north":__DIR__"h_room15",
  "south":__DIR__"h_room14",
]));

        setup();
}
