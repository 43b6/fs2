// Room: /open/poison/room/room2
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�������˼����ң����ڲ��ò���һ���Ի�������ǽ�Ϲ�
�˼����ֻ������ϰ���һЩ���ԣ������൱�徲���ţ�����
��һ��������������һ���޴��ʥ�����ƺ��������Щʲ
ô��
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"path1",
  "east" : __DIR__"room3",
]));
  set("light_up", 1);

  setup();
}
