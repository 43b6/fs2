// copy from konn,re-edit from ccat 
//��ǿĽ�ݸ�ʹ�ø��ɽ��׼���������������ʹ�ü��� by cyw 91/03/19
#include <ansi.h>
inherit NPC;
object fu_weapon;
int have_weapon=0;
void create()
{
        set_name("Ľ�ݸ�", ({"murofu"}));
        set("title", HIB"�Ա�֮�� "+HIC+"����֮��"NOR);
        set("long", "�պ���ʿĽ�ݸ�,�Ƹ����书,�˽��ϵ�һ����.\n");
        set("age", 40);
        set("str", 35);
        set("con", 35);
        set("spi", 35);
        set("cor", 35);
        set("cps", 35);
        set("per", 35);
        set("int", 35);
        set("kar", 35);
        set("env/���","YES");
        set("env/����",1);
        set("env/������","YES");
        set("env/ħ����ն","YES");
        set("max_kee", 50000);
        set("kee", 50000);
        set("max_gin", 50000);
        set("gin", 50000);
        set("max_sen", 50000);
        set("sen", 50000);
        set("force", 20000);
        set("max_force", 20000);
        set("force_factor", 10);
        set("combat_exp", 500000);
        set("s_kee",500);
        set("max_s_kee",500);
        set("sec_kee","mkill");
        set("gender", "����");
        set("score",5000000);
        set_skill("dodge", 100);
        set_skill("move", 100);
        set_skill("parry", 100);
        set_skill("force", 250);
        set_skill("unarmed", 100);  
        set_skill("snow-martial", 100);
        set_skill("snow-kee", 100);
        set_skill("snowforce", 200);
        set_skill("blackforce", 200);
        set_skill("badforce", 200);
        set_skill("sixforce", 200);
        set_skill("haoforce", 200);
        set_skill("iceforce", 200);
        set_skill("linpo-steps", 100);
        set_skill("shade-steps", 100);
        set("dragon-sword",1);
        set("quests/read_snow",3);
        set("quest/rain",1);
        set("quest/memory",1);
        set("quest/head-kill",1);
        set("quest/worldpill",1);
        set("marks/six_sp",3);
        set("get_sha_sp",1);
        set("super_fire",1);
        set("fire_strike",1);
        map_skill("unarmed", "snow-martial");
        map_skill("parry", "snow-kee");
        map_skill("dodge", "linpo-steps");
        map_skill("move", "linpo-steps");
        map_skill("force", "snowforce");
        set_temp("apply/damage", 80);
        set_temp("apply/armor", 90);
        set_temp("apply/defense",90);
        set_temp("apply/dodge", 20);
        set_temp("apply/parry", 50);
        set_temp("final-attack",3);
        set("functions/sha_kee/level",100);
        set("functions/gold-dest/level",100);        
        set("functions/ice-fingers/level",100);        
        set("functions/handwriting/level",100);
        set("functions/manakee/level",100);
        set("chat_chance_combat", 100);
        set("chat_msg_combat",({
           (: perform_action("stabber.handwriting") :),
           (: perform_action("sword.sha_kee") :),
           (: perform_action("blade.gold-dest") :),
           (: perform_action("snow-martial.ice-fingers") :),
      }));
        setup();
       carry_object("/open/ping/obj/poison_pill")->set_amount(3);  
       add_money("gold",25);
}
void init()
{
	::init();
	add_action("block_cmd","");
}

