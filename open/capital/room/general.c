// Room: /open/capital/room/general
inherit ROOM;

void create ()
{
  set ("short", "��Զ�ǰ");
  set ("long", @LONG
�������˶�����������Զ�, ǰ��������һ������¥������, ��
������˴��ɫ, �����̾���һ����צ����, ��������, ʹ��������
�ĺ����ƺ����Ʈ�������ӵĴ��Ŵ�, �����ڻ�ӭ������١�

LONG);

  set("light_up", 1);


  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/capital/room/r55",
]));

  setup();
}
