// Room: /u/o/ookami/newarea/aa1 
inherit ROOM;
 
void create ()
{
  set ("short", "���ɽ��");
  set ("long", @LONG
������ƽ�ϳǸ�������ɽ--���ɽ,���ܱ̲�����,��ʱ���ܿ�����
����С�����ڲݴ��з�Ծ,��ǰ��һ��,��ΰ��ɽ���������ǰ��, ��˵
ɽ����һ������������--������,�Ƕμ��������ֳ���Ϊɮ������,����
������Ҫһ̽����,ǰ��������һ��С��,�ƺ�����ɽ����ȥ
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"aa2.c",
  "west" : __DIR__"aa0",
]));
  set("outdoors", "/u/o/ookami/newarea");

  setup();
  replace_program(ROOM);
}
