// Room: /open/main/room/r1.c

inherit ROOM;

void create ()
{
  set ("short", "��·");
  set ("long", @LONG
�����������̶��߳�����һ����·, ���ڷ��Ĺ�ϵ, ·����������
�����Ǳ�¬�أ����������Ϊ������������˳�, ���Ӧ�����˼�������
�ط���
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"d9",
"north" : "/open/center/room/inn",
  "east" : __DIR__"d10",
  "southwest" : __DIR__"r2",
]));
  set("outdoors", "/open/main");

  setup();
}
