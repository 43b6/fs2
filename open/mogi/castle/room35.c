
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "¥��");
  set ("long", @LONG
����������ͨ����¥��¥�ݣ��ߵ��������Ѿ�������е㷢������
˵����¥������ħ�ű���ݼӢ�ۼ��ش�����ʽ��õ��书����������
ħ��׼���곲������������¥ǰȴ����һ������ɱ���Ķ�����¥��
�䣿
LONG);
set("evil", 1);
set("no_auc", 1);
set("no_transmit", 1);
set("light_up", -1);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"room34",
  "up" : __DIR__"room41",
]));
  
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/ground-ghost.c" : 1,
]));

  setup();
}
int valid_leave(object me, string dir)
{
 object ob;
 me=this_player();
 ob=this_object();
        if(dir=="up"&&present("ghost",environment(me)))
  {

message_vision(HIY"��а���$Nŭ�� : ��ʲô����\n"NOR,me);
 ob->kill_ob(me);

return 0;
}
return 1;
}
