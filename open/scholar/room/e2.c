// Room: /u/r/red/room/flower.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
����ͨ������ѧʶ����һ���ߵ����ߵ������Թ�����
������Ļ����һ�����ʫ��������ϲ��һ�߿��Ż���һ
�߻��࿼���˴˵���ѧ���衣
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"e1.c",
  "east" : __DIR__"e3.c",
]));

  setup();
}
