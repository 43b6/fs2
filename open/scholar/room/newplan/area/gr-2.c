// Room: /u/s/sueplan/test/test
inherit ROOM;

void create ()
{
  set ("short", "�������");
  set ("long", @LONG
�㲽��˵أ�������ǰ��һ���ö�ݺݵ����������
�˵��ǰ��������ǣ���������������ǰ�����������ˡ�

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/room/newplan/npc/guard2.c" : 1,
]));
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "enter" : __DIR__"q4.c",
  "east" : __DIR__"q3.c",
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
