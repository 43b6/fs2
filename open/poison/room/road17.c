// Room: /open/poison/room/road17
inherit ROOM;

void create ()
{
  set ("short", "��ͥ");
  set ("long", @LONG
������һ��СͥԺ��Ժ���������÷����������һ��С
÷԰�㣬΢���������ǰһ���仨�ͷɵľ������˺�����
��������˳ơ�ħ�̡�����̳���ڵء�
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "southeast" : __DIR__"road6",
  "west" : __DIR__"road16",
  "east" : __DIR__"room8",
]));
  set("outdoors", "/open/poison");

  setup();
}
