// Room: /open/hall/h_room9.c

inherit ROOM;

void create()
{
        set("short","���Ż�԰");
        set("long",@LONG
���ŵĻ�԰����Ȼ������������Ļ�԰�������������ط��ò���
���٣���û����ô�滨������⣬����һЩѰ���Ļ��ݣ��������ĵ���
��Ư���ģ���
LONG);
        set("exits",([
  "east":__DIR__"h_room8",
  "north":__DIR__"h_room6",
]));
        set("resource/water",1);
        setup();
}