int block_cmd(string arg)           
{
	if(((string)query_verb()=="enable" ||          //Ϊ�˷�ֹ�ü��д�murofu,��ս���н�ֹʹ��enableָ��
	    (string)query_verb()=="en" ||
	    (string)query_verb()=="ena" ||
	    (string)query_verb()=="enab" ||
	    (string)query_verb()=="enabl")&& this_player()->is_fighting()){
		write(HIY"���Ľ�ݸ��Ŀ칥������޻��ỻ��\n"NOR );
		return 1;}
//	else if((string)query_verb()=="co" ||           //�������м�ǿ��dancer��taoist����ʱȡ���Է���������
//	        (string)query_verb()=="con" ||
//	        (string)query_verb()=="conj" ||
//	        (string)query_verb()=="conju" ||
//	        (string)query_verb()=="conjur" ||
//	        (string)query_verb()=="conjure" ||
//	        (string)query_verb()=="ca" ||
//	        (string)query_verb()=="cas" ||
//	        (string)query_verb()=="cast"){
//	            write(HIY"Ľ�ݸ����ϵ�����ʯ����ҫ�۹�âʹ���˵ķ���ʧЧ��\n"NOR );
//               return 1;}
       else if((string)query_verb()=="team") {          //Ϊ�˷�ֹ�ü��д�murofu,��ֹʹ��teamָ��
	            write(HIY"�Զ��۹Ѳ�̫�ð�!!\n"NOR );
	       return 1;}
       else if((string)query_verb()=="steal") {          //Ϊ�˷�ֹ�ü��д�murofu,��ֹʹ��stealָ��
	            write(HIY"Ľ�ݸ�ŭ����ƾ����㱾��Ҳ���������͵������\n"NOR );
	       return 1;}
       else if((string)query_verb()=="cm" ||	         //Ϊ�˷�ֹ�ü��д�murofu,��ֹʹ��cmdָ��
	        (string)query_verb()=="cmd") {
	            write(HIY"Ľ�ݸ�ŭ�����������ж�����û�õ�\n"NOR );
	       return 1;}
       else if((string)query_verb()=="unwield" && this_player()->is_fighting()) {	//Ϊ�˷�ֹ�ü��д�murofu,��ս���н�ֹʹ��unwieldָ��        
	       	    write(HIY"Ľ�ݸ�ŭ��������еͶ��������\n"NOR );
	       return 1;}       
       else if(((string)query_verb()=="dro" ||               //Ϊ�˷�ֹ�ü��д�murofu,��ս���н�ֹʹ��dropָ��
               (string)query_verb()=="drop") && this_player()->is_fighting()) {	        
	       	    write(HIY"���޷��ڴ�ʱ�����κ���Ʒ\n"NOR );
	       return 1;}
       else if((string)query_verb()=="wield" && this_player()->is_fighting()) {      //Ϊ�˷�ֹ�ü��д�murofu,��ս���н�ֹʹ��wieldָ��
	            write(HIY"���Ҳ���ʹ�������Ļ���\n"NOR );
	       return 1;}
}
int accept_kill(object me)
{   
//    me->start_busy(1);   
    if(! is_fighting()){
       this_object()->set_temp("exp",me->query("combat_exp"));
       call_out("change",1,me);  
    }
    else if(this_object()->query("combat_exp") < me->query("combat_exp")){
       this_object()->set_temp("exp",me->query("combat_exp"));
       call_out("change",1,me); 
    }   
    return 1;
}
int accept_fight(object me)
{
//    me->start_busy(1);  
   if(! is_fighting()){
       this_object()->set_temp("exp",me->query("combat_exp"));
       call_out("change",1,me);  
    }
    else if(this_object()->query("combat_exp") < me->query("combat_exp")){
       this_object()->set_temp("exp",me->query("combat_exp"));
       call_out("change",1,me); 
    }   
    return 1;
}


