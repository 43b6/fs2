// daemon/class/killer/master_yar.c
//made by fund//change and organization by Urd Ů��
//2001.11.5 Ϊ��ɱ�ֽ���ְҵ�������֮��ɱ������ by wataru

#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
string to_kill();
string to_hurt();
string to_miss();
string to_miss2();
string to_miss3();
string to_miss4();
string to_miss5();
string to_miss6();
string retitle();
string ask_blade();
string ask_blood();

void create()
{
object ob;
set_name("Ҷ��ɱ",({"master yar","yar","master"}));
set("long","�������𽭺���һ��ɱ�֣���������ͷĿ��\n");
set("gender","����");
set("class","killer");
set("nickname","ɱ������");
set("combat_exp",1500000);
set("attitude","heroism");
set("age",36);
set("str", 45);
set("cor", 34);
set("cps", 18);
set("per", 24);
set("int", 42);
set("kee",9000);
set("max_kee",9000);
set("gin",1600);
set("max_gin",1600);
set("sen",1600);
set("max_sen",1600);
set("atman",1200);
set("max_atman",1200);
set("mana",1000);
set("max_mana",1000);
set("force",3500);
set("max_force",3500);
set("quest/rain",1);
set_skill("cure",50);
set_skill("magic",20);
set_skill("literate",30);
set_skill("force",80);
set_skill("move",80);
set_skill("parry",60);
set_skill("dagger",90);
set_skill("dodge",100);
set("quest/island",3);
set_skill("throwing",120);
set_skill("blackforce",95);
set_skill("shade-steps",100);
set_skill("rain-throwing",100);
set_skill("shadow-kill",90);
map_skill("throwing","rain-throwing");
map_skill("dodge","shade-steps");
map_skill("force","blackforce");
set("bellicosity",1500);
set_temp("apply/armor",70);
set("inquiry",([
"׷ɱ��" : (: to_kill :),
"ħ��ɱ֮��" : (: to_hurt :),
"����" : (: to_miss :),
"����" : (: to_miss2 :),
"׷ɱ" : (: to_miss4 :),
"��ͷ" : (: to_miss5 :),
"��Ѫ����" : (: to_miss3 :),
"��֮��ɱ" : (: to_miss6 :),
"Ѫ������" : (: ask_blood :),
"���е�λ" : (: retitle :),
"����ħ��" : (: ask_blade :),
]));
set("force_factor",15);
set("chat_chance_combat",45);
set("chat_msg_combat",({
(:perform_action,"throwing.manakee":),
}));
setup();
create_family("������",2,"��ϯ");
ob=carry_object("/open/killer/obj/hate_knife");
ob->set_amount(300);
ob->wield();
carry_object("/open/killer/weapon/k_cloth3.c")->wear();
carry_object("/open/killer/weapon/k_boot3.c")->wear();
carry_object("/open/killer/weapon/k_arm3.c")->wear();
carry_object("/open/killer/weapon/k_head3.c")->wear();
carry_object("/open/killer/obj/k_ring.c");
}

void init()
{
	add_action("do_join","join");
}

string to_kill()
{
	object ob;
	if( this_player()->query("quests/to-kill") ) 
	{
	command("?");
	return "$N�����ɱ˭��......";
	}
	if( present("letter",this_player() ) )
	{
	command("?");
	return "$N�Ѿ��õ��ܺ���...������??";
	}
	command("look "+this_player()->query("id"));
	command("hmm");
	ob = new(__DIR__"letter");
	ob->move( this_player() );
	message_vision("$N�ݸ�$nһ���ܺ���\n",this_object(),this_player());
	return "������д�ű�׷ɱ����........";
}

