// Room: /open/badman/room/r1
inherit ROOM;

void create ()
{
  set ("short", "С����");
  set ("long", @LONG
���Ű������ص�СԲ�����ͼ����Ͼɵĳ���ʣ����ٻ�ɫ�ĵ�
����ҫ�£�ʹ������С���ݿ�������������˸е���ܰ����������
�ϵģ�������Ĺ˿��ƺ����࣬�о�������̫����һ��ɽկ���ʳ
���������ֺ��ļ�����һ�Ѱ��Ⱦ����µ���å��
    ���ߵķ��䴫���������ζ��

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r13",
  "east" : __DIR__"b8",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/badman/npc/ha" : 1,
]));

  setup();
}
