// Room: /open/poison/room/path4
inherit ROOM;

void create ()
{
  set ("short", "�ܵ�");
  set ("long", @LONG
������һ���ӵ��У�����һƬ���ţ��൱�򾲣�Զ����
������ĵ�ˮ�����ƺ����ڹ����������꣬�����Һ��Լ�
��Ϊ��������ǿ��������ͱ����ڴ˵ء�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/poison/room/path5",
  "eastup" : "/open/poison/room/path3",
]));

  setup();
}
