// Room: /open/start/room/s14.c

inherit ROOM;

void create ()
{
  set ("short", "�����");
  set ("long", @LONG
���������ƴ嶫��Ĵ�ڣ������һֱ��������ͨ
��������վ��������ȫ����ͨ��Ҫ�壬����˶�������
�ۼ���

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/start/room/s11",
  "east" : "/open/main/room/r21",
]));

  set("outdoors", "/open/start");

  setup();
}
