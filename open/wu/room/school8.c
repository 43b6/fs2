// Room: /u/d/devils/school8.c

inherit ROOM;

void create ()
{
        set("valid_startroom", 1);
  set ("short", "�������");
  set ("long", @LONG
����������ݴ������������׶�������������װ�λ���������̫ʦ��
λ�����ף����е�̫ʦ������һλ���ϵ����ߣ�����������Ŀ�ⶢ���㣬
�����ǹ�������������...
LONG);

  set("exits", ([ /* sizeof() == 5 */
  "south" : "/open/wu/room/school11",
  "north" : "/open/wu/room/school10",
  "west" : "/open/wu/room/school7",
  "eastup" : "/open/wu/room/school15",
  "east" : "/open/wu/room/school9",
]));

        set("objects",([
          "/daemon/class/fighter/master_jen":1,
        ]));
  set("light_up", 1);
        set("no_clean_up", 0);
  setup();
  call_other("obj/board/lungshan_b.c","???");
}
int valid_leave(object me, string dir)
{
        if(me->query("class")!="fighter"&&dir=="south")
return notify_fail("�������߲�׼��!\n");
return ::valid_leave(me,dir);
}
void init()
{
  add_action("do_pass","pass");
}
int do_pass()
{
  object me;
  me = this_player();
  me->move("/open/center/room/inn");
  return 1;
}
