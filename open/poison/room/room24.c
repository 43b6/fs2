inherit ROOM;

void create ()
{
  set ("short", "·��");
  set ("long", @LONG
һ��ƽ����С· ,ȴ��һ����ƽ����������·�� ,���� !�����
�ֺ����ֺ��µ�˵ :D~~~~~

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room23.c",
  "north" : __DIR__"room25.c",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/poison/npc/duan.c" : 1,
]));

  setup();
}
 int valid_leave(object me, string dir)
 {
        if(dir=="north"&&present("duan",environment(me)))
  {
    if(!me->query_temp("allow-north")&&!me->query_temp("playboy"))
    return notify_fail("��������ס���ȥ· ,˵�� :�����������ȥ�� ?\n");
   }
  return 1;
}

