// Room: /d/snow/school.c

inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ��Ժ");
  set ("long", @LONG
������һ�������Ժ����Ȼ���ӿ��������Ͼ��ˣ����Ǵ�ɨ�ú�
���࣬ǽ���Ϲ���һ��ɽˮ�����⾳��Ϊ���ף���Ժ�Ĵ��ſ��ڱ��ߣ�
������һ��ľ��ͨ�����ᡣ
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"sroad2",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/teacher" : 1,
]));

  setup();
}