int change( object me )
{    	
    	object weapon = me->query_temp("weapon");
        string skill, m_skill,class1,family1;
        int lv_1, lv_2, exp,ffactor;          
        if( !have_weapon )
        {
          have_weapon = 1;
          fu_weapon = new("/open/ping/obj/fu_weapon");
          fu_weapon->move(this_object());
          fu_weapon->set("skill_type","unarmed");
          fu_weapon->set("material","crimsonsteel");     //ֻ��murofu�ò������ֲ��ʲ��ᱻ����,murofu����ָ�Ϊ��ͨ�ֲ�
         }
           
        if( weapon ) skill = weapon->query("skill_type");
        else skill = "unarmed";
        
        lv_1 = me->query_skill(skill, 1);
        if (lv_1 < 80)
        lv_1 = 80;
        set_skill(skill, lv_1);

        m_skill = me->query_skill_mapped(skill);
        if( m_skill )
        {    
          say("Ľ�ݸ�˵: ��ʹ����"+to_chinese(m_skill)+"��! ��! �Ҿ�������"
              +"�Ը���!!\n");
          lv_2 = me->query_skill(m_skill, 1);
          if (lv_2 < 80)
          lv_2 = 80;
          set_skill(m_skill, lv_2);
          map_skill(skill,m_skill);
          command("change "+skill); 
          command("unwield all");         //��set skill_type�޷�ʹmurofu�任�书,����unwield��wield
          command("wield specail");       
            }else{
           say("Ľ�ݸ�˵: �Դ�ļһ�,���˹�Ҳ������!! ȥ����!!\n");
        }
        exp = 1.2 * me->query("combat_exp");
       	if(exp > 500000)
       	set("combat_exp", exp);    
       	set_skill(me->query_skill_mapped("force"),200);
       	map_skill("force",me->query_skill_mapped("force"));   
       	set_skill(me->query_skill_mapped("dodge"),100);
       	map_skill("dodge",me->query_skill_mapped("dodge"));              
        ffactor = me->query("force_factor");
        class1 = me->query("class");
        family1 = me->query("family/family_name");
        if(skill=="archery"){                         //����ü���������fu_weapon set ��������,��Ȼ�޷�����
        	weapon->set("arrow/id","Plum arrow");
                weapon->set("arrow/name","��÷��");
                weapon->set("weapon_prop/damage",100);
                weapon->set("arrow/amount",300);
        }
        set("class",class1);
        set("family/family_name",family1);
        if(ffactor > 10)
        set("force_factor",ffactor);
        set("bellicosity",me->query("bellicosity"));
        if( weapon && (weapon->query("id")=="dragon blade" ||            //������˳������⹥�������ͼ�ǿ�������(ʹ��reflection)
				weapon->query("id") =="et-sword" ||
				weapon->query("id")=="evil-mblade" ||
				weapon->query("id")=="ublade" ||
				weapon->query("id")=="iceblade" ||
				weapon->query("id")=="sun_moon blade" ||
				weapon->query("id")=="world") )
       	  {
     	  say(HIY"Ľ�ݸ�˵: ���ô����������������������!!\n"NOR);
	  set_temp("ref_shield",1);
	  }	
        setup();
        return 1;
}

