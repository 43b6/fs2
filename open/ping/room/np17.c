inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�������ߵ���ǰ����, �������෿��, �Ƕμ��ӵܵľ���, ��
�������������, ������˷��С�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"np3",
  "north" : __DIR__"np16",
]));
  set("light_up", 1);

  setup();
}
