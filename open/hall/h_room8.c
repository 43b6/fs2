// Room: /open/hall/h_room8.c

inherit ROOM;

void create()
{
        set("short","���ŷ���");
        set("long",@LONG
���ŷ�����һ��ְλ�ϵ͵Ķ������òͣ�����ľ���Ƶķ�����ÿ��
Լ��ʮ��Բ��С��ʣ��ذ���ɢ��һЩ��м���Ե�ʮ�����ҵ����ӣ���
��������һ�ȴ��ӣ�ͨ��Ч����������ˣ������ζ�����Ǻ��أ�
LONG);
        set("exits",([
  "north":__DIR__"h_room7",
  "west":__DIR__"h_room9",
]));

        setup();
}
