// Room: /open/gsword/room/suroom3_gate.c

inherit ROOM;

void create ()
{
  set ("short", "�ּҴ�ۡ���");
  set ("long", @LONG
���������и���������סլ,�ʺ�ľ���ǰ��������ֻò
�����͵�ʯʨ��������ɫ�ĵ�ͭ�Űѽ�������ǰ����һ����֪��
�Ǹ���ۡ��Ҳֻ���ּ����ָ������ŸҰ�סլ���ڽ�������.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"su12",
]));
  set("light_up", 1);

  setup();
}
