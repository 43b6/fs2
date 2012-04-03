#include "/open/mogi/castle/npc/castle.h"
#include <ansi.h>
inherit NPC;
   
void create()
{
	set("long","
    ����ħ��, ħ��֮ͳ����, ��ȫ���������, ������������������ͣ�ı����š�
��ϸһ�����������������, �ڹ�֮���ֱ����˼�顣�������Ϳ�����ѧ�����𹦡�
, ������һ�����������汼��, �����ɵ����ɼ��������ɵġ������������
���������������γɼ�Ӳ���֡�
");
        set("gender","����");
        set("nickname",HIR"��������"NOR);
        set("title","ħ��֮��");
        set_name("����ħ��",({"fire king","king"}));
        set("combat_exp",16000000);
        set("class","fighter");
        set("attitude","aggressive");
        set("score",90000000);
        set("bellicosity",1000000);
        set("age",10000);
        set("max_force",70000);
        set("force", 250000 ); 
        set("max_kee",70000);
        set("max_gin",70000);
        set("max_sen",70000);
        set("str", 35);
        set("cor", 35);
        set("cps", 35);
        set("int", 35);
        set("con", 35);
        set("kar", 35);
        set("force_factor",50);
        set_skill("dodge",200);
        set_skill("force",250);
        set("no_mount",1);
        set("no_plan_follow",1);
        set_skill("move",280);
        set_skill("parry",200);
        set_skill("mogi-steps",200);
        set_skill("firestrike",220);
        set_skill("unarmed",220);
        set_skill("literate",200);
        set_skill("fireforce",250);
        set_temp("apply/defense",60);
        set_temp("apply/armor",60);
        set_temp("apply/attack",30);
        set_temp("no_die_soon",1);
        map_skill("force","fireforce");
        map_skill("unarmed","firestrike");
        map_skill("dodge","mogi-steps");
        map_skill("move","mogi-steps");
        map_skill("parry","firestrike");
        set("functions/gold-fire/level",100);
        set("quest/gold-fire",1);
        set("quest/new_gold_fire",1);
        setup();
        carry_object("open/mogi/castle/obj/fire-king-head");
        carry_object("/data/autoload/mogi/fire-armor")->wear();
        carry_object("/data/autoload/mogi/fire-cloud-boots")->wear();
        carry_object("/data/autoload/mogi/fire-belt")->wear();
        carry_object("/data/autoload/mogi/daemon-cloak")->wear();
        carry_object("/data/autoload/mogi/fire-dragon")->wield();
        carry_object("/open/mogi/castle/obj/blood-water");   
        carry_object("/data/autoload/mogi/sspill")->set_amount(7);
        carry_object("/open/killer/headkill/obj/world_dag.c");
        add_money("gold",1000);
}

void init()
{
	::init();
	add_action( "block_cmd", "" );
	add_action( "do_cmd", "cmd" );
	add_action( "do_exert", "exert" );
	if( this_player()->query("combat_exp") < 2500000 )
		add_action( "do_kill", "kill" );
}

// �� do, ���� cmd �ж�ʧЧ by ACKY
int block_cmd( string arg )
{
	if( (string)query_verb() == "do" ) {
		write( HIY"����ħ����Ц:����ˣ�����õļ���?! ��! ȥ����!��\n"NOR );
		if( is_fighting() )
			this_player()->start_busy(1);
		return 1;
	}
}

int do_cmd(string str){                 //ok by chan
 string arg;
 object who=this_player();
 object ob,king;
 ob=this_object();
 king=present( "king",environment(ob) );
 
	if( !str )
		return 0;

 if(str=="askgod king" || str=="askgod fire king"){
 write(HIY"����ħ����Ц�����ڱ�ħ����ǰ�����ʲ�!?�������һ���ࡣ��ȥ����!!\n"NOR);
 command("perform fireforce.gold-fire");
 king->kill_ob(who);
 return 1;
}
 if(str=="vet king" || str=="vet fire king"){
 write(HIY"����ħ��ŭ���������ӹҽ���������ʲô��������������һ�̰ɣ�����\n"NOR);
 command("perform fireforce.gold-fire");
 king->kill_ob(who);
 return 1;
}
 if(str=="bak king"){
 write(HIY"����ħ����Ц���밵ɱ��ħ��!!!Ҳ������˭�ǰ�ɱ֮��ѽ!!!ȥ����!!\n"NOR);
 command("perform fireforce.gold-fire");
 king->kill_ob(who);
 return 1;
                  }

	if( sscanf( str, "%s %s", str, arg ) )
		if( str=="throw" ) {
			write( HIY"����ħ����Ц:�����ʲô? ����!��\n"NOR );
			return 1;
		}
}

int do_kill( string str )
{
	object me = this_player();

	if( (str=="fire king"||str=="king") && me->query("combat_exp")<2500000 ) {
		write( HIY"����ħ�������˵:���㲻���ʸ�ɱ��!��\n"NOR );
		return 1;
	}
	return 0;
}

void greeting( object me )
{
	write( HIY"����ħ������������������:\n\t�����ߺ��ˡ�����
\t������������, �治��! ����֮�ϵ�����, ����һ��!��
\t�������������ұȻ�, �㻹���̫Զ!��
"NOR ); 
}

int accept_fight(object who)
{
	write( HIY"����ħ�������˵:��Ҫ���Ļ��Ϳ��߰�!��\n"NOR );
	return 0;
}

int do_exert( string str )
{
	mixed	all;
	int	i;
	object	me;
	me	= this_player();
	all	= all_inventory(environment(me));

	if( str=="roar" ) {
		say(HIC"$N��������, ����һ����ͼ���������˷���ħ����\n", me );
		say(HIC"����ħ����Ц˵������Ҳ�к�? �����Ǽ�ʶһ��������"HIR"��ħ���"HIC"��!\n");
		say(HIR"\n����ħ�����һ��, ɲ�Ǽ��쾪��ҡ, ħ����˶���! ���������ɲ�Ǽ��������!\n");
		message_vision( HIR"��������˱��������ޱȵ���ħŭ������, ��һ���³�һ�����Ѫ!\n"NOR, me );
		for( i=0 ; i<sizeof(all); i++ )
			if( living(all[i]) && !wizardp(all[i]) && all[i]->query("id")!="fire king" ) {
				all[i]->add( "kee", -600 );
all[i]->delete_temp("hardshell");
				COMBAT_D->report_status( all[i], 1 );
			}
		return 1;
	}
	return 0;
}

int accept_kill( object who )
{
	write( HIY"����ħ���ӱ����ϻ�Ȼվ��!\n"NOR );
	command("say ������! �����Ҽ��𹦵�������!");
	if( !is_fighting() )
		command("perform fireforce.gold-fire");
	return 1;
}

void heart_beat()
{
	mixed	all;
	object	king;
	int	i, j, tmp , count;

	king	= this_object();
	all	= all_inventory(environment(king));
	count = random(100);
	j = random(3)+1;

//�ı�����������ʽ��fire king���������Ѿ������ˣ�������������
//��һ��ȫ����ʵ����̫ǿ�ˣ�������ǿ��pplҲ��һֱ��delay������
//���ӵĻ���Ҳû�У����Ը�����ʽ���ĳ�ȫʱ�γ���ÿһ����������
//��һ�֣��������ֱ�Ե�򲻳����������������һֱ��busy���Ǿ���
//��̫���ˡ�

	for( i=0 ; i<sizeof(all); i++ )
		if( living(all[i]) && !wizardp(all[i]) && all[i]->query("id")!="fire king" && !is_fighting(all[i]) )
			kill_ob(all[i]);

	if( count < 10 && is_fighting() ) { // ���� busy
		message_vision( HIR"\n����ħ�����һ��, ɲ�Ǽ��쾪��ҡ, ħ����˶���! ���������ɲ�Ǽ��������!\n\n"NOR, king );
		message_vision( HIR"��������˱��������ޱȵ���ħŭ������, ��һ���³�һ�����Ѫ!\n"NOR, king );
		for( i=0 ; i<sizeof(all); i++ )
			if( living(all[i]) && !wizardp(all[i]) && all[i]->query("id")!="fire king" ) {
				all[i]->add( "gin", -100 );
all[i]->delete_temp("hardshell");
				all[i]->start_busy(j);//���������ʵģ�����һ�غϣ��������غϡ�
				COMBAT_D->report_status( all[i], 1 );
			}
	}

	if( count > 10 && count < 25 && is_fighting() ) { // ���� force
		message_vision( HIR"
	����ħ����ȫ��ҵ��������, ����ҵ���̲�����������
	գ�ۼ�, ����ħ��߳�Ȼص�"HIW"��ħ���ֻ� ҵ����С�"HIR"
	ҵ�𲻶���������������!\n\n"NOR, king );
		message_vision( HIR"��������˰˳�����ȫ��ҵ������, �ھ���й!\n"NOR, king );
		for( i=0 ; i<sizeof(all) ; i++ )
			if( living(all[i]) && !wizardp(all[i]) && all[i]->query("id")!="fire king" ) {
				tmp = all[i]->query("force")/5*4;
				all[i]->add( "force", -tmp );
all[i]->delete_temp("hardshell");
				king->add( "force", tmp );
			}   
	}

	if( count > 25 && count < 50 && is_fighting() ) { // ������
		message_vision( HIR"
	����ħ��ȫ���������, ͻȻ������ҵ��������,
	գ�ۼ�, ����ħ��߳�Ȼص�"HIW"��ħ������ ���汼�ڡ�"HIR"
	ҵ�𲻶�����Ϯ��!\n\n"NOR, king );
		for( i=0 ; i<sizeof(all) ; i++ )
			if( living(all[i]) && !wizardp(all[i]) && all[i]->query("id")!="fire king" )
				all[i]->receive_wound( "sen", 100+random(100) );
	}

	if( count > 50 && count < 80 && is_fighting() ) { // ����mob
		message_vision( HIR"
	����ħ����������ҵ��, ������һ˲���ɷ���Ѫ��ħ��,
	�����䴵��֮�ﾡ�ӳ���, ���˿ڱ�������Ϣ
	գ�ۼ�, ����ħ��߳�Ȼص�"HIW"���������� ħ�����졯"HIR", ����ħ��Ю��ʴ��
	����֮�������Ϯ��һ��!\n\n"NOR, king );
		for( i=0 ; i<sizeof(all); i++ )
			if( living(all[i]) && !wizardp(all[i]) && !userp(all[i]) &&
			    !all[i]->query("master") && all[i]->query("id")!="fire king" )
				all[i]->die();
all[i]->delete_temp("hardshell");
	}

	if( count > 80 && is_fighting() ) { // ������
		message_vision( HIR"
	����ħ����������ҵ��, ������һ˲���ɷ���Ѫ��ħ��,
	�����䴵��֮�ﾡ�ӳ���, ���˿ڱ�������Ϣ
	գ�ۼ�, ����ħ��߳�Ȼص�"HIW"���������� ħ�����졯"HIR", ����ħ��Ю��ʴ��
	����֮�������Ϯ��һ��!\n\n"NOR, king );
		message_vision( HIR"��������ڼ����, ���������л�������ֱð, ������������ζ!\n"NOR, king );
		for( i=0 ; i<sizeof(all); i++ )
			if( living(all[i]) && !wizardp(all[i]) && all[i]->query("id")!="fire king" ) {
			all[i]->receive_wound( "kee", 500 );
all[i]->delete_temp("hardshell");
			COMBAT_D->report_status( all[i], 1 );
		}
	} 

	if( random(100) < 50 && is_fighting() && king->query("kee") > 0 )
	{
		message_vision( HIG"\n����ħ����ð�����ܻ���, �˿ڽ�����������!\n"NOR, king );
		king->delete_busy();
		king->clear_condition();
	    king->receive_curing("kee",5000);
	    king->receive_heal("kee",5000);
	    king->receive_curing("gin",5000);
	    king->receive_heal("gin",5000);
	    king->receive_curing("sen",5000);
	    king->receive_heal("sen",5000);

	}

	// by babe ����պ�, ��Ҫ����
	if( !is_fighting() ) {
		if( query("force") < query("max_force") ) // 1 -> 5.035
			command( "ex 200" );
		if( query("eff_kee") < query("max_kee") ) // 35 -> 40
			command( "10 exert heal" );
		if( query("gin") < query("eff_gin") ) // 125
			command( "exert regenerate" );
		if( query("kee") < query("eff_kee") ) // 125 -> 300
			command( "4 exert recover" );
		if( query("sen") < query("eff_sen") ) // 125
			command( "exert refresh" );
	}

	// enf ��������
	if( query("force_factor") < 40 )
	{
	king->set( "force_factor", 45 );
	}

    set_heart_beat(1);
	::heart_beat();
}

void die()
{
	int i,j;
	object *enemy;
  
   object winner = query_temp("last_damage_from");
   string name = winner->query("name");
   enemy = query_enemy();
  i=sizeof(enemy);
  
        tell_object(users(),HIW"
            
         ����ħ������̾���������������ҵľ����������ܵ�,
                             �벻�����հ���"+HIY+
                             (winner->query("family/family_name")?winner->query("family/family_name"):"")+
                             HIC+name+HIW"       
                             ֮��, ���Ǻ�����η��̾���� ��

        "HIB"   ħ���W���籩��   һ��ħ��֮������ħ������!             
"NOR);

 log_file("mogi/KILL_FIRE_KING", sprintf("%s(%s) ��� ����ħ�� on %s\n"
,name,winner->query("id"), ctime(time()) ));

/*
	//by ACKY
	if( random(100) < 10 )
		environment(this_object())->war_start();
*/
	if( winner->query("clan/id") )
		CLAN_D->add_clanset( winner->query("clan/id"), "develop" , 10 );

   tell_object(winner,"
\n����ħ��˵���ð�...��Ȼ���Ѿ�Ӯ�����ˣ��ҾͰѷ�����
�������ˣ�������ô��������Ҳ������©�����߾������İ��ء�
�����������ö����ַ���ס����Ԫ��Ѩ�������Ѿ�����
�����Ҵ����Ѩ�ַ�(recover force)���������߿��ҵ�����
\n");

   tell_object(winner,HIY"\n����ħ�����ñ������ߵĹ�������㣺
���Ǻ�����η...������Ҳû��Ҫ�����ҵľ�ѧ�ˣ������Ҿʹ���
"HIR"��������ķ�"HIY"�������澭�ͷ��ڰ׻��ң���ϰ֮��
\n"NOR);
   winner->set("quest/gold-fire",1);
   winner->set("quest/new_gold_fire",1);
   winner->set_temp("win_fireking",1);

   for(j=0;j<i;j++){
       if(enemy[j]->query("class")=="swordsman" && enemy[j]->query_temp("win_fireking")!=1)
       {
       enemy[j]->set_temp("win_fireking",1);
   tell_object(enemy[j],"����ħ��˵���ð�...��Ȼ���Ѿ�Ӯ�����ˣ��ҾͰѷ�����
�������ˣ�������ô��������Ҳ������©�����߾������İ��ء�
�����������ö����ַ���ס����Ԫ��Ѩ�������Ѿ�����
�����Ҵ����Ѩ�ַ�(recover force)���������߿��ҵ�����
\n");
       }
                    }
//����....................................
//���߽��˻�.����һ������....ͬʱ����ʹ���ռ�ȭ��...................by chan
 if(winner->query("class") == "fighter")
 if((winner->query("combat_exp") > 5000000) && !(winner->query("final/ko_king")))
 {
   winner->set("final/ko_king",1);
   winner->set("final/limit",1);
   tell_object(winner,HIR"������ͻ����ѧ�ϼ���!!����ռ�ȭ��!!��Ϊ����!!\n"NOR);
   winner->set("title","[1;33m�������� [0m");

   write("���һ��help �ռ�ȭ��,���Ե�֪�����ѶϢ....!!!\n");
  }
//���䵶�ͽ��������Ƶ��� by swy
 if(winner->query("class") == "blademan")
if(winner->query("combat_exp")>5000000&&!winner->query("mk-blade")&&userp(winner))
 {
   winner->set("mk-blade",1);
tell_object(winner,HIY"\n����ħ�����ñ������ߵĹ�������㣺
���Ǻ�����η...������Ҳû��Ҫ�����ҵľ�ѧ�ˣ������Ҿʹ���
"HIR"а���Ƶ���"HIY"����ϰ֮��\n"NOR);
if(winner->query("gender")=="����") { winner->set("title",HIW"����"HIY"����"NOR); }
else { winner->set("title",HIB"����"HIC"�ļ�"NOR); }
   write("���һ�� help а���Ƶ�������֪������ѶϢ��\n");
  }

//Bellow Add By AceLan.......
        if( winner->query("family/family_name")=="����")
        {
                 tell_object(winner,HIW"��ƾ���Ÿ�����ķ��ڲ�֪�����������˷���ħ�����𹦵ľ��裬
��˼�˰���֮��ͻȻ���򵽽����������������֮����������񻶵�
"+HIR+"==========������һ��������߷١�==========\n"
NOR);
        } 

  :: die();
}                    
