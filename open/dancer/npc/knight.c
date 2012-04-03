#include <ansi.h>
inherit NPC;
inherit SSERVER;

void create()
{
//	set("title","���ؽ���");
	set_name("���ؽ���", ({"swordsman"}));
	set("age",75);
	set("long","��һ����������ӡ�\n");
	set("gender","����");
	set("str",30);
	set("con",30);
	set("class","fighter");
	set("family/family_name","�ɽ���");
	set("bellicosity",1500);
	set("get_sha_sp",1);
	set("no_hire",1);
	set("max_kee",150000);
//	set("attitude","aggressive");
	set("kee",150000);
	set("max_gin",150000);
	set("gin",150000);
	set("max_sen",150000);
	set("sen",150000);
	set("combat_exp",10000000);
	set("max_force",300000);
	set("force",300000);
	set("force_factor",10);
	set("random_move",200);
	set_skill("dodge",120);
	set_skill("force",150);
	set_skill("linpo-steps",100);
	set_skill("unarmed",120);
	set_skill("haoforce",100);
	map_skill("dodge","linpo-steps");
	set_skill("sword",120);
	set_skill("shasword",120);
	map_skill("sword","shasword");
	map_skill("force","haoforce");
    set("chat_chance",100);
    set("chat_msg",({
       (: random_move :),
	}));
	set("chat_chance_combat",25);
	set("chat_msg_combat",({
	"��˵: ��֪�ĺ���С�����������ǻ�����!!\n",
	"��˵: ��!�����㿴������֮��߾����!!\n",
	"��˵: ɱɱɱɱ!!!\n",
	}));
	set_temp("apply/armor",500);
	set_temp("apply/damage",80);
	set_temp("roared",1);
	setup();
	carry_object("/open/dancer/obj/dsword.c")->wield();
//	add_money("cash",300);
//	set("default_actions", (: call_other, __FILE__,"query_action" :));
	
//	reset_action();
}
void greeting( object ob )
{   
    if( !ob || environment(ob) != environment() ) return;
	if(ob->query("combat_exp")>1000000)
	{    
     write( HIY"���ؽ���˵��:����....����\n"NOR ); 
// command("follow "+ob->query("id"));
	 kill_ob(ob);
	 command("exert roar");
	}
}
void heart_beat()
{
        object *enemy,*all,me;
        int i,j;
        me=this_object();
        j=random(100);
        if(!me) return ;
        if(!environment(me)) return ;
		all=all_inventory(environment(me));
/*		for( i=0 ; i<sizeof(all); i++ )
		    if( living(all[i]) && !is_fighting(all[i]) && all[i]->query("id")!="swordsman" )
		   	kill_ob(all[i]);
        
*/		
          if( j < 25 && is_fighting() )
          {   enemy = me->query_enemy();
            
            for(i=0;i<sizeof(enemy);i++){
              if(!enemy[i]) continue;
              if(environment(me) == environment(enemy[i]))
              {
			message_vision(HIW"$N��¶�׹⣬���ű���ɱ���������"HIR"а��"HIC"�޼�"HIW"��֮�ж�Ȼ������ɲʱ��ر�ɫ��ѪȾ������\n"+NOR,me,enemy[i]);
			enemy[i]->receive_damage("kee", enemy[i]->query("max_kee",1)/15);
/*            enemy[i]->receive_wound("sen", enemy[i]->query("max_sen",1)/20);
            enemy[i]->receive_wound("gin", enemy[i]->query("max_gin",1)/20);
*/            COMBAT_D->report_status(enemy[i], 1);
            }
			me->delete_busy();
			me->clear_condition();
          }
		  }
          if( j > 25 && j < 45 && is_fighting() )
          {
          enemy = me->query_enemy();
            for(i=0;i<sizeof(enemy);i++){
              if(!enemy[i]) continue;
              if(environment(me) == environment(enemy[i]))
              {
              message_vision(HIW"��ؼ��Ȼ���������⣬$N������"HIG"��"HIW"��"HIM"���"HIW"��"HIY"һ��"HIR"Ѫ"HIY"��"HIW"������һ��ǿ�ҵĽ����ᴩ$n��\n"+NOR,me,enemy[i]);
              enemy[i]->receive_wound("kee", enemy[i]->query("max_kee",1)/20);
              enemy[i]->receive_damage("sen", enemy[i]->query("max_sen",1)/20);
              enemy[i]->receive_damage("gin", enemy[i]->query("max_gin",1)/20);
              COMBAT_D->report_status(enemy[i], 1);
              }
            }
          }
          if( j > 45 && j < 65&& is_fighting()  )
          {
          enemy = me->query_enemy();
            for(i=0;i<sizeof(enemy);i++){
              if(!enemy[i]) continue;
              if(environment(me) == environment(enemy[i]))
              {
              message_vision(HIW"$Nȫ���������ϵ�ע�뽣�У�ʹ��һ�С�"HIB"�����ķ�"HIW"����������Ю��ʮ�ɹ�����������$n��\n"+NOR,me,enemy[i]);
              enemy[i]->receive_wound("kee", 2500);
/*              enemy[i]->receive_wound("sen", enemy[i]->query("max_sen",1)/15);
              enemy[i]->receive_wound("gin", enemy[i]->query("max_gin",1)/15);
*/              COMBAT_D->report_status(enemy[i], 1);
              }
            }
          }
          if( j > 65 && j < 80 && is_fighting() )
          {
          enemy = me->query_enemy();
            for(i=0;i<sizeof(enemy);i++){
              if(!enemy[i]) continue;
              if(environment(me) == environment(enemy[i]))
              {
              message_vision(HIW"$N������ָ����"HIY"�޼�"HIG"����"HIW"���������������۽������Ľ�����������Ľ���Ѹ�ٴ���$n��\n"+NOR,me,enemy[i]);
              enemy[i]->receive_wound("kee", enemy[i]->query("max_kee",1)/10);
              enemy[i]->receive_wound("sen", enemy[i]->query("max_sen",1)/15);
              enemy[i]->receive_wound("gin", enemy[i]->query("max_gin",1)/15);
              COMBAT_D->report_status(enemy[i], 1);
              }
            }
          }
          if( j > 80 && j < 92 && is_fighting()  )
          {
          enemy = me->query_enemy();
            for(i=0;i<sizeof(enemy);i++){
              if(!enemy[i]) continue;
              if(environment(me) == environment(enemy[i]))
              {
              message_vision(HIR"Ѫ"HIY"����ɫ"HIW"��"HIR"��"HIG"ɢ�ķ�"HIW"��$N���ڡ�"HIR"Ѫ��"HIB"ħ"HIY"��"HIW"�����������ɴ�ر��ѣ�����������$n˲����Ѫ����û��\n"+NOR,me,enemy[i]);
              enemy[i]->receive_damage("kee", enemy[i]->query("max_kee",1)/15);
              enemy[i]->receive_wound("sen", enemy[i]->query("max_sen",1)/10);
              enemy[i]->receive_wound("gin", enemy[i]->query("max_gin",1)/10);
              COMBAT_D->report_status(enemy[i], 1);
              }
            }
          }
		  if( j> 95 && is_fighting() )
          {
          enemy = me->query_enemy();
            i=random(sizeof(enemy));
              if(enemy[i])
              if(environment(me) == environment(enemy[i]))
              {
			  message_vision(HIR"$N�ߺ�:�����ĺ���...���ҵ��޼�����������\n"+NOR,me,enemy[i]);
			  message_vision(HIW"$N��¶�׹⣬���ű���ɱ���������"HIR"а��"HIC"�޼�"HIW"��֮�ж�Ȼ������ɲʱ��ر�ɫ��ѪȾ������\n"+NOR,me,enemy[i]);
              message_vision(HIW"��ؼ��Ȼ���������⣬$N������"HIG"��"HIW"��"HIM"���"HIW"��"HIY"һ��"HIR"Ѫ"HIY"��"HIW"������һ��ǿ�ҵĽ����ᴩ$n��\n"+NOR,me,enemy[i]);
			  message_vision(HIW"$Nȫ���������ϵ�ע�뽣�У�ʹ��һ�С�"HIB"�����ķ�"HIW"����������Ю��ʮ�ɹ�����������$n��\n"+NOR,me,enemy[i]);
			  message_vision(HIW"$N������ָ����"HIY"�޼�"HIG"����"HIW"���������������۽������Ľ�����������Ľ���Ѹ�ٴ���$n��\n"+NOR,me,enemy[i]);
			  message_vision(HIR"Ѫ"HIY"����ɫ"HIW"��"HIR"��"HIG"ɢ�ķ�"HIW"��$N���ڡ�"HIR"Ѫ��"HIB"ħ"HIY"��"HIW"�����������ɴ�ر��ѣ�����������$n˲����Ѫ����û��\n"+NOR,me,enemy[i]);
              enemy[i]->receive_damage("kee", 3000);
              enemy[i]->receive_wound("sen", enemy[i]->query("max_sen",1)/10);
              enemy[i]->receive_wound("gin", enemy[i]->query("max_gin",1)/10);
			  enemy[i]->start_busy(1);
              COMBAT_D->report_status(enemy[i], 1);
              }
            }
        
  	if( !is_fighting() ) {
		
		if( query("eff_kee") < query("max_kee") ) 
			me->receive_curing("kee",100);
		if( query("eff_gin") < query("max_gin") )
		    me->receive_curing("gin",100);
		if( query("eff_sen") < query("max_sen") )
		    me->receive_curing("sen",100);
		if( query("gin") < query("eff_gin") ) 
			me->receive_heal("gin",100);
		if( query("kee") < query("eff_kee") )
			me->receive_heal("kee",100);
		if( query("sen") < query("eff_sen") ) 
			me->receive_heal("sen",100);
		}
        set_heart_beat(1);
        :: heart_beat();
}

void die()                                                                 
{    
	object winner = query_temp("last_damage_from");
	int j;
	j=random(3);
        if(!winner)
	{
	::die();
	return ;
        }

	
	if(j==0)
	{
	  new("/open/dancer/obj/dragon_gem")->move(winner);
	  message_vision(HIM"\n�����ؽ��͵����ϵ�����һ������!!\n"NOR,winner);
          write_file("/log/get_feq",sprintf("%s(%s) �õ�force gem�� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	 }
	  tell_object(users(),HIC"\n\n���ؽ��ͺ����\n\n\t"HIW"�벻���������߽�����������Ȼ����"+winner->name()+"�Ķ��֣�\n\n\t������ԭ�����˲��ٲ������ǲ���ʹ˰��ݵģ�\n\n"NOR);
	  message_vision(HIY"\n"+winner->name()+"�������ؽ��͵õ�һ�ٵ�ս��!!\n"NOR,winner);
      write_file("/log/get_warp",sprintf("%s(%s) �õ�һ�ٵ�ս���� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  winner->add("war_score",100);
	  
	::die();                                                           
}