string to_hurt()
{
 object ob;
 object me;

 me=this_player();
 if( me->query_temp("hurt") !=1 )
 {
   command("?");
   return "$N��˵ʲôѽ��";
 }
 tell_object(me,HIY"���еĲ���ħ��ɱ��������ħ����󷨵�������ָ��Ŀǰֻ��ׯ�����ʹ�á�\n");
 tell_object(me,"��ˣ�������ħ����󷨱��������˰�\n");
 tell_object(me,"���������������������������ˣ���������ǰ�������ˡ�����\n");
 tell_object(me,"�����������˵������֮�У���װ���Ѷ���ʹ�뿪��ׯ����\n");
 tell_object(me,"����Ϊ�˱���ׯ������޶��߻���ħ��������ħ�����ȡ��\n");
 tell_object(me,"���������˺���������ǰ����ϯҶ�³ǵ�ָ���´����˰���ʽ\n");
 tell_object(me,"��ʱ��ʦ����ԭ��Ҫ����ϯ֮λ�������٣�������Ϊׯ�����Ե��\n");
 tell_object(me,"Ϊ��ɱ�ֵİ�ȫ��ʦ�����㽫��ϯ֮λ�������ң�������������뿪�����и��ϲ����ѧ\n");
 tell_object(me,"���ǲ���������һֱ�����ž��ᣬ�������˵�ʱ�ı���ʹ���պ���\n");
 tell_object(me,"����ħ����󷨣�����ׯ���Ტ�ҽ������\n");
 tell_object(me,"��֪�����պ�������̰�����ħ����󷨶��̣�������ɱ�˺ü�λħ��ͽ\n");
 tell_object(me,"�޻������٣���������ׯ�����ȫ��׷ɱ���ʹ����ֻ���������������\n");
 tell_object(me,"���������������ڤ��ħ�̵�ȫ��Ծ�����ʹ�¼�ƽ��������\n");
 tell_object(me,"���ǣ�����������ԭ�²��٣���Ϊ����������\n");
 tell_object(me,"�����㽫���ǵĶ�������-����ذ�ס�������������Ҳ����������ʱ������\n");
 tell_object(me,"����ذ������¥�ı��߷��䣬������һ��ʬ������ס��ɱ�����Ϳ��Եõ�\n"NOR);
 me->set_temp("god",1);
 return "$N����¥����һ�£������ҵ���ȥ�Ŀ���";
}

string retitle()
{
  object ob,me;
 
 me=this_player();

 if (me->query("class") != "killer")
  return "��ġ����뿪ɱ�֣�����Ҫ�������ĵ�λ����";

/*
 if (me->query("title"))
 {//���ٻ������Ǻ���������������
   if (me->query("title") != "����������������")
       return "�񾭲�����ĳƺŲ��Ǻúõģ�";
 }
*/

 if (me->query("quest/head-kill") == 1)
 {
   tell_object(me,"�ƺ���ô�������أ���С��һ�㡣\n");
   tell_object(me,"����Ϊʦ�����ظ���ĳƺŰɣ�\n");
   me->set("title",HIR"��"+HIG"��"+HIY"ɱ"+HIB"��"NOR);
   return "�úõļ��Ͱɣ�����";
 }
 if (me->query("quest/memory") == 1)
 {
   tell_object(me,"�ƺ���ô�������أ���С��һ�㡣\n");
   tell_object(me,"����Ϊʦ�����ظ���ĳƺŰɣ�\n");
   me->set("title",HIM"�������ؼ�ɱ��"NOR);
   return "�úõļ��Ͱɣ�����";
 }
 if (me->query("quest/rain") == 1)
 {
   tell_object(me,"�ƺ���ô�������أ���С��һ�㡣\n");
   tell_object(me,"����Ϊʦ�����ظ���ĳƺŰɣ�\n");
   me->set("title",HIG"���������ϼ�ɱ��"NOR);
   return "�úõļ��Ͱɣ�����";
 }
 return "�������С���ӻ����е�λ��";
}
string to_miss()
{
 object ob;
 object me;
 me=this_player();
 if( me->query("quest/rain") !=1 )
 {
   command("sm");
   return "$N��ħ��ɱ�������ᣬ�����ʲô����";
 }
 tell_object(me,"����֪����һ������\n");
 tell_object(me,"Ŀǰ��(����),(��Ѫ����),��׷ɱ��,(��ͷ),(��֮��ɱ)�������\n");
 return "�����������";
}
string to_miss2()
{
  object ob,me;
 
 me=this_player();
 if (me->query("quest/rain") != 1)
   return "$N��ħ��ɱ�����ᣬ��Ҫ������";
 tell_object(me,"��˵����Ҷ���ж�������ɵ�����Ǳ�룬ֻ�ж���һ��\n");
 tell_object(me,"��ȥ����ɱ�ˣ�װ������¥���Լ�ȥ��\n");
  me->set_temp("mission1",1);
 return "��ͷ�Լ���ȥ��Ǯ";
}

string to_miss3()
{
  object ob,me;
 
 me=this_player();
 if (me->query("quest/rain") != 1)
   return "$N��ħ��ɱ�����ᣬ��Ҫ������";
 tell_object(me,"����һ��û����֪�������ܣ�Ҳ���Ǻ�Ѫ��������ڵ�\n");
 tell_object(me,"���ǵ�����Са����Ѫ��󣬱�Ǳ��ĺڽ�ɱ�֣��ɺ���������͵�ߵ�\n");
 tell_object(me,"Ŀǰ�ƺ����ˣ����ź�Ѫ���뵽�����ˣ���ȥ�Ѻ�Ѫ����׷������\n");
  me->set_temp("mission2",1);
 return "��Ѫ�����������������������";
}

