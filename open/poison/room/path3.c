// Room: /open/poison/room/path3
inherit ROOM;

void create ()
{
  set ("short", "�ܵ�");
  set ("long", @LONG
������ܵ������������ʪ�����أ���ɭɭ����������
�е��ǳ����ܣ���޲�������뿪���������һ�����µ�
¥�ݡ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : "/open/poison/room/room5",
  "westdown" : "/open/poison/room/path4",
]));

  setup();
}
