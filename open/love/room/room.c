inherit ROOM;

void create ()
{
  set ("short", "�ؿ�");
  set ("long", @LONG
���ߵ�������Ѿ����ǵ�������ľ�ͷ����ԶԶ�Ŀ���Զ������
��һ�������ĳǱ�,����˭�����ó�������һ��ɱ¾֮��,����Ҫ
���ǣ�������ȳӳ����ѵĽ�������Ϊ������λ���ղ�������ʿ
�����⣬����㲻�����Ļ�����Ͽ��뿪��
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : "/open/main/room/d3.c",
  "enter" : __DIR__"room1",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/love/npc/guard" : 4,
]));

  setup();
}
int valid_leave(object me, string dir)
 {
   if(dir=="enter"&&present("guard",environment(me))) 
   {
    if(!me->query_temp("allow-enter"))
    return notify_fail("�ؿ�������ס�㣬˵��:����Ϊ�����������ͽ���ȥ��?
�ȹ�����ذ�!!\n");
   }
  return 1;
 }