string to_miss4()
{
  object ob,me;
 
 me=this_player();
 
 if (me->query("quest/rain") != 1)
   return "$N��ħ��ɱ�����ᣬ��Ҫ������";
  if(present("black blood",me))
 {
   tell_object(me,"��Ҳ�õ�������ѽ����֪������������˰ɣ�\n");
   tell_object(me,"Ŀǰ����λ���ź�Ѫ���뵽�����˵��ˣ��ƺ��Ѿ����������鳤������\n");
   me->set_temp("mission3",1);
   return "$N����ȥ�����ʿ���(׷ɱ��)";
 }
 return "$N�㵽��֪��֪��Ϊ��Ҫ׷ɱѽ����֤����֪������֮�հɣ�";
}

string to_miss5()
{
  object ob,me;
 
 me=this_player();
 if (me->query("quest/memory") != 1)
   return "$N��ɱ�����û�У���Ҫ����һ���ش�����";
 tell_object(me,"��������������ﵽɱ�ֵ�ͷ�����ˣ������������������ѳ�\n");
 tell_object(me,"�����������������ʱ���ˣ�������Ҳ����ֱ����ʹ������\n");
 tell_object(me,"�����ȥִ������ɣ��ڻ�԰�������������������\n");
 tell_object(me,"��ס���пھ�������ͨ����԰����ķ���\n");
 tell_object(me,"��ľ������һ��ʯͷʮ�ɷ���\n");
 tell_object(me,"��԰����ɫ������������ͨ��С�����������\n");
 tell_object(me,"�������ʲ�ͬ����Ҫ�������Լ����¸ҵİ��տھ���˵��һ������ͨ������\n");
if (me->query_temp("head") < 5)
  me->set_temp("head",1);
 return "����������ȥ��ɱ��ȫ��׷ɱ����ͷ�û�������";
}

string to_miss6()
{
  object ob,me;
 
 me=this_player();
 if (!me->query("quest/head-kill"))
   return "��ɱ��ȫ��׷ɱ����ͷ���ò�������������а취�Ը���������أ�";
 if (!me->query("quest/island"))
   return "��֮��ɱ���㲻����.....���������������㲻���....";
 if (me->query("combat_exp") < 2000000)
   return "��Ȼ���ѻ�õ���ɱ�ֵĳƺţ�����ʵ�����ǲ�̫��";
   
 if (!me->query_temp("firstpart"))
 {
 	tell_object(me,"����³���ᵽ���ϴ�����ǰȥѰ�Ҷ�孵�........\n");
 	tell_object(me,"������Ҳ֪��������ߵ���������ƺ��ڹ��ڷ�չ����\n");
 	tell_object(me,"���е����ҵ�ʦ��Ҷ�³�ǰ�����,�⼸����Ҳ˿��û������\n");
 	tell_object(me,"������СаҲ�ڶ���Ǳ߷���������ߵ�����............\n");
 	tell_object(me,"������������ʵ�ڽӴ�̫����,������孵����ڣ���Ҳһ����֪...\n");
 	tell_object(me,"���ȥ��һ��³�ڵĶ��ӣ������Ƿ�֪��(��孵�)���ڣ�\n");
 	me->set_temp("firstpart",1);
 	return "��ȥ��ذ�......";
 }
 else
 	return "��ȥ���ָ����˰�......";
}

void attempt_apprentice(object ob)
{
command("l "+ob->query("id"));
if(this_player()->query("cor")<20)
{
command("sigh "+ob->query("id"));
command("say ��ĵ�ʶ����, �Ҳ����ա�\n");
return;
}
command("smile");
command("nod");
command("say �ã���");
command("recruit "+ob->query("id"));
}
int accept_fight(object ob)
{
command("say ���й���������, �ҽ�����ս����");
message_vision( this_object()->name()+"����¶�����˵����ӡ�\n",ob);
this_object()->set("bellicosity",1800);
command("cmd bellup");
command("wear bell_ring");
return 1;
}
int accept_kill(object ob)
{
command("say û�뵽��Ȼ���˸�������Ұ����");
message_vision( this_object()->name()+"ͻȻ���������ϳ���ɱ����\n",ob);
this_object()->set("bellicosity",3000);
command("cmd bellup");
command("wear bell_ring");
return 1;
}
int do_join()
{
object ob=this_player();
if(!ob->query("class"))
{
ob->set("class","killer");
command("nod "+ob->query("id"));
}
else
{
command("say ־��ͬ������, ������ʦȥ�ɡ�\n");
return 1;
}
message("system",
HIB "���Ҷ����������С���\n\n�ֳ���һ���ֲ���ɱ�֡���\n" NOR,users());
return 1;
}

