// by roger

#include <ansi.h>
##include "castle.h"
inherit NPC;
void create() {
        
        set_name("������",({"liu-un"}));
        set("long",@LONG
���ڸ��ڽ��ϸ��¥¥����߽���ָ��, 
��һ���Ǵ���Сëͷ�ɱ���˾�������, 
�������ϻ�����������.
LONG);
        set("age",17);
        set("str",30);
        set("int",30);
        set("spi",30);
        set("cor",30);
        set("kar",30);
        set("cps",30);
        set("race","����");
        set("gender","����");
        set("attitude","aggressive");
        set("class","fighter");
        set("max_gin",3000);
        set("max_kee",3000);
        set("max_sen",3000);
        set("max_force",5000);
        set("force",5000);
        set("force_factor",20);
        set("combat_exp",1000000);
        set_skill("blade",100);
        set_skill("dodge",100);
        set_skill("lo-steps",100);
        set_skill("move",100);
        set_skill("parry",100);
        set_skill("wind-rain",100);
        set_skill("literate",150);
        set_skill("sand-blade",100);
        set_skill("force",150);
        map_skill("blade","sand-blade");
        map_skill("dodge","lo-steps");
        map_skill("parry","wind-rain");
        map_skill("move","lo-steps");
        set("clan_kill",1);
        setup();
        carry_object(C_OBJ"/bird-blade")->wield();
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
 if( random(100) < 20)
 {
    enemy=mob->query_enemy();
    i=sizeof(enemy);
 for(j=0;j < i;j++){
    target=enemy[j];
    if( env == environment(target) )
    {
      message_vision(HIW"\n
$N�������г�����������ʼ�W���ɳʯ������ɫ��������������
��$N�������У�ٿȻһʽ"HIY"������ǧ����  ��ɳ�����桯"HIW"��ɳ�ӻ���
���Ҷ����ȵĵ��������������Ѱ�����Ĵ�Χ��
\n"NOR,mob);
      target->receive_damage("kee",350);
      COMBAT_D->report_status(target, 1);
    }
                   }
 }  
   set_heart_beat(1);
   ::heart_beat();
   
}


