// Room: /d/death/road1.c

inherit ROOM;

void create ()
{
  set ("short", "���Ŵ��");
  set ("long", @LONG
������һ����ɭɭ��·��, ŨŨ���������������, ������
Զ������ɢȥ�Ƶ�. ���Ͽ�ȥ����ǿ���Էֱ��һ����¥��ģ��,
������Լ���Կ�����յ����, ��Ũ�����Եø���Ĺ���. ·������
����һ��ľ��Ľ���, �Ŷ��ǰ뿪��, ���㿴�����������ʲô.

LONG);

  set("no_auc",1);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"road2",
  "south" : __DIR__"gateway",
]));
  set("light_up", 1);
  set("no_fight", 1);
  set("no_magic", 1);
  set("no_transmit", 2);

  setup();
}