int accept_object( object me , object ob )
{
object obj;
if(ob->query("id") !="killer_wanted")
{
	command("say ��ô������?");
	return 0;
}
if( me->query("quest/head-kill") == 1) return 0;
if( me->query_temp("head") != 10)  
	return notify_fail("��������������˰���㣬�㻹����û�ʸ����\n");
command("nod");
command("chat* spank "+me->query("id"));
command("say ��С�ӣ���Ȼ��������������񣬾����Ҵ��㵱��ɱ��֮���ɣ���");
me->set("title",HIR"��"+HIG"��"+HIY"ɱ"+HIB"��"NOR);
me->set("quest/head-kill",1);
command("say �Ϸ�Ϊ�˽����㣬�ʹ���ɱ��ħ���ɣ�");
message_vision("$N�����Ĵܳ�һ����������$n���ڡ�\n",this_object(),this_player());
me->set("sec_kee","mkill");
command("say ���Ѿ��ʸ�֪�������������ڵأ������ڵ���ˮ�����㣬��Ŀǰ��û�л���С��ͬ�⡣");
command("say ��С��һ��ʱ�䣬����������������ã�������С��ͻ�ͬ����ȥ�ɣ�");
message("system",
HIM "Ҷ��ɱ��Ц����������������ɽ���в��˳���һ�����˻�����\n\n"+me->query("name")
    +"��ʹ����Ϸ����������棬������������Ե���һһ����ɣ���\n"NOR,users());
}

string ask_blade()
{
object ob;
if( present("ghost blade",this_player()) ) return "��Ҫ��ô ?";
if( !this_player()->query("quests/to-kill") ) return "��Ҫ��ô ?";
ob = new("/open/snow/obj/ghost-blade");
ob->move(this_player());
message_vision("$N��$nһ������ħ����\n",this_object(),this_player());
return "��Ҫ��Ū����...";
}

string ask_blood()
{
 object ob,me=this_player();
 
//if( me->query("title") != HIR"ɱ��ȫ��׷ɱ����ͷ"NOR )
if (!me->query("killyar"))
 return "û�½���ʲôѪ��������?";
message_vision("$N�������������۾���������ȥ�ɣ���\n",me);
me->move("/open/killer/headkill/killtest/flowrm1.c");
me->save();
return "����ھ���������һ��ʮ�ɷ���";
}

void unconcious()
{
       object hu_fa;
	object winner = query_temp("last_damage_from");
       message("system",HIM"�벻����Ҷ��ɱ����Ȼ�����"+winner->query("name")+"
����\n"+
		"����"+winner->query("id")+"����Ƥ�����ˣ�������\n",users());
       message("system"
		,HIR"�ɶ񣡣���Ҷ�飬�����飡��"+winner->query("name")+"��ͷ����
���ң�\n"NOR,users());

       hu_fa = new("/open/killer/npc/silnpc2.c");
       hu_fa->move(environment(winner));
       hu_fa->command("guard behavior_elder");
       hu_fa->command("follow "+winner->query("id"));
       hu_fa->kill_ob(winner);
       hu_fa = new("/open/killer/npc/rednpc2.c");
       hu_fa->move(environment(winner));
       hu_fa->command("guard behavior_elder");
       hu_fa->command("follow "+winner->query("id"));
       hu_fa->kill_ob(winner);
       new("/open/killer/npc/spy3")->move("/open/killer/room/masterm.c");
	:: unconcious();
}

void die()
{
	string head;
	object winner = query_temp("last_damage_from");
	int j;
    if(!winner){
      ::die();
      return ;
    }
	if(!userp(winner) && winner->query_temp("my_boss"))
	{
	winner=find_player(winner->query_temp("my_boss"));
	if(!winner)
	{
	winner= query_temp("last_damage_from");
	}
	if(!winner)
	{
	::die();
	return ;
	}
	}
	if (winner->query("class") != "killer")
	{
	message("system",HIR "����ɱ�ֲ��ݷ�����У�\n��λɱ�����ţ�"+winner->query("name")+
		"��Ҷ��ɱ������\n��λɱ�ָ���ȫ��׷ɱ��"+winner->query("id")+"����\n"NOR,users());
		if(userp(winner))
		{		
			if(winner->query("combat_exp") > 450000)
			{	winner->set("killyar",1);
				winner->set("title",HIR"ɱ��ȫ��׷ɱ����ͷ"NOR);
			}
			else
				winner->set("title",HBRED"������ɱҶ��ɱ������"NOR);
		}
		else
			winner->set("title",HIG"��׳�"NOR);
	}

	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj4/will_shells")->move(environment(winner));
	  message_vision(HIM"\n��Ҷ��ɱ�����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/will_shells",sprintf("%s(%s) ��Ҷ��ɱ����������֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj4/will_shells")->move(environment(winner));
	  message_vision(HIM"\n��Ҷ��ɱ�����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/will_shells",sprintf("%s(%s) ��Ҷ��ɱ����������֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
      :: die();
}


