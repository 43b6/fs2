// Room: /u/p/poloer/dragon/g4
inherit ROOM;
#include <ansi.h>
#include <mudlib.h>

void create ()
{
  set ("short", "ħ����һ¥");
  set ("long", @LONG
������ħ�����һ¥������һƬ�ںںڵģ����ֲ�����ָ���ֲֿ�
�ġ���ʱ����������Ľ�����

           ���� ���١���

LONG);

  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"g5",
  "east" : __DIR__"g3",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
void init()
{
      call_out("do_damage",1,this_player());
}
void do_damage(object ob){
 mixed all;
 object obj,who,room;
 int kee1,i,j;


        room = environment(ob);
        all = all_inventory(room);
        for( i = 0 ; i < sizeof(all) ; i++)
        {
   obj = all[i];
   kee1=obj->query("eff_kee");
   if( random(300) > obj->query_skill("dodge") ) {
   message_vision(HIR"ͻȻ�������ǧ���������$N��ȥ��$N���㲻��,ֻ��һ������$N�ѱ���ȥ������\n"NOR,obj);
   obj->add("kee",-kee1/10);
                                                  }

  else  message_vision(HIW"ͻȻ�������ǧ���������$N��ȥ,��$N��\��\��\æ\��\��\��\n"NOR,obj);
       }
}
