// Room: /open/main/room/M16.c

inherit ROOM;

void create ()
{
  set ("short", "����ɽ");
  set ("long", @LONG
	��������ɽɽ�������ҷ壬Ҳ������½������
	���ʥ�أ�������֮���ڣ������ʯ��ת��������
	�ϣ���ʯ�׵ľ�ͷ����ɽ�š�


LONG);

  set("exits", ([ /* sizeof() == 3 */
  "westup" : "/open/main/room/M15",
  "south" : "/open/main/room/M20",
  "eastdown" : "/open/main/room/m18",
  "eastup" : "/open/ping/questsfan/rm1",
]));

  setup();
}
