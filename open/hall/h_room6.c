// Room: /open/hall/h_room6.c

inherit ROOM;

void create()
{
        set("short","���ͻ���");
        set("long",@LONG
��������������Ӵ���͵ĵط���һ�����߼����񻨳�ľ��������
�У�ǽ�Ϲ��ż���ɽˮ�����������½������ǵ�һ�������֣������⾳
�������治�����ǳ�������λ���֮�֡�
LONG);
        set("exits",([
  "west":__DIR__"h_room5",
  "east":__DIR__"h_room7",
  "south":__DIR__"h_room9",
]));

        setup();
}
