inherit ROOM;
 
void create ()
{
  set ("short", "��Ѩ���");
  set ("long", @LONG
 ǰ�������ż������������������������ڵ�ɽ�����ѵ�����Ƕ��˹ȴ�˵�еĽ���?
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "northup" : __DIR__"s1-3",
]));

  setup();
}
