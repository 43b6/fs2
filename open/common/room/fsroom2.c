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
set("light_up",1);
set("no_kill",1);
set("no_fight",1);
set("exits", ([ /* sizeof() == 2 */
"south" : "/open/common/room/fsroom2",
]));
  setup();
call_other("/obj/board/fskill_b","???");
}

