// room7.c by konn
inherit ROOM;
#include <ansi.h>
#include <mudlib.h>
#include <command.h>
void create () {
set ("short","��������");
        set ("long","
�������Ⱦ��ǹű��������ġ������������ȣ�����˼�壬��ָ����
�������������ȼ�ֱ������졣��;������Խ��Խ�����ħ����
����֪��������а����������Ȼ���Ȳ����ĺܳ������ǿֲ��ĳ̶�
����������Զ�߲���ľ�����
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "down"  : __DIR__"room11",
            "north" : __DIR__"room25",        
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
   if( random(300) > obj->query_skill("parry") ) {
   message_vision(HIR"��Ȼ�ƿ�֮������������֧�Ƽ�׶���ٱ���$N���䴩��$N��Ѫ����ֹ��\n"NOR,obj);
   obj->add("eff_kee",-kee1/10);
   obj->apply_condition("bleeding",random(30));
                                                  }                                              
  else  message_vision(HIW"��Ȼ�ƿ�֮������������֧�Ƽ�׶���ٱ���$N������$Nһһ�����ڵأ�\n"NOR,obj);   
       }
   write(HIC"�������𡸺� ��......������Ц��\n"NOR);
}

