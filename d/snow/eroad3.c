// Room: /d/snow/eroad3.c

inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ɽ·");
  set ("long", @LONG
����һ��˵����˵խ��Ҳ��խ��ɽ·��·���ü���������̦��
��ʯ�̳ɣ�������һ���µأ�������������������м��䷿�ݴ�������
ľ�䣬��������ɽ�ڣ�ɽ·�������ν�һ������С����

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "southwest" : __DIR__"eroad2",
]));
  set("outdoors", "snow");

  setup();
}
