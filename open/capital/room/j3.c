// Room: /u/f/funkcat/room/house2h.c

inherit ROOM;
			
void create ()
{
  set ("short", "�ͷ�");
  set ("long", @LONG
�������׵ķ��䣬���Ǻ�����ֽ�ĺ�ʽ�ţ�����֮���и�С����
�����ǽ�Ϲ��˴������֡��Աߵİ����ϻ�����һ����ɣ������ս��
��������ʿ������֣���������ô�ۼ���һ��Ⱥ��ɣ�ˣ��ѵ���Ҫ��ı
�췴!?

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"j4",
]));
// set("objects", ([ /* sizeof() == 1 */
// "/open/capital/npc/black.c" : 1,
//]));

  setup();
}
int valid_leave(object me,string dir)
{
  int i;
  i=me->query("japanese");
  if ((i=0) && ( dir=="south") && (present("jushirou",environment(me))))
  return notify_fail("���ʮ���ɵ�ס���ȥ·˵:����?û��ô��!\n");
  return ::valid_leave(me,dir);
}
							

