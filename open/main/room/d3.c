// Room: /open/main/room/d3.c

inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "ɳĮ");
  set ("long", @LONG
�����һ���޼ʵ�������ɳĮ��������һ���������ƶ�����
���������ȥ, ȴ���������, ��֪������������һ��?
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"d10",
  "east" : __DIR__"d4",
  "west" : "/open/love/room/room.c",
]));
  set("outdoors", "/open/main");

  setup();
}
int valid_leave(object me,string dir)
{

if (me==this_player() && dir == "up")
if ( me->query("combat_exp") < 2400000)
     return notify_fail("���޵���Ҫ���������ϵ����߲��ܽ���\n");
     return :: valid_leave(me, dir);
        {
tell_object(me,HIM"����ܵ����޵�������Ӱ�죬ȫ�������һ�¡�\n"NOR);
/*message("mud",HIW"

                    һ������ܳ� ...


"HIC"�����׳ʿ"+HIY+me->query("name")+HIC"������ǰ����������֮��
 Ϊ�������ĥ����ǰ��δ֪֮; ..

"NOR,me);
*/
        }
if ( me->query("combat_exp") < 2000000)
     return notify_fail("���޵���Ҫ���������ϵ����߲��ܽ���\n");
     return :: valid_leave(me, dir);
}
