// Room: /u/p/pokai/room/wu/tower1-3
inherit ROOM;

void create ()
{
  set ("short", "������ɱ��һ¥");
  set ("long", @LONG
һ�����������ͱ�ͻ�������ĵĵ������������㶨�˶����ע�⵽��䷿��
�������Ǹɵ���Ѫ�գ����ܵ�ǽ��Ҳ�������˴򶷹��ĺۼ���
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"tower1-2",
  "climb" : __DIR__"tower2-1",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"killer1-1" : 4,
]));

  setup();
}

int valid_leave(object me, string dir) {
  if(dir=="climb"&&present("tower guard",environment(me))) {
  return notify_fail("����������У�����ȥ����ɱ��������˵��\n");
  } 
 return 1;
}
