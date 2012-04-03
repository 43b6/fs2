// Room: /open/main/room/gy2.c
inherit ROOM;

void create ()
{
  set ("short", "��ɣ��Ӫ");
  set ("long", @LONG
�������˷�ɣ�ľ�Ӫ������ķ��������ڴ˵����ݵأ���Ī����
    �ж��������ʬ��Ұ��
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/npc/officer2.c" : 2,
]));
  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"gy1.c",
  "enter" : __DIR__"gy3.c",
]));

  setup();
}
int valid_leave(object me, string dir)
{
   if(dir=="enter"&&present("guard",environment(me))) 
{
    if(!me->query_temp("allow-enter"))
    return notify_fail("�������޷�����������ƶ���\n");
}
return 1;
}
