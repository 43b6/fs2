// Room: /u/s/sueplan/newplan/area/f12.c
inherit ROOM;

void create ()
{
  set ("short", "[1;33m�����[0m");
  set ("long", @LONG
�����촵�����������ŵı���ɢ������һ�������������������ǰ
������լ�ڲ��ɻ����ѱ��С��һɫ�İ�ǽ�����൱���ţ��ſ���ֻʯʨ
������΢Ц�ţ��ƺ�Ҳ����������������������һ�ߵ����ſڣ�һλѾ
����Ц�����ص�ס�����ȥ·��������ɵ����Ź�������������С�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "enter" : __DIR__"f13.c",
  "west" : __DIR__"f11",
]));
  set("outdoors", "/u/s");

  setup();
}
int valid_leave(object me, string dir)
{
  if(dir=="enter")
  {
    if(me->query_mark("sixgod-plan") && me->query_temp("six_ask")<4)
    return notify_fail("�������ǽ���ȥ��!!\n");
  }
  return 1;
}
