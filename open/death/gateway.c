// Room: /d/death/gateway.c

inherit ROOM;

void create ()
{
  set ("short", "ۺ������");
  set ("long", @LONG
����������һ����ɫ��¥֮ǰ����¥�Ͽ����������֣�ۺ���ǡ���
�ϲ�Զ����һ���ţ����Ϲ�Ӱ����������ȴ��������������������߽�
��¥ֻ��һƬ������ģ�ֻ��������ɫ�Ļ���������ֵ���˸�š�
LONG);
   set("no_auc",1);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"road1",
  "south" : __DIR__"gate",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/bgargoyle" : 1,
]));
  set("light_up", 1);
  set("no_fight", 1);
  set("no_magic", 1);
  set("no_transmit", 2);

  setup();
}
