inherit ROOM;

void create ()
{
  set ("short", "ǰͥ");
  set ("long", @LONG
�����ǰͥ��һ������, ���������˸�ʽ�������滨���, ��
Щ�����������ʹ�Ҳû��, �㿴����Щ�滨���, ����ժһ�Ѵ���
����, Ȼ��һ�뵽�μҸ����ڶ�, �Ͳ��ɵô����������ͷ......

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"np9",
  "east" : __DIR__"np10",
]));
  set("light_up", 1);

  setup();
  replace_program(ROOM);
}
