
inherit ROOM;
#include <ansi.h>
#include <mudlib.h>
#include <command.h>
void create () {
set ("short","��ɫ��·");
        set ("long","һ��̤��˵�, ��������̹�, �˴�������ħ�ű��������֮��. ����
���ߵ�ǽ���Ϲ���������̨, ȴ��͸һ˿˿ů��, ������, а���, 
ħ����Х, ��Ӱ����, ���ʱ�����������Ӿ��Ѿ�����������ȷ���ж�. 
ͻ������ɱ���������Ϻ�ɫ�Ļ���, Ѫ�ȵ�ս������ʱ����. 

");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "south" : __DIR__"room82",
            "east" : __DIR__"room88",
            "north" : __DIR__"room84",          
      ]));
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
   if( random(500) > obj->query_skill("parry")+obj->query_skill("dodge") ) {
   message_vision(HIR"�������촦����ö��������������$N���㲻��������������У�\n"NOR,obj);
   obj->add("eff_kee",-kee1/30);
   obj->apply_condition("dark_poison",random(20));
                                                  }                                              
  else  message_vision(HIW"�������촦����ö��������������$N��æ�ܸ߷��ͣ������ֻ��������İ���\n"NOR,obj);   
       }
}

