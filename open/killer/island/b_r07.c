#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "[1;37m�ߵ�[0m");
  set ("long", @LONG
�ϱߵ���(door)�ƺ���ͬ��֮ǰ����������Щ�ţ��Ƚ���������һ�����ƺ���
���߹�����࣬����ס����䷿�����Ӧ����һ������Ҫ���˰ɡ�
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/death" : 1,
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "door" : "�����Ų�û�а��ֿ���ת������������ͨ�ķ����Ǵ򲻿��ġ�
",
]));
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"b_r06",
]));

  setup();
}
void init()
{
add_action("do_pray","pray");
}
int do_pray(string arg)
{
object me;
me=this_player();
if(!arg||arg!="door")
return notify_fail("��Ҫ��ʲô��\n");
if(me->query_temp("quest_corpse")!=2)
return notify_fail("�����������������ȴʲô��Ҳû������\n");
else{
tell_object(me,"���ƺ��о��ĵ������ڸ����л....\n\n");
message_vision(HIB"      $N������ͻȻ��һ�������Χס���������ڿ���ʧ�ˣ���\n\n"NOR,me);
tell_object(me,"�㴩�����Ű壬�����˷����ڡ�\n");
me->move(__DIR__"b_q");
return 1;
}
}
