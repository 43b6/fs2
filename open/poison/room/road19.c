// Room: /open/poison/room/road19
inherit ROOM;

void create ()
{
  set ("short", "ɽ·");
  set ("long", @LONG
�����Ĵ�Ƭ���ߣ�����������Ұ�ݣ�������һ��������
���ĵط���������һ��Ƭ�����֣��������������������κ�
�������Խ�����Ƭɭ�֡�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"road7",
]));
  set("outdoors", "/open/poison");

  setup();
}
