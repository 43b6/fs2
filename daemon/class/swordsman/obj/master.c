#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
int ask_gonfu();
int sha_array3();
int sha_array4();
int sha_array8();
int check_mogi(object me)
{ 
 command("fear");
 message_vision(HIY"
$N���ֵ�˵������������ħ��ľ綾�����𡱣�����Ǳ���澭����֮��
ÿ��һ��ʱ���ŻѪ��ֹ��ʱ��һ������������������ֻ�С�����ӡ��ʮʽ��
�ܻ�����У�\n"NOR,this_object());
}

int pass(object me)
{ 
 command("sigh");
 message_vision(HIY"$N������ˣ��ƺ�������ĳ����������...\n"NOR,this_object());
 message_vision(HIC"
$N������˵�������������ʱ�������...��ʱ�ɽ���ʦ��ң����δʧ�٣�ħ��ͻ
Ȼ��ٽ����˼䣬���Ǹ����ɱ�������ħ����ս......
��ʱ�Ϸ�������񣬸ո��������ɽ�����֮��---˫ʮ����ն��
����Ե�ʱ���Ϸ�Ϊ��һʱ֮�£�Ҳ���˻���չ�ִ��е����������ǹ˲��ô�����
δ��ȫ������ʹ���ˡ�˫ʮ����ն������ȴ���������ֵĿ��Դ�ʦ������Ҳ�������
�󿪱�ħ���ԡ����𡱰���͵Ϯ���Ӵ��Ժ�ÿ��ʮ����ʱ���Ϸ��ŻѪһ�Σ����ڴ�
Σ�������Դ�ʦ��֪���£����Ի���������Լ�������ǿ����ѹ���ٰ��Լ��ġ�����
ӡ�ھ�ʽ���ƽ�����ʮʽΪ�Ϸ����ˣ����Լ�ȴ���������˸�����������ӡ������
�����ܶ�Բ���ˡ����Ϸ��Ĵ���������˫ʮ����ն��
����������Ƿ��ܵþȣ��Ͽ�ǰȥ�����»��ס�ֿ����Ƿ��а취��\n
"NOR,this_object());

}
string check_damage()
{
	object me = this_player();
	if( me->query("quests/kill-dugur") && !me->query("quests/cure-star") )
	return "���е���ѩ���ɵľ��С���\Ҷ�����ơ�����һ�ƾ���ʮ��ǿ���ɼ����˷Ƿ���֮����\n";
	return "���������� ?";
}
string cure_damage()
{
	object me = this_player();
	if( me->query("quests/kill-dugur") && !me->query("quests/cure-star") )
	return "��������ˣ��Ҳ�û�а��գ����ǣ�������֪��ħ�����о����ⲿ����\n";
	return "���������� ?";
}
void create()
{
set_name("֣ʿ��",({"master teng","teng","master"}));
set("long","���������ֵ�һ����ʦ :֣ʿ��������ִ���ɽ��Ż���
ͬʱ��Ϊ��ʿ�����᳤ܻ����ʮ�����������ɽ�������
�ܶ���һ�棬�ֵ��������񣻶���������Ҳ����������
��ȫȨ����֣ʿ��ÿ��������ؾ�������ѧ�⣬��
���ڴ˽Ӽ������\n");
	set("gender","����");
	set("class","swordsman");
	set("nickname","�޼�����");
            set("family/family_name","�ɽ���");
            set("combat_exp",1400000);
            set("attitude","heroism");
            set("dragon-sword",1);
            set("bellicosity", 490);
	set("age",76);
	set("title","�ɽ��ɵ�����������");
            set("str", 44);
            set("cor", 42);
	set("cps", 18);
	set("con", 24);
	set("int", 42);
            set("max_gin", 4000);
            set("gin",4000);
            set("max_kee", 5900);
            set("kee",5900);
            set("s_kee",1000);
            set("max_s_kee",1000);
            set("sec_kee","god");
	set("force",4400);
            set("max_force",4400);
            set("functions/sha_kee/level",100);
	set_skill("literate",40);
            set_skill("cure",50);
            set_skill("magic",20);
            set_skill("spells",20);
            set_skill("shasword",100);
	set_skill("shaforce",80);
            set_skill("sha-steps",100);
            set_skill("sha-array",100);	
	set_skill("array",100);
	set_skill("move",80);
	set_skill("force",50);
	set_skill("dodge",80);
	set_skill("parry",120);
	set_skill("sword",120);
        map_skill("array","sha-array");
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        map_skill("force","shaforce");
        map_skill("sword","shasword");
        map_skill("parry","shasword");
	set("force_factor",29);
	set("inquiry",([
  "�ɽ�����ʽ" : (: ask_gonfu :),
  "��������" : (: sha_array3 :),
  "��������" : (: sha_array4 :),
  "������ն��" : (: sha_array8 :),
  "��Ԫ��" : "���������ƺ��ڶ�ʮ��ǰ���Ҿ�ʧ���ˣ����������ֵĵط���������ѩ��ɽ�ϡ�\n",
  "�ҵ���" : (: check_damage :),
  "����" : (: cure_damage :),
  "�ɽ�����" : "������������ͬ���䲻ͬ���У����������С����������¡���������ն�������� !!",
  "��Ҷ������" : "������ѩ���ɵĽ���֮һ������ʮ�־��ˣ����ǣ��ⲿ�����ƺ��ڶ��³�������Ѿ�ʧ���ˡ�\n",
  "����" : "������ʱ�Կ�ħ������ʱ���й��˶�������һ���ҵ�һλ����ɮ��ʩչ����ӡ��ʮʽΪ�ҽ�֮�����ǣ���...",
  "����ӡ��ʮʽ" : "��Ϊ���ַ�������ʮʽ�е���߽��У���ʮʽ����ʵ��̫ǿ���������������������㣬����
�����ڷ��˼����������������ɮ�Ǳ�Ҫ���Ὣ\����\�ƽ�����ʮʽ��",
  "��ɮ" :  (: pass :),
	]));
	set("get_sha_sp", 1);
            set("bounds", 4000000);
	set("chat_chance_combat",90);
	
	set("chat_msg_combat",({
        (: perform_action,"sword.sha_kee" :)
	}));
	setup();
	carry_object("/open/gsword/obj/dragon-sword.c")->wield();
		add_money("gold",10);
	create_family("�ɽ���",3,"������");
}

void init()
{
  object me = this_player();
  if(me->query_condition("mogi"))
  call_out("check_mogi",1,me);

        add_action("do_select","select");
        add_action("do_verify","verify");
}

int accept_fight(object who)
{

object guard, guard1;
 command("cmd god_kee");
 fight_ob(who);
 command("perform sword.sha_kee");
 return 1;
}

int accept_kill(object who)
{
 object guard, guard1;

 command("say ����֪����������������\n");
 set("have_kill_me",1);
 kill_ob(who);
 command("cmd god_kee");
 command("perform sword.sha_kee");
command("say ��� ,����������Ϸ���ʰ��С���� !!");
     if(!present("dragon cloth")){ 
carry_object("/open/gsword/obj/dragon-cloth.c")->wear();

        guard=new("/daemon/class/swordsman/boy.c");
        guard->move( environment() );
        guard1=new("/daemon/class/swordsman/girl.c");
        guard1->move( environment() );
}
        guard1->kill_ob(who);
        guard->kill_ob(who);

 return 1;
}


int do_verify(string arg)
{
 object me,ob;
 me=this_player();
 ob=new("open/gsword/obj/b1");
 if( arg!="sword")
{
    write("��Ҫ����ʲô\n");
    return 1;
   }
if(me->query("family/family_name")!="�ɽ���")
  {
    write("ֻ���ɽ���ͽ�Ż�������\n");
    return 1;
  }

 if( present(ob,me) )
  {
    write("���Ѿ��������\n");
    return 1;
   }
   else
    {
     write("֣ʿ��˵�������ɽ��ɵ����� ,����úñ��� ,������ʧ��\n");
     ob->move(me);
     return 1;
    }
}

void attempt_apprentice(object ob)
{
	if(ob->query("marks/�ɽ�����")==1)
	{
	if((int)this_player()->query("combat_exp")<=100000)
	{
	command("? " +ob ->query("id"));
	command("say �㲻�ǰݹ��ҵĵ�����?");
	command("say ����ĳ̶Ȼ�����������ָ��!");
	command("say �úø�����ʦ����ѧ�����!");
	return 0;
	}
	command("look "+ob->query("id"));
	command("smile");
	command("say ��,���Ȼ�ǿ���֮��,�ӽ������Ϸ�����ָ��!");
	// Modify By Oda
	// Ϊ�˱�����ʦ���� skill, �Ƚ���ҵ� family ȥ��
	ob->delete("family");
	command("recruit "+this_player()->query("id"));
	message("system",HIW"֣ʿ��������Ц: 
��������....�Ϸ�ʵ��̫������!
Ӣ�۳����� ,"+this_player()->name()+": �������Ϸ���������.\n"NOR,users());
	return ;
	}
      command("hmm");
      command("say ������ ,��ȥ���ҵ��߸�ͽ�ܰ� !");
      command("say �ҵ��߸������� �ų˷� �ų��� ���� �Ժ� ÷Ӱ ��˫˫ ����ң");
      command("say �����(select)˭��?");
      ob->set_temp("allow_select",1);
}

	int do_select(string str)
	{
	object who;
	who=this_player();
	if(!who->query_temp("allow_select"))
	{
	command("say ����û��Ӧ������? ");
	return 1;
	}
	if(who->query_temp("have_say")==1)
	{
	message_vision(sprintf(HIC"$N˵����"+str+"\n"NOR),who);
	command("say �㲻��������?");
	return 1;
	}
	if(str=="�ų˷�" ||  str == "chen fon" || str == "fon")
            {
	 message_vision(HIC"$N˵�����ų˷�\n"NOR,who);
 	 this_player()->set_temp("allow_1",1);
	 command("smile");
	 command("say �� ,��Ͱ��ҵ���ͽ�ų˷��!");
	 this_player()->set_temp("have_say",1);
	 return 1;
	}
	if(str == "�ų���" || str == "chen un" || str == "un")
	{
	message_vision(HIC"$N˵�����ų���\n"NOR,who);
	this_player()->set_temp("allow_2",1);
	command("smile");
	command("say �� ,��Ͱ��ҵĴ�ͽ�ų��ư�!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "����" || str == "teng yu" || str == "yu")
	{
	message_vision(HIC"$N˵��������\n"NOR,who);
	this_player()->set_temp("allow_3",1);
	command("smile");
	command("say �� ,��Ͱ��ҵ����������ڰ�!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "�Ժ�" || str == "san hu" || str == "hu")
	{
	message_vision(HIC"$N˵�����Ժ�\n"NOR,who);
	this_player()->set_temp("allow_4",1);
	command("smile");
	command("say �� ,��Ͱ��ҵ��ĵ����Ժװ�!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "÷Ӱ" || str == "may ying" || str == "may")
	{
	message_vision(HIC"$N˵����÷Ӱ\n"NOR,who);
	this_player()->set_temp("allow_5",1);
	command("smile");
	command("say �� ,��Ͱ��ҵ�Ů����÷Ӱ��!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "��˫˫" || str == "cute girl" || str == "girl")
	{
	message_vision(HIC"$N˵������˫˫\n",who);
	this_player()->set_temp("allow_6",1);
	command("smile");
	command("say �� ,��Ͱ��ҵ�Ů���Ӻ�˫˫��!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "����ң" || str == "shou_yau" || str == "yau")
	{
	message_vision(HIC"$N˵��������ң\n"NOR,who);
	this_player()->set_temp("allow_7",1);
	command("smile");
	command("say �� ,��Ͱ��ҵ��ߵ�������ң��!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	command("say û����!");
	return 1;
	}
  
int  ask_gonfu()
{
  object me;
  me=this_player();
  if( me->query_skill("shasword",1) < 80 )
 write(" ����\����Ҫ�ټ�ǿЩ ,��Ҫ��˼����\n ");
 else if(me->query("bounds",1) < 4000 )
 write("��Ա��ɹ��׻����� ,�ȹ������ٸ������\n");
 else 
    {
     write("��������\���� ,��������ǰ�Ѿ�ʧ�� ,�������� ,��ȥ�ؾ������Ұ�\n");
     new("/open/gsword/obj/pass")->move(me);
     write("����ͨ��֤����ȥ�����ƿ� ,���ͻ������ȥ��. \n");
     me->set_temp("allow_pass",1);
    }     	
     return 1;
}
	
int  sha_array3()
{
  object me;
  me=this_player();
  if( me->query("family/family_name") !="�ɽ���")
  command("say ����ɽ����ӣ�ˡ�����");
  else command("say ��ʵ������ƾ��������ģ������һ����������ͬʱ��ʹ���ɽ�����ʽ
�Ļ������Դ���Ҳ������ڳɾ���Ҳ˵������ǰ�������˵Ľ�����Ϊ����Ҫ����");
  return 1;
}	
int  sha_array4()
{
  object me;
  me=this_player();
  if( me->query("family/family_name") !="�ɽ���" )
  command("say ����ɽ����ӣ�ˡ�����");
  else command("say �Ϸ���ĳ��ԭ��ʹ��˫ʮ����ն��������Ȼ���������˫
ʮͬʱʩչ��κ�һ�ķ����������Լ�Ҳû�������");
  return 1;
}
int  sha_array8()
{
  object me;
  me=this_player();
  if( me->query("family/family_name") !="�ɽ���" )
  command("say ����ɽ����ӣ�ˡ�����");
  else command("say �����ں��ɽ������Ľ��Ͼ��к��Ϸ�Ľ��������ҵĵ��ӵ�ƽ��
\����\���������Դ�����Ϊ�ɽ��Ľ���֮һ��");
  return 1;
}
void unconcious()
{
   object winner = query_temp("last_damage_from");
   tell_object(users(),HIW"֣ʿ��������\n\n\n            "HIW"��"HIC"�����ɷ�쳾��      Ц̾�˼伸��� \n
              ���������･��      ֻ������Ըδ��"HIW"��\n\n\n"HIW"���հ���"HIY+winner->query("name")+HIW"����֮�֣��Ϸ����óϷ�������������һ���ѧ��������!!\n"NOR);
   :: unconcious();
}
void die()
{
        object winner = query_temp("last_damage_from");
        tell_object(users(),HIM"\n\nֻ����ɽ�϶��"HIY"����"HIM"ȽȽ����ɲΪ���\n\n\n"HIW"    һ��������ʦ��"HIC"֣ʿ��"HIW"���Ȼ������...\n\n"NOR);

        :: die();
}     		