// Room: /u/s/sueplan/test/test
inherit ROOM;

void create ()
{
  set ("short", "�������");
  set ("long", @LONG

�㲽��˵أ�������ǰ��һ���ö�ݺݵ����������
�˵��ǰ��������ǣ���������������ǰ�����������ˡ�

LONG);

  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"q4.c",
  "enter" : __DIR__"q5.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/room/newplan/npc/guard3.c" : 1,
]));

  setup();
}
 int valid_leave(object me, string dir)
 {
if(dir=="enter"&&present("guard",environment(me)))
  {
return notify_fail("�㷢�����˵�������, �������!!!\n");
   }
  return 1;
}
