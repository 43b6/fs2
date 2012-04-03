// Room: /open/start/room/eqroom
inherit ROOM;

void create ()
{
  set ("short", "������Ϣ��");
  set ("long", @LONG
��������ר�õ���Ϣ�Ҽ洢���ң��ڴ˵�
���Զ㿪���˵�׷�ϣ�Ҳ���Ծ������ڴ˵���
����������ǰ��ƽ�ϳ�ʱ�����(plan)������
ǰ��������վ��ֻҪ��(literate)����ǰ����
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "up" : __DIR__"r17.c",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/boy.c" : 1,
]));

  setup();
}
 void init()
{
add_action("do_plan","plan");
add_action("do_literate","literate");
}
int do_plan()
{
  object me;
  me = this_player();
  if(me->query("class")!="scholar")
 return notify_fail("ֻ���������á�\n");
 me->move("/open/ping/room/road3");
  return 1;
}
int do_literate()
{
object me;
me=this_player();
if(me->query("family/family_name")!="����")
return notify_fail("ֻ���������á�\n");
me->move("/open/center/room/inn.c");
return 1;
}
