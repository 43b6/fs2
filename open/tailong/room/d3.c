inherit ROOM;

void create ()
{
  set ("short", "Сľ��");
  set ("long", @LONG
���������൱�ĸɾ�����Ȼ�Ҿ�ȫ����ľͷ��Ʒ������ȴ��
������кֲܴڵĸо���������ǰ��������Ƕ�����ֻ��������
һ���׾���Ȥ��Ȼ�Ķ��š�
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"d2",
]));
  set("objects",([
  "/open/tailong/npc/duanyu.c" : 1,
]));
  set("no_transmit",1);
  setup();
}
