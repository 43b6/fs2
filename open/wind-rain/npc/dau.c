// by roger
inherit NPC;
#include <ansi.h>
#include "wind-rain.h"
void create() {
        
        set_name("��ǧ��",({"dau-cha-len","dau"}));
        set("title","���ϸ���һ¥¥��");
        set("nickname",HIY"������Ӱ"NOR);
        set("long",@LONG
   �����ɿ�, ������ʮȴ���� 
   ͷ�׷�, ���ݵ����ϻ���Щ
   �����Į, һ����³ĵ���
   ���ӹ°�, �����׽�.
LONG);
        set("age",30);
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
        set("max_kee",5000);
        set("max_sen",3000);
        set("max_force",6000);
        set("force",6000);
        set("force_factor",30);
        set("combat_exp",1500000);
        set_skill("blade",100);
        set_skill("dodge",100);
        set_skill("lo-steps",100);
        set_skill("move",100);
        set_skill("parry",100);
        set_skill("wind-rain",100);
        set_skill("literate",170);
        set_skill("open-sky-blade",100);
        set_skill("force",150);
        map_skill("blade","open-sky-blade");
        map_skill("dodge","lo-steps");
        map_skill("parry","wind-rain");
        map_skill("move","lo-steps");
        set("chat_chance", 10);

        setup();
        carry_object(C_OBJ"/golden-armor")->wear();
        carry_object(C_OBJ"/open-sky")->wield();
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

      message_vision(HIC"\n
$N����أ���������������������������磬���ҵ�ɱ
�������˲����Թ⣬�����𶯴ﵽ���ʱ��$Nٿ�ذγ��̹ſ�
�죬һʽ"HIW"������ٵ�  ������˭��"HIC"���������������磬��$NΪ
��������˺�ѱ���
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

	if( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {
	  new("/open/sky/obj11/white-crystal")->move(environment(winner));
	  message_vision(HIM"\n�ӵ�ǧ�е����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/white_crystal",sprintf("%s(%s) �õ�ǧ�е����˰�ɫ�⾧�� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 )
	  {
	  new("/open/sky/obj11/white-crystal")->move(environment(winner));
	  message_vision(HIM"\n�ӵ�ǧ�е����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/white_crystal",sprintf("%s(%s) �õ�ǧ�е����˰�ɫ�⾧�� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();
}

