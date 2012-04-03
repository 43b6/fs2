#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
inherit SSERVER;
string do_mdragon();
string do_mblade();
void create()
{
set_name("Ī�޳�",({"master mou","mou","master"}));
set("long","�������˵İ�������ʮ����������͵����Ϊ������Ѱ���³���丸ծ������������Կ�
�ﵽ�丸��ˮ׼��������ڵ������������µĴ��󣬸���������ŭն���з�����ħ������
�������������ף���ȷ�������صĺ󾢣�����������³��������Ʋ�������\n");
set("gender","����");
set("attitude","heroism");
set("age",35);
set("class","blademan");
set("nickname",HIR"����ħ��"NOR);
set("title","ħ���ŵڶ�������");
create_family("ħ����",2,"����");
set("score",100000);
set("force",4000);
set("max_force",4000);
set("env/ħ����ն","YES");
set("max_kee",30000);
set("force_factor",25);
set("mpower",1);
set("cor", 35);
set("str", 35);
set("per", 20);
set("int", 25);
set("functions/mdragon-dest/level",100);
set("cps", 35);
set("con", 35);
set("spi", 25);
set("kar", 35);
set("combat_exp", 1000000);
set("bellicosity", 3000);
set_skill("riding",80);
set_skill("force", 90);
set_skill("parry", 90);
set_skill("move", 60);
set_skill("dodge", 60);
set_skill("cure", 50);
set_skill("dragon-blade",105);
set_skill("powerforce", 90);
set_skill("blade", 100);
set_skill("literate", 40);
set_skill("unarmed", 20);
set_skill("spells", 20);
set_skill("magic", 20);
map_skill("parry","dragon-blade");
map_skill("blade","dragon-blade");
map_skill("force","powerforce");
set("chat_chance",40);
set("chat_msg",({
HIW"�������Ҳ����Ҹ��ס�ħ��Ī��\n"NOR,
HIW"�ҵĿ��������Ѵ����ޣ����͸��ױ������ֲ���һ��\n"NOR,
HIY"��˵�Ҹ�����һ�����֮������������Ҳֻ���Ҹ���֪\n"NOR,
}));
set("inquiry",([
"ħ����"  : (: do_mdragon :),
"ħ��Ī��":"��˵�Ҹ��ױ�����ѩ�Ժ�ɽ�����һֱ�Ҳ�����������ͷ����",
"����ŭն":"�����Ҹ����о������ģ����ҵ�ħ����ǿ��������",
"��������":"�����Ҹ��׵������Ժ��ĵ�������˵����ʧ������Ϳ���ŭն����ն��Ԫ��",
"ʧ������":"�Ҳ�̫�崦��������ʱ��û�����ˣ�����ֻ���Ҹ��׻ᡣ",
"��ն��Ԫ": (: do_mblade :),
]));
set("chat_chance_combat",100);
set("chat_msg_combat",({
(: perform_action, "blade.mdragon-dest" :),
}));
set_temp("apply/armor",65);
set_temp("apply/damage",65);
setup();
carry_object("/daemon/class/blademan/obj/ublade.c")->wield();
carry_object("/daemon/class/blademan/obj/shield.c")->wear();
carry_object("/daemon/class/blademan/obj/six-neck.c");
add_money("gold",10);
}

// by acky �ҳ�������
void greeting(object ob)
{
    if(!ob) return ;
	if( ob->query("get-evil-mblade")==1 ) {
        if( ob->query("family/family_name")!="ħ����" && ob->query("family/family_name")!="ħ��Ī��" && !wizardp(ob)) {
			command( "chat "+ob->query("name")+"("+ob->query("id")+")��������׵��޳�֮ͽ, ����ȥ����!" );
			kill_ob(ob);
			log_file( "BUG/����", sprintf("%s %s(%s)��ħ������, ȴ��������\n"
				,ctime(time())[0..15], ob->query("name"), ob->query("id") ) );
			return;
		}
		if( !present( "evil-mblade", ob ) ) {
			new("/data/autoload/blademan/evil-mblade.c")->move(ob);
			command( "say �㾹Ȼ�����ŵ����֮����Ū����!" );
			command( "waggle "+ob->query("id") );
			command( "say Ҫ���»���Ū��, �ɾͲ�����!" );
			message_vision( HIY"Ī�޳�������ó���������$N����!\n"NOR, ob );
			command( "say ��úñ��ܺð�!" );
		}
	}
}

void attempt_apprentice(object obj)
{
      command("l "+obj->query("id"));
    if(obj->query("title") == HIR"ɱ��ȫ��׷ɱ����ͷ"NOR)
	{
		command(" say ��С��....���������ף���");

	return ;
}
if(obj->query("kar",1)<25||obj->query("have_officer",1)==1||obj->query("family/family_name")=="����")
      {
          command("sigh "+obj->query("id"));
          command("say Īĳ������Ե�����߰ɡ�\n");
          command("shake");
          return;
      }
command(":)");
command("say ��С�ӣ���Ȼ���ޱȵĵ�����");
command("say �ã�����"+this_player()->name()+"Ϊ����ͽ��");
obj->delete("family");
command("recruit "+obj->query("id"));
if(this_player()->query("m_blade")==1) {
this_player()->set("title","[1;31mħ��[1;37m����ն��Ԫ��[1;35m����[0m");
}
message("system",HIW"Ī�޳�������Ц:
\n������������ħ����������"NOR,users());
message("system",HIR"\n\n���"+this_player()->name()+"��������Ѫϴ����������\n"NOR,users());
this_player()->set("no_recruit", 1);
 return ;
}
void init()
{
object ob;
::init();
if(interactive(ob =this_player()) && !is_fighting() ) {
remove_call_out("greeting");
if(ob)
call_out("greeting",1,ob);
}
add_action("do_verify","verify");
}
int do_verify(string arg)
{
object me,ob;
me=this_player();
ob=new("/data/autoload/blademan/mblade");
if(arg!="blade")
{
  write("��Ҫ��ʲô����\n");
  return 1;
  }
if((me->query("family/family_name")!="ħ����")&&me->query("family/family_name")!="ħ��Ī��")
  {
    write("ֻ��ħ����ͽ�Ż���ม�\n");
    return 1;
  }
if(arg=="blade")
{
if(present("mblade",me))
{
      write("���е��˻�Ҫ��\n");
      return 1;
}
      write("������ѵ��Ӷ��������ٸ�����ˡ�\n");
      ob->move(me);
      return 1;
} 
}
string do_mdragon()
{
object who;
who=this_player();
if(who->query("family/family_name")!="ħ����"&&who->query("family/family_name")!="ħ��Ī��")
{
command("say ������֪��ħ�������ѵ��Ƕ��������������ġ�");
command("say ��Ȼ��ˣ��ҾͲ���������Ż�ȥ���ٺٺ١�");
command("kill "+who->query("id"));
return "ɱ���㣬�ɶ�ļ����";
}
command("say ����Ϊʦ�������о������ģ���ʹ��ڸ����ˡ�");
command("say �÷�(perform blade.mdragon-dest)����Ҫ����������105�������á�");
return "ϣ�����ܺú���֮��";
}

string do_mblade()
{
  object me;
  me=this_player();
  if( me->query_skill("dragon-blade",1) < 90 ) {
  command("say �����������Ҫ�ټ�ǿЩ����Ҫ��˼����");
  return "ȥ��ǿ��ĵ�����"; }
  if( me->query("combat_exp") < 3000000 ) {
  command("say ��ʵս���鲻�㡣");
  return "ȥ��ǿ���ʵս�����"; }
  if( me->query("snow-head",1) < 700 ) {
  command("say ��ɱ��ѩ�Ե��ӻ��������ȹ�����˵��");
  return "ȥ��ɱ��ѩ�Ե��Ӱ�"; }
command("say ����ħ��������������ʽ���Ҹ��״����ķ�֮��Ҳ��ϰ��һʽ");
command("say ���ǣ������ö����ӵ���ͷ��������������ʸ���ϰ�ô��ķ�");
command("say ��������ħ�������𣬱�����ħ�����ڣ�����һֱ������ȥ�����");
command("say �Ҷ����ӵĵ���ռ��ħ�������꣬�ȴ������ӵĹ�������һ����������");
return "���ԣ�ֻҪ��������������Ҿʹ����ķ�";
}

int accept_object(object who, object ob)
{
object mid;
if(ob->query("id") == "sa-head")
{
destruct(ob);
say("Ī�޳�˿������ӵ�ͷ˵�� : ���ǡ�������ʥ�������ӵ�ͷ��\n");
if(who->query("family/family_name")=="ħ����"||who->query("family/family_name")=="ħ��Ī��")
{
     if(!who->query("m_blade",1))
     {
if(who->query("combat_exp") < 3000000 ) {
say("��ʵս���鲻�㣬��ȥ�������ɣ�\n");
return 1;
}
if(!who->query_temp("ko_sa")) {
say("���ֲ�����ɱ�ģ�������ƭ���أ�\n");
return 1;
}
if(who->query("snow-head",1)<700)
{
say("�㻹����а����ȥ��ɱһЩ�˰ɣ�\n");
}
else
{
        say("û�뵽�㾹��ɱ���������ðɣ�����Ա����������ס�\n"
            "�ҽ�ħ���ġ���ն��Ԫ���ķ����ڸ���ɡ�\n"
            "����������ã��Լ�ȥ���ɣ���������\n");
        message("system",HIC"Ī�޳����Ц����\n"HIW"
                ħ������ն��Ԫ��"HIC"���ں��������\n
                ������ƽѩ��֮�ղ�Զѽ��\n"HIR"
        ������������"+this_player()->name()+"ħ������ȫ�����ˣ�\n"NOR,users());
        who->set("m_blade",1);
        who->set("title","[1;31mħ��[1;37m����ն��Ԫ��[1;35m����[0m");
log_file("mblade/m_blade",sprintf("%s�⵽ħ������\n",
who->short()));
}}
/*
       else if(who->query("t_standby")<who->query("max_standby"))
       {
        say("���ķ��Ѿ����ˣ���ħ����Ҫ��а��֮��Ϊ��ס����\n"
            "���Ҿ�����һ����������ɣ�Σ��ʱ�ܱ���а��֮������\n");
log_file("mblade/standby",sprintf("%s����һ������\n",
who->short()));
who->add("standby",1);
who->add("t_standby",1);
       }
	   else message_vision( HIW"\nСѩ��˵����������ӵ�е����������Ѵ����ޣ��޷������ӣ����޷������㡣\n\n"NOR, who );
*/
     }
else
{
      if(!who->query("get_atman",1))
       {
        say("û�뵽��ħ���ŵ��޵У����ᱻ����ɱ������������Υ��\n"
            "�ã���Ȼ������ɱ���Ҿʹ��Ҳ��������ͷ�������ɡ�\n");
message_vision(HIC"Ī�޳��ָ��$Nü�ģ�˲ʱ�����ᶥ��$N����ɢ��������֮����\n"NOR,who);
        who->add("max_atman",200);
        who->add("max_mana",200);
        who->add("atman",200);
        who->add("mana",200);
        who->set("get_atman",1);
       }
/*.
      else if(who->query("t_standby")<who->query("max_standby"))
       {
        say("�ٺ٣����ѵ��������뷨�����������ն�����������\n"
            "һ������������ˣ�С��а��֮��ѽ����������\n");
log_file("mblade/standby",sprintf("%s����һ������\n",
who->short()));
who->add("standby",1);
who->add("t_standby",1);
       }
	   else message_vision( HIW"\nСѩ��˵����������ӵ�е����������Ѵ����ޣ��޷������ӣ����޷������㡣\n\n"NOR, who );
*/
     }
  }
}
void heart_beat()
{
 object env,mob,*enemy,target;
 int i;
 mob = this_object();
 env = environment(mob);
   if( random(100) > 70)
 {
    enemy=mob->query_enemy();
	if( i = sizeof(enemy) ) {
   target=offensive_target(mob);
    if(target)
    if( env == environment(target) )
    {
message_vision(HIY"
Ī�޳�ʩչ��ħ������ն��Ԫ��������Ԫ��\n"+
"��������������𲡫����ᰴ��𡯣�����\n"+
"$N���ܲ�����������Ҫ����Ѫ������\n"NOR,target);
    target->receive_damage("kee",600,mob);
      COMBAT_D->report_status(target,1);
    }
	}
 }
   ::heart_beat();
}
int accept_kill(object who)
{
who=this_player();
command("wear all");
command("kill "+who->query("id"));
command("perform blade.mdragon-dest");
return 1;
}
int accept_fight(object who)
{
who=this_player();
command("wear all");
command("kill "+who->query("id"));
command("perform blade.mdragon-dest");
return 1;
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

   if (winner && userp(winner))  {
tell_object(users(),HIR"\n\nĪ�޳�����ŭ��\n\n\t�ɺ޵�"+winner->name()+HIR"���谭�Ҹ����ҵ��
\n\t���ӻ��ٻ�������ģ����Űɣ�\n\n"NOR);
   }

	if( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {
	  new("/open/sky/obj11/orange-crystal")->move(environment(winner));
	  message_vision(HIM"\n��Ī�޳�����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/orange_crystal",sprintf("%s(%s) ��Ī�޳�����˳�ɫ�⾧�� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 )
	  {
	  new("/open/sky/obj11/orange-crystal")->move(environment(winner));
	  message_vision(HIM"\n��Ī�޳�����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/orange_crystal",sprintf("%s(%s) ��Ī�޳�����˳�ɫ�⾧�� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}

        :: die();
}
