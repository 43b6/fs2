// room7.c by konn
inherit ROOM;
#include <ansi.h>
#include <mudlib.h>
#include <command.h>
void create () {
set ("short","�ű�һ¥");
        set ("long","�����ƺ���Ǳ����ʲô��ħ���,��������̻̲������ذ������Ѹ��ɵĵ�ľ��
����,�������治ͣ�ķ�����֨��֨�����������˲��������Ƿ��������ء�

                      ����֨����֨��
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "west" :  __DIR__"room8",
            "south"  : __DIR__"room5",
            "northwest" : __DIR__"room9",        
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
   if( random(300) > obj->query_skill("dodge") ) {
   message_vision(HIR"ͻȻ����������ֻ�����˹���,$N���㲻��,ֻ��һ������$N�ѱ������У�\n"NOR,obj);
   obj->add("kee",-kee1/10);
                                                  }                                              
  else  message_vision(HIW"ͻȻ����������ֻ�����˹���,��$N����\����\��\,Σ���б��˿�ȥ\n"NOR,obj);   
       }
}

