
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "ħɭ�־�ͷ");
  set ("long","
�������ħɭ�ֵľ�ͷ�ˣ�ֻ��ǰ������һ�Ŵ���֩������֩������
����һֻ�޴��֩�룬�����Ǵ�˵�е�ħ����ڿ����ߣ�������!!
");
set("evil", 1);
set("no_auc", 1);
set("no_transmit", 1);
set("light_up", -1);

  set("exits", ([ /* sizeof() == 1 */
  "enter":__DIR__"room58",  
    "west" : __DIR__"room57",
  "�ص��˼�" : "/open/center/room/inn",
]));
  
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/netor.c" : 1,
]));

  setup();
}
int valid_leave(object me, string dir)

{
        if(dir=="enter"&&present("netor",environment(me)))
  {

message_vision(HIY"������˵������������������Ͱ�\n"NOR,me);

return 0;
  }
       if(dir=="�ص��˼�"){
me->set("startroom","/open/common/room/inn");
message_vision(HIY"һ��������ת,$N�ѻص��˼���\n"NOR,me);
return 1;
                          }  
return 1;
}
