// Room: /open/hall/h_room10.c

inherit ROOM;

void create()
{
        set("short","�᷿�ߵ�");
         set("long",@LONG
�������᷿ǰ���ߵ���վ�����Ｘ�����������õĳ���������������
�գ�ʹ�˸е�������泩��������Ϸ�������ʦү��������֮�᷿������
�����ǲ�ͷͳ�쩤����ɷ���᷿��
LONG);
        set("exits",([
  "north":__DIR__"h_room2",
  "west":__DIR__"h_room11",
  "east":__DIR__"hall_3",
  "south":__DIR__"h_room13",
]));

        setup();
}
