// Room: /d/snow/eroad2.c

inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ����С��");
  set ("long", @LONG
����һ����ͨ�Ļ���С����С��������ͨ��һ��ɽ���ƽ�أ�����
������������ٷ��ݴ�����ƽ���ϣ���������һ·��ɽ��
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/dog" : 2,
]));
  set("outdoors", "snow");
  set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"eroad3",
  "southwest" : __DIR__"eroad1",
]));

  setup();
}
