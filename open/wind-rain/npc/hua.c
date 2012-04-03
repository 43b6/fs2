// by roger
inherit NPC;
#include <ansi.h>
#include "wind-rain.h"
void create() {
        
        set_name("������",({"hau-yi-yan","hau"}));
        set("title","���ϸ��ڶ�¥¥��");
        set("nickname",HIC"����ǧ��"NOR);
        set("long",@LONG
   �����������ݰ׻���������������ʮ��֮һ, �߹��
   �ŵ����ʱ�����Ҹ����й�֮���޲���, �ǽ��ϸ��¥
   �ĵ�һ��Ů.
LONG);
        set("age",30);
        set("str",30);
        set("int",30);
        set("spi",30);
        set("cor",30);
        set("kar",30);
        set("cps",30);
        set("race","����");
        set("gender","Ů��");
        set("attitude","peaceful");
        set("max_gin",3000);
        set("max_kee",5000);
        set("max_sen",3000);
        set("max_force",6000);
        set("force",6000);
        set("force_factor",13);
        set("combat_exp",1500000);
        set_skill("dagger",100);
        set_skill("dodge",100);
        set_skill("lo-steps",100);
        set_skill("move",100);
        set_skill("parry",100);
        set_skill("wind-rain",100);
        set_skill("literate",170);
        set_skill("music-dagger",100);
        set_skill("force",150);
        map_skill("dagger","music-dagger");
        map_skill("dodge","lo-steps");
        map_skill("parry","wind-rain");
        map_skill("move","lo-steps");
        set("chat_chance", 10);

        setup();
        carry_object(C_OBJ"/flower-cape")->wear();
        carry_object(C_OBJ"/crane-finger")->wear();
        carry_object(C_OBJ"/fragant-dagger")->wield();
        add_money("gold",10);
 }


void heart_beat()
{
 object env,mob,*enemy,target;
 int i,j;

 mob = this_object(); 
 env = environment(mob);
 
 if( !query("wield") )
 {
   set("wield",1);
   command("wield all");
 }
 mob->delete_busy();
 if( random(100) < 25 && mob->is_fighting())
 {
    enemy=mob->query_enemy();
    i=sizeof(enemy);

      message_vision(HIM"\n
       $N�ᶶذ�⣬������䣬�ڿ����п�ʼ����΢΢����������������һ
       �ɵ����Ļ��㣬���˽������˷��磻��Ȼ�������죬��������һʽ
      "HIC"��������˷  �������롯"HIM"���𻪷����������ֱ�Ӵ�Ƥ���������ڡ�
\n"NOR,mob);
 for(j=0;j < i;j++){
    target=enemy[j];
    if( env == environment(target) )
    {
      target->receive_damage("kee",200);
      target->start_busy(2);
      target->apply_condition("rose_poison",10);
      COMBAT_D->report_status(target, 1);
    }
                   }
 }  
   set_heart_beat(1);
   ::heart_beat();
   
}



