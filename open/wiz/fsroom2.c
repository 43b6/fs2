inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "����ռ�ͷ�����");
  set ("long", @LONG
    Υ���������(player_rules)����ʦ(wiz_rules)�涨����::
 �������﹫�������֪�������Ҷ�����ع涨��ҪΥ���涨��Υ����
 ��һ��ͨ�������ᴦ��,�ٷ������չ涨����,������ͬ����ռ�������
 �涨��������ǰ������ͬ��Mud,�����ԭ���ǹ�ƽ������, ���������
 ������ʦ���չ涨����.........
LONG);

  set("no_fight", 1);
  set("light_up", 1);
  set("no_kill", 1);
  set("exits", ([ /* sizeof() == 2 */
  "north"  :  __DIR__"bug_room",
  "south" : "/open/common/room/inn.c",
]));

  setup();
call_other("/obj/board/fskill_b.c","???");
}
void init()
{
add_action("post_array","post");
}
int post_array(string str)
{
 object ob;
 ob=this_player();
 if(!wizardp(ob))
  return notify_fail("����ֻ����ʦ�ܷ������¡�\n");
}
