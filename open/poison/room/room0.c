// Room: /open/poison/room/room0
inherit ROOM;

void create ()
{
  set ("short", "ħ����̳");
  set ("long", @LONG
�������������������֮��ɫ��ħ����̳������������
�������ʯ�񣬵�������һ�㻢Ƥë̺���м���ǰ����һ��
���������Ǳ���ħ�̵��ܾ��������������ħ�̵��˱���
�ڴ�������̵ġ�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"road2",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/poisoner/poisoner" : 1,
]));
  set("light_up", 1);

  setup();
}