void die()                                                                 
{    
	object winner = query_temp("last_damage_from");
	object fu_weapon = query_temp("weapon");
	int j;
	if(fu_weapon)
	fu_weapon->set("material","steal");  //��ǰ�Ѱٱ����Ȼ�ԭ����ͨ�ֲ�
        if(!winner)
	{
	::die();
	return ;
        }
        winner->set_temp("kill_murofu",1);
	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj2/sky_stone")->move(environment(winner));
	  message_vision(HIM"\n��Ľ�ݸ������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/sky_stone",sprintf("%s(%s) ��Ľ�ݸ�����������ʯ�� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj2/sky_stone")->move(environment(winner));
	  message_vision(HIM"\n��Ľ�ݸ������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/sky_stone",sprintf("%s(%s) ��Ľ�ݸ�����������ʯ�� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}

void heart_beat()
{
	mapping	exit;
	string	*exit_name;
	object	weapon, *enemy;
	int	i, j , k, atman, mana;

	if( query("kee") < 0 ) {
		die();
		return;
	}
           
	if( is_fighting() ) {          //Ҫ�ж�ս���е��¼���д����
		if( query("kee")*100/query("max_kee") < 25 ) {         //�Զ�����
			exit_name = keys(environment()->query("exits"));
			i = sizeof(exit_name);
			command(exit_name[random(i)]);
			command(exit_name[random(i)]);
		}

		enemy = query_enemy();
		k = 0;
		for( i=0, j = sizeof(enemy); i < j; i++ ) {          //ȷ�ϵ������Ƿ���������������
		    if(enemy[i]){	
			weapon = enemy[i]->query_temp("weapon");
			if( weapon && (weapon->query("id")=="dragon blade" ||
				weapon->query("id") =="et-sword" ||
				weapon->query("id")=="evil-mblade" ||				
				weapon->query("id")=="sun_moon blade" ||
				weapon->query("id")=="world") )
				k++;
			if(((enemy[i]->query("class")== "killer" ||     //���ɱ����������ӹ���
			    enemy[i]->query("class")== "bandit") && random(10)<3) && environment(this_object())==environment(enemy[i])) {
		                say(HIR"\n\nĽ�ݸ������˵��: а���������Ľ�ݼҾ�ѧ"+HIB"���Ա�֮�� "+HIC+"����֮��\n\n"NOR);
                                message_vision(HIG"Ļ�ݸ��Լ�����һ�ߣ���$N��ʽ�й�����������Ϊ���ã���ʱ�����������Ͽ���$Nλ��Ѹ�ٳ�ȥ\n\n"NOR,enemy[i]);
                                if((enemy[i]->query("kar")+enemy[i]->query("cps")) < random(150)){
                                    message_vision(HIR"$N�����Լ���ʽ���û�֮������ʴ\n\n"NOR,enemy[i]);
                                    if((enemy[i]->query("force_factor")-5)>0)
                                        enemy[i]->add("force_factor",-5);
                                    else enemy[i]->set("force_factor",0);
                                    enemy[i]->receive_wound("kee",random((int) enemy[i]->query("max_kee")* 0.2),this_object());
                                    COMBAT_D->report_status(enemy[i],0);
                                }else
                                    message_vision(HIW"$N�������񾹺��˵Ķ������\n\n"NOR,enemy[i]);
                        }            
                        if(((enemy[i]->query("class")== "dancer" ||     //��Է���ϵ�������ӹ���
			    enemy[i]->query("class")== "taoist") && random(10)<3) && environment(this_object())==environment(enemy[i])) {
		                say(HIR"\n\nĽ�ݸ������˵��: ����Ϊʹ�÷����Ҿ�����û�������ҼҴ��ر�"+HIY"������ʯ��\n\n"NOR);
                                message_vision(HIG"�ó�����ʯ����ʱ����޹⣬�ƺ�����������е�������������ʯ��������\n\n"NOR,enemy[i]);
                                if((enemy[i]->query("kar")+enemy[i]->query("cps")) < random(150)){
                                    message_vision(HIR"$N������ʯ����������������������й\n\n"+
                                                   MAG"Ľ�ݸ������૵�������˲��һ���������ʯ�����$N���ɶ�ȥ\n\n"NOR,enemy[i]);
                                    atman= -(int) enemy[i]->query("max_atman")*0.4;
                                    mana= -(int) enemy[i]->query("max_mana")*0.4;  
                                    if((enemy[i]->query("atman")+atman)>0)                                         
                                        enemy[i]->add("atman",atman);                                        
                                    else enemy[i]->set("atman",0);                                    
                                    if((enemy[i]->query("mana")+mana)>0)                                        
                                        enemy[i]->add("mana",mana);
                                    else enemy[i]->set("mana",0);
                                    enemy[i]->receive_wound("kee",random((int) enemy[i]->query("max_kee")* 0.3),this_object());
                                    COMBAT_D->report_status(enemy[i],0);
                                    enemy[i]->start_busy(2);
                                }else
                                    message_vision(HIW"$N�������񾹺��˵Ķ���˹����Ĺ���\n\n"NOR,enemy[i]);
		}	   	
		}	   
                }
                if(k > 0 || sizeof(enemy) > 1)
                	set_temp( "ref_shield", 1 );
			else if( query_temp("ref_shield") == 1 )
				delete_temp("ref_shield");	       
	        if(is_busy() && random(10)<3){
	        	delete_busy();
	                message_vision(HIC"\n\nĽ�ݸ�ȫ���������忪�˱����Ѩ��\n\n"NOR,this_object());
	        }
	                  	        	
	}
	else if( query_temp("ref_shield") == 1 )
		delete_temp("ref_shield");


// ��ʮ�β�������Ļ���, kee < 60% ��
	if( query_temp("heal") < 10 )
		if( query("kee")*100/query("max_kee") < 60 ||
		    query("gin")*100/query("max_gin") < 60 ||
		    query("sen")*100/query("max_sen") < 60) {
			receive_curing( "kee", 2000 );
			receive_heal( "kee", 2000 );
			receive_curing( "gin", 2000 );
			receive_heal( "gin", 2000 );
			receive_curing( "sen", 2000 );
			receive_heal( "sen", 2000 );
			delete_busy();
			add_temp( "heal", 1 );
			tell_room( environment(), HIW + name() +
				"ʹ���Ҵ���ѧ, ��򵥵����κ��Լ����˿ڡ�\n"NOR );
		}
	if(!is_fighting())
	remove_all_killer();      //��murofu����Ǻ�
	::heart_beat();
}

