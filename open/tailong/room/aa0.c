// Room: /u/o/ookami/newarea/aa0.c 
inherit ROOM;
 
void create ()
{
  set ("short", "���ɽ��");
  set ("long", @LONG
������ƽ�ϳǸ�������ɽ--���ɽ,���ܱ̲�����,��ʱ���ܿ�����
����С�����ڲݴ��з�Ծ,��ǰ��һ��,��ΰ��ɽ���������ǰ��, ��˵
ɽ����һ������������--������,�Ƕμ��������ֳ���Ϊɮ������,����
������Ҫһ̽����
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/ping/room/to_tai.c",
  "east" : __DIR__"aa1.c",
]));
  set("outdoors", "/u/o/ookami/newarea");

  setup();
  replace_program(ROOM);
}
