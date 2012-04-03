// by roger
inherit NPC;
#include <ansi.h>
#include "wind-rain.h"
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
        set("attitude","peaceful");
        set("class","fighter");
        set("max_gin",3000);
        set("max_kee",4500);
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
        set("chat_chance", 10);
        set("chat_msg", ({
        "\n������˵ : ħ���Ű���ȫ���˶�ɱ����,�˳𲻹�����!!\n",
        "\n������˵ : �ҵľ������˾�����¥����ˮ���Ǵ��\n",
        "\n������˵ : �־�ʫ�梺�Ư���:D~~\n",
        "\n������˵ : �鵶���Σ��ı�̾�䡣˵��������������־�ʫ��\n",
        "\n������˵ : �ҵļ�������ǰ��ס�������\n",
        }) );
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
 if( random(100) < 20 && mob->is_fighting())
 {
    enemy=mob->query_enemy();
    i=sizeof(enemy);
      message_vision(HIW"\n
$N�������г�����������ʼ�W���ɳʯ������ɫ��������������
��$N�������У�ٿȻһʽ"HIY"������ǧ����  ��ɳ�����桯"HIW"��ɳ�ӻ���
���Ҷ����ȵĵ��������������Ѱ�����Ĵ�Χ��
\n"NOR,mob);
 for(j=0;j < i;j++){
    target=enemy[j];
    if( env == environment(target) )
    {
      target->receive_damage("kee",350);
      COMBAT_D->report_status(target, 1);
    }
                   }
 }  
   set_heart_beat(1);
   ::heart_beat();
   
}


void die()                                                                 
{    
	object winner = query_temp("last_damage_from");
	int j;
        if(!winner)
	{
	::die();
	return ;
        }

	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj1/cloud_emblem")->move(environment(winner));
	  message_vision(HIM"\n�ӳ����Ƶ����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/cloud_emblem",sprintf("%s(%s) �ó����Ƶ�������֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj1/cloud_emblem")->move(environment(winner));
	  message_vision(HIM"\n�ӳ����Ƶ����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/cloud_emblem",sprintf("%s(%s) �ó����Ƶ�������֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}
