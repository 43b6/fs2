// Room: /open/main/room/M15.c

inherit ROOM;

void create ()
{
  set ("short", "������ɽ��");
  set ("long", @LONG
	������ʯ�׵Ķ��ˣ����Կ�����һ��ɽ�ţ�
	�������������֡����֡����ּ���ľ���֣�
	�ƺ������������߿���ȥ�ġ�


LONG);

  set("exits", ([ /* sizeof() == 3 */
  "southdown" : "/open/main/room/M19",
"enter":"/open/bonze/room/r5",
  "eastdown" : "/open/main/room/M16",
]));

  setup();
}
