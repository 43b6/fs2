// Room: /open/ping/room/f1.c ~night~(С��)

inherit ROOM;

void create ()
{
  set ("short", "����ɽկ��");
  set ("long", @LONG

������Ƿ���ɽ����,������ɽկ�ͽ������,ɽկ�ں����кܶ�������������ȥ��,�����
�����,������ɽȥ�����ļ��. �ſ�����������վ��,���ĳ���,�������ʲô�˶���
�Խ�ȥ��.


LONG);

   set("objects", ([ /* sizeof() == 2 */
   "/open/ping/npc/f-guard" : 2,
]));

  set("outdoors", "/open/ping");

  set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"f2.c",
 "north" : __DIR__"f3.c",
  "down" : __DIR__"m19",
]));

  setup();
}
int valid_leave(object me,string dir)
{
        if(dir=="north"&&present("guard",environment(me)))
        {
        if(me->query_temp("weapon"))
        return notify_fail("ɽկ����ŭ�����Ŀ�����˵: ���� ? ������ ?\n");
        }
        return 1;
}
