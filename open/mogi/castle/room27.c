
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "��������");
  set ("long","�������Ⱦ��ǹű��������ġ������������ȣ�����˼�壬��ָ����
�������������ȼ�ֱ������졣��;������Խ��Խ�����ħ����
����֪��������а����������Ȼ���Ȳ����ĺܳ������ǿֲ��ĳ̶�
����������Զ�߲���ľ�����
");
set("evil", 1);
set("no_auc", 1);
set("no_transmit", 1);
set("light_up", -1);

  set("exits", ([ /* sizeof() == 1 */
  
  "north" : __DIR__"room28",
  "south" : __DIR__"room26",
]));
  
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/mob5.c" : 3,
]));

  setup();
}
int valid_leave(object me, string dir)

{
        if(dir=="north"&&present("ghost",environment(me)))
  {

message_vision(HIY"��ָ��ħ��Ц��:���ȹ�����ذɣ���\n"NOR,me);

return 0;
}
return 1;
}
