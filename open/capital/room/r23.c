// Room: /open/capital/room/r23.c

inherit ROOM;

void create ()
{
  set ("short", "����۵�");
  set ("long", @LONG
�����ĳ�������Ϊ�˱��ھ��ӿ���ͨ�ж��衣�����̵�ʯ���൱
����������ྫ�ɵĻ��ƣ���ʨͷ����˫������ͼ����������Ѿã���
�г���������ѹ��Ե�ʣ����ʯ�嶼�����Ѻۡ�

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/capital/room/r22",
  "south" : "/open/capital/room/r24",
]));

  set("gopath", "north");

  setup();
}
